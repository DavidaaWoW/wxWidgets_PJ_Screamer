#ifndef PAN_H
#define PAN_H


class pan
{
    public:
        pan();
        ~pan();
    public:
    void OnWindowEnter(wxMouseEvent &evt);
    void OnWindowLeave(wxMouseEvent &evt);
};

#endif // PAN_H
