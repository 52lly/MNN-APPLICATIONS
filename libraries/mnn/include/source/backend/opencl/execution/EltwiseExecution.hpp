//
//  EltwiseExecution.hpp
//  MNN
//
//  Created by MNN on 2019/01/31.
//  Copyright © 2018, Alibaba Group Holding Limited
//

#ifndef EltwiseExecution_hpp
#define EltwiseExecution_hpp

#include "CommonExecution.hpp"

namespace MNN {
namespace OpenCL {

class EltwiseExecution : public CommonExecution {
public:
    EltwiseExecution(const std::vector<Tensor *> &inputs, const std::string &compute, Backend *backend);
    virtual ~EltwiseExecution() = default;

    virtual ErrorCode onResize(const std::vector<Tensor *> &inputs, const std::vector<Tensor *> &outputs) override;

private:
    std::set<std::string> mBuildOptions;
};

} // namespace OpenCL
} // namespace MNN
#endif /* EltwiseExecution_hpp */
