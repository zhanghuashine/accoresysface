//
// Created by jbk on 19-3-22.
//

#include <vector>
#include "input_layer.hpp"


using namespace std;

namespace caffe{

    void InputLayer::SetUp(const LayerParameter& param, const vector<pair<string, shared_ptr<Blob>>>& bottom, vector<pair<string, shared_ptr<Blob>>>& top)
    {
        cout << "InputLayer::SetUp()..." << param.name() << endl;

        return;
    }


    void InputLayer::Forward(const vector<pair<string, shared_ptr<Blob>>>& bottom, vector<pair<string, shared_ptr<Blob>>>& top)
    {
        cout << "InputLayer::forward()..." << endl;

        return;
    }

    void InputLayer::calc_shape_(const vector<int>& in_shape, vector<int>& out_shape)
    {
        cout << "InputLayer::calc_shape()..." << endl;

        return;
    }

}
