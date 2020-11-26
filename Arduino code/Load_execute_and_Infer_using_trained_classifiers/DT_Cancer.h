#pragma once
//#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class DecisionTree {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        if (x[27] <= 0.1423499956727028) {
                            if (x[22] <= 107.75) {
                                if (x[18] <= 0.016490000300109386) {
                                    return 1;
                                }

                                else {
                                    return 1;
                                }
                            }

                            else {
                                if (x[21] <= 20.22000026702881) {
                                    return 1;
                                }

                                else {
                                    return 0;
                                }
                            }
                        }

                        else {
                            if (x[22] <= 112.79999923706055) {
                                if (x[21] <= 27.575000762939453) {
                                    return 1;
                                }

                                else {
                                    return 0;
                                }
                            }

                            else {
                                return 0;
                            }
                        }
                    }

                protected:
                };
            }
        }
    }
