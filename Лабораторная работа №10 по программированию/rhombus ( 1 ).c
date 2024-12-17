#include <stdio.h>
#include "rhombus.h"

        float calculate_area(Rhombus rhombus) {
                return (rhombus.d1 * rhombus.d2) / 2;
        }

        int is_square(Rhombus rhombus) {
                return rhombus.d1 == rhombus.d2;
        }

        void FindMin (Rhombus rhombuses[], int k, Rhombus* min_rhombus, int* squares_count) {

                *squares_count = 0;
                float min_area = -1;

                for (int i = 0; i < k; i++) {
                        float area = calculate_area(rhombuses[i]);

                        if (is_square(rhombuses[i])) {
                                (*squares_count)++;
                }

                        if (min_area == -1 || area < min_area) {
                                min_area = area;
                                *min_rhombus = rhombuses[i];
                }
        }
}