#ifndef MBGL_STYLE_PROPERTY_VALUE
#define MBGL_STYLE_PROPERTY_VALUE

#include <mapbox/variant.hpp>

#include <mbgl/style/function.hpp>
#include <mbgl/style/types.hpp>

#include <vector>
#include <array>

namespace mbgl {

typedef mapbox::util::variant<
    Function<std::string>,
    Function<TranslateAnchorType>,
    Function<RotateAnchorType>,
    Function<CapType>,
    Function<JoinType>,
    VisibilityType,
    Function<PlacementType>,
    Function<RotationAlignmentType>,
    Function<TextTransformType>,
    Function<TextJustifyType>,
    Function<TextAnchorType>,
    Function<std::array<float, 2>>,
    Function<bool>,
    Function<float>,
    Function<Color>,
    Function<Faded<std::vector<float>>>,
    Function<Faded<std::string>>
> PropertyValue;

}

#endif
