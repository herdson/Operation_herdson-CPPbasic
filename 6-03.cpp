#include<iostream>
#include<cstring>

struct box
{
    char maker[40];
    float height, width, length, volume;
};

void boxinfo(box* info, const char *name, float hgt, float wid, float len, float vol)
{
    strcpy(info->maker, name);
    info->height = hgt;
    info->width = wid;
    info->length = len;
    info->volume = vol;

    std::cout << info->maker << " " << info->height << " " << info->width << " "
    << info->length << " " << info->volume << '\n';
}

void boxinfo(box* info)
{
    std::cout << info->maker << " " << info->height << " " << info->width << " "
    << info->length << " " << info->volume << '\n';
}

void volumesetter(box* info)
{
    info->volume = info->width * info->length * info->height;
}

int main()
{
    box *victim = new box;
    boxinfo(victim, "SAMSUNG", 25.6, 55.9, 60.6, 0);
    volumesetter(victim);
    std::cout << "The box info: " << '\n';
    boxinfo(victim);
    return 0;
}
