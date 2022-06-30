#include "video.h"

Video::Video(QString url, QString title, QImage image)
{
    Url = url;
    Title = title;
    Image = image;
    Download = false;
}
