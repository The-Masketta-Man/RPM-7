/**
 * @file paint.h
 * @brief painting window
 * @author Roman Safin
 */
#ifndef PAINT_H
#define PAINT_H

#include <QWidget>
#include <QFileDialog>
#include <scene.h>

QT_BEGIN_NAMESPACE
namespace Ui { class Paint; }
QT_END_NAMESPACE

class Paint : public QWidget
{
    Q_OBJECT
private:
    Ui::Paint *ui;
    Scene* scene;

public:
    Paint(QWidget *parent = nullptr);
    ~Paint();

private slots:
    /**
     * @brief save image
     */
    void saveImage();
    /**
     * @brief open image
     */
    void openImage();
};
#endif // PAINT_H
