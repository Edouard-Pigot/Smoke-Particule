#include "puff.h"

Puff::Puff(QVector3D position, float size, QVector3D speed, float lifeTime, QVector3D color){
    this->position = position;
    this->size = size;
    this->speed = speed;
    this->lifeTime = lifeTime;
    this->initLifeTime = lifeTime;
    this->color = color;
}

void Puff::animate(float dt){
    position += speed * dt;
    lifeTime -= dt;
    frame.setX(frame.x() + 1);
    if(frame.x() >= 4){
        frame.setX(0);
        frame.setY(frame.y() + 1);
        if(frame.y() >= 4){
            frame.setY(0);
        }
    }
}

void Puff::display(QOpenGLShaderProgram *sp, QOpenGLBuffer vbo_particule){
    vbo_particule.bind();

    modelMatrix.setToIdentity();
    modelMatrix.translate(position);

    sp->setUniformValue("modelMatrix", modelMatrix);
    sp->setUniformValue("particleSize", size + (1 - (lifeTime / initLifeTime)));
    sp->setUniformValue("elapsed", lifeTime / initLifeTime);
    sp->setUniformValue("color", color);
    sp->setUniformValue("tilePosition", QVector2D(frame.x(), frame.y()));
    glDrawArrays(GL_TRIANGLES, 0, 6);
}
