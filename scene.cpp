/**
 * @file scene.h
 * @brief painting scene
 * @author Roman Safin
 */
#include "scene.h"

Scene::Scene(QObject *parent) : QGraphicsScene(parent)
{
}

Scene::~Scene()
{
}

void Scene::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    addEllipse(event->scenePos().x()-(size/2), event->scenePos().y()-(size/2),
               size, size, QPen(Qt::NoPen), QBrush(colour));
    previousPoint = event->scenePos();
}

void Scene::mouseMoveEvent(QGraphicsSceneMouseEvent *event)
{
    addLine(previousPoint.x(), previousPoint.y(),
            event->scenePos().x(), event->scenePos().y(),
            QPen(colour, size,Qt::SolidLine,Qt::RoundCap));
    previousPoint = event->scenePos();
}

void Scene::setColor(QString colour)
{
    this->colour = colour;
}

void Scene::setSize(QString size)
{
    this->size = size.toInt();
}
