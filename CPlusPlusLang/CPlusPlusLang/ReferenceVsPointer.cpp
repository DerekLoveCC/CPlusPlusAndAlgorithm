void ReferenceFunc(int& param)
{
    param = 100;
}
void PointerFunc(int* param)
{
    if (param == nullptr) {
        return;
    }
    *param = 200;
}