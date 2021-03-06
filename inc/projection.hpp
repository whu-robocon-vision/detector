#ifndef __PROJECTION_H
#define __PROJECTION_H
#include "include-opencv.hpp"
#include "include-realsense.hpp"

namespace proj
{
class Projection
{
private:
    /* data */
    cv::Mat _extrin_rmat;
    cv::Mat _extrin_tmat;
    rs2_intrinsics _intrinsics;
public:
    Projection(/* args */) {};
    ~Projection() {};
    cv::Point3f pixel2world(const cv::Point2i &pixel,const cv::Mat &depth) const;
    cv::Point3f pixel2camera(const cv::Point2i &pixel,const cv::Mat &depth) const;
    cv::Point3f camera2world(const cv::Point3f point) const;
};

} // namespace proj


#endif