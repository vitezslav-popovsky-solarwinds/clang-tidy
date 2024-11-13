#pragma once

class primitive_mock
{
    bool& evaluate_called_;

public:
    explicit primitive_mock(bool& evaluate_called_ref)
        : evaluate_called_(evaluate_called_ref)
    {
        evaluate_called_ = false;
    }

    void evaluate() const
    {
        evaluate_called_ = true;
    }
};
