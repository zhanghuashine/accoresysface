//
// Created by jbk on 19-3-14.
//
#include <vector>
#include "layers/fc_layer.hpp"


using namespace std;

namespace caffe{

    void FCLayer::SetUp(const LayerParameter& param, const vector<Blob<double>*>& bottom, vector<Blob<double>*>& top)
    {
        cout << "FCLayer::SetUp()" << param.name() << endl;
        return;
    }


    void FCLayer::Forward(const vector<Blob<double>*>& bottom, vector<Blob<double>*>& top)
    {
        cout << "FCLayer::forward()..." << endl;
        return;
    }

    void FCLayer::calc_shape_(const vector<int>& in_shape, vector<int>& out_shape)
    {
        cout << "FCLayer::calc_shape()..." << endl;
        return;
    }

}
