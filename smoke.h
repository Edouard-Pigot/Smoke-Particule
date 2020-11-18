#ifndef SMOKE_H
#define SMOKE_H

#include "puff.h"
#include <QVector3D>
#include <list>

class Smoke
{
public:
    Smoke(QVector3D position, float timeInterval);
    QVector3D position;
    std::list<Puff> puffs;
    float timeInterval;
    float elapsedTime = 0;
    float timeToLive;
    QVector3D puffColor = QVector3D(1, 1, 1);
    void animate(float dt);
    void display(QOpenGLShaderProgram *sp, QOpenGLBuffer vbo_particule);
};

#endif // SMOKE_H
