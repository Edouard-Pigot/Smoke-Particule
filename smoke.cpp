#include "smoke.h"

Smoke::Smoke(QVector3D position, float timeInterval){
    this->position = position;
    this->timeInterval = timeInterval;
    this->timeToLive = std::rand()%8+5;
}

void Smoke::animate(float dt){
    elapsedTime += dt;
    if(elapsedTime > timeInterval){
        elapsedTime = 0;
        Puff *puff = new Puff(position, 1.0f, QVector3D(0, 1.0f, 0), timeToLive, puffColor);
        puffs.push_back(*puff);
    }

    std::list<Puff>::iterator i;
    i = puffs.begin();
    while(i != puffs.end()){
        if(i->lifeTime <= 0)
            i = puffs.erase(i);
        else
            i++;
    }

    i = puffs.begin();
    while(i != puffs.end()){
        i->animate(dt);
        i++;
    }
}

void Smoke::display(QOpenGLShaderProgram *sp, QOpenGLBuffer vbo_particule){
    std::list<Puff>::iterator i;
    i = puffs.begin();
    while(i != puffs.end()){
        i->display(sp, vbo_particule);
        i++;
    }
}
