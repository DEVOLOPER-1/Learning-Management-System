// https://github.com/qPCR4vir/nana-docs/wiki/Getting-Started

// #include <nana/gui/wvl.hpp>
#include <nana/gui/widgets/label.hpp>
using namespace nana;

int main()
{
    using namespace nana;
    form fm;
    label lb(fm, fm.size());
    lb.caption(STR("Hello, World"));
    fm.show();
    exec();
}