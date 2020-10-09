/**
 * @file scene.h
 * @brief painting scene
 * @author Roman Safin
 */
#ifndef SCENE_H
#define SCENE_H
#include <QGraphicsScene>
#include <QGraphicsSceneMouseEvent>

class Scene : public QGraphicsScene
{
    Q_OBJECT
private:
    /**
     * @brief previous point coordinates
     */
    QPointF previousPoint;
    /**
     * @brief brush colour
     */
    QColor colour;
    /**
     * @brief brush size
     */
    int size;

public:
    explicit Scene(QObject *parent = nullptr);
    ~Scene();

private:
    /**
     * @brief mouse button pressed
     * @param event
     */
    void mousePressEvent(QGraphicsSceneMouseEvent *event);
    /**
     * @brief mouse moved
     * @param event
     */
    void mouseMoveEvent(QGraphicsSceneMouseEvent *event);

public slots:
    /**
     * @brief set colour
     * @param colour
     */
    void setColor(QString colour);
    /**
     * @brief set brush size
     * @param size
     */
    void setSize (QString size);
};

#endif // SCENE_H
