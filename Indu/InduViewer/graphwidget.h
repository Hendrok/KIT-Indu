#ifndef GRAPHWIDGET_H
#define GRAPHWIDGET_H

#include <QObject>

class GraphWidget : public QObject
{
    Q_OBJECT
public:
    explicit GraphWidget(QObject *parent = nullptr);

};

#endif // GRAPHWIDGET_H
