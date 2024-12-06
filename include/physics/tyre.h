#pragma once

#include "frictionmodel.h";

#include <string>

namespace Simulation {
    struct MaterialProperties {
        std::string name;                   // Material Name
        double density;                     // Material density (kg/m^3)
        double thermal_conductivity;        // Thermal conductivity
        double specific_heat_capacity;      // (J/kg·°C)
        float hardness;                     // Shore A scale material hardness
        float grip_factor;                  
        float wear_rate;
        float max_speed_rating;
    };

    class Tyre {
    public:
        Tyre(float width, float diameter, float tread_thickness, float pressure, float init_temp, MaterialProperties material_props, FrictionModel* friction_model);
        
        // Void
        void update(float dlt_time, float load, float slip_angle, float slip_ratio);
        void apply_forces(float& longitudinal_force, float& lateral_force);
        void check_slip();
        void update_temp(float dlt_time, float ambient_temp, float speed);
        void sim_wear(float dlt_time);
        void set_pressure(float pressure);

        // Float
        float calc_grip() const;
        float get_pressure() const;
        float get_temp() const;
        float get_wear() const;
        float calc_mass() const;
    

        // Bool
        bool is_slipping() const;

    private:
        // Tyre physical and performance properties
        float width;                    // Tyre width in milimeters
        float diameter;                 // Tyre outer diameter in milimeters
        float pressure;                 // Tyre pressure in Bar
        float temp;                     // Tyre temperature in °C
        float wear;                     // Wear level (0 = new, 1 = fully worn)
        float tread_thickness;          // Thickness of the tread in meters

        // Material Properties
        MaterialProperties material_props;

        // Pointer to friction model
        FrictionModel* friction_model;
    };
}