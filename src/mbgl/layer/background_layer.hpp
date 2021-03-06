#ifndef MBGL_BACKGROUND_LAYER
#define MBGL_BACKGROUND_LAYER

#include <mbgl/style/style_layer.hpp>
#include <mbgl/style/style_properties.hpp>
#include <mbgl/style/paint_properties_map.hpp>
#include <mbgl/style/class_properties.hpp>

namespace mbgl {

class BackgroundLayer : public StyleLayer {
public:
    void parseLayout(const JSVal&) override {};
    void parsePaints(const JSVal&) override;

    void recalculate(const StyleCalculationParameters&) override;

    std::unique_ptr<Bucket> createBucket(StyleBucketParameters&) const override;

    BackgroundPaintProperties properties;
};

}

#endif
