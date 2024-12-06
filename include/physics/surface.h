#pragma once

#include <string>

namespace Simulation {
    struct SurfaceProperties {
        std::string name;           // Name of surface type
        float roughness;
        float moisture;
        float temp;
        float hardness;
        float base_coeff_friction;
        float durability;

        // Predefined surface types
        static SurfaceProperties Asphalt;
        static SurfaceProperties Gravel;
        static SurfaceProperties Ice;
    };

    class Surface {
    public:
        Surface(const std::string& type, float roughness, float tempreture);

        std::string get_type();
        float get_friction_coeff();

    private:
        std::string type;
        float friction_coeff;
    };
}