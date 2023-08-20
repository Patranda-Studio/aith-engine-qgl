#ifndef WIDGET_H
#define WIDGET_H

#include <QOpenGLWidget>
#include <QMatrix4x4>
#include <QOpenGLShaderProgram>
#include <QOpenGLTexture>
#include <QOpenGLBuffer>
#include <QBasicTimer>

class SimpleObject3D;
class Transformational;
class Group3D;

class Widget : public QOpenGLWidget {
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
protected:
    void initializeGL(void);
    void resizeGL(int w, int h);
    void paintGL(void);

    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void wheelEvent(QWheelEvent *event);
    void timerEvent(QTimerEvent *event);

    void initShaders();
    void initCube(float width);
private:
    QMatrix4x4 m_projectionMatrix;
    QOpenGLShaderProgram m_program;
    QVector2D m_mousePosition;
    QQuaternion m_rotation;

    QVector<SimpleObject3D *> m_objects;
    QVector<Group3D *> m_groups;
    QVector<Transformational *> m_transformObjects;

    float m_z;

    QBasicTimer m_timer;

    float angleObject;
    float angleGroup1;
    float angleGroup2;
    float angleMain;

};
#endif // WIDGET_H
