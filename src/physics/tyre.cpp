#include "tyre.h"

#include <cmath>

namespace Simulation {
    Tyre::Tyre(float width, float diameter, float tread_thickness, float pressure, float init_temp, MaterialProperties material_props, FrictionModel* friction_model)
    : width(width),
        diameter(diameter),
        tread_thickness(tread_thickness),
        pressure(pressure),
        temp(init_temp),
        wear(0.0f),
        material_props(material_props),
        friction_model(friction_model) {}

    // Float
    float Tyre::calc_mass() const {
        // Approx volume of tyre as a torus (ring shaped geometry)
        float radius_inner = (diameter / 2.0f) - tread_thickness;
        float radius_tube = width / 2.0f;

        // Find volume and convert to cubic meters
        float volume = (2.0f * (std::sqrt(M_PI)) * radius_inner * (std::sqrt(radius_tube))) / 1000000000.0f;

        // calculate and return mass
        return material_props.density * volume;
    }

        // Getters
    float Tyre::get_pressure() const { 
        return pressure; 
    }

    float Tyre::get_temp() const {
        return temp;
    }

    float Tyre::get_wear() const {
        return wear;
    }

    // Void
    void Tyre::set_pressure(float pressure) {
        this->pressure = pressure;
    }
}