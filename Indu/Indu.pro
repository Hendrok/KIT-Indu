TEMPLATE = subdirs

SUBDIRS += \
    InduCore \
    InduViewer \
    InduViewerCore

InduViewerCore.depends = InduCore
InduViewer.depends = InduViewerCore
