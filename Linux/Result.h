#ifndef RESULT_H
#define RESULT_H

enum Result
{
    Success = 0,

    CommandFileNotExist = 100,
    LoadFileNotExist,

    VertexKeyNotExist = 200,
    InvalidVertexKey,
    GraphNotExist,
    InvalidAlgorithm,
    NegativeCycleDetected,

    NonDefinedCommand = 300,
};

#endif