#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQuickWidget>

#include "clockcircle.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    // Всё, что требуется в данном файле - это зарегистрировать новый класс (Тип объекта) для QML слоя
    qmlRegisterType<ClockCircle>("ClockCircle",1,0,"ClockCircle");

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
