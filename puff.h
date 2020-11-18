#ifndef PUFF_H
#define PUFF_H

#include <QVector3D>
#include <QOpenGLBuffer>
#include <QOpenGLShaderProgram>

class Puff
{
public:
    Puff(QVector3D position, float size, QVector3D speed, float lifeTime, QVector3D color);
    QVector3D position;
    float size;
    QVector3D speed;
    float lifeTime;
    float initLifeTime;
    QVector3D color;
    QVector2D frame;
    void animate(float dt);
    void display(QOpenGLShaderProgram *sp, QOpenGLBuffer vbo_particule);
    QMatrix4x4 modelMatrix;
};

#endif // PUFF_H
