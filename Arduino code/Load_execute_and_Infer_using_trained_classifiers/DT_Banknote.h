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
                        if (x[0] <= 0.3201649934053421) {
                            if (x[1] <= 5.865350008010864) {
                                if (x[2] <= 3.0642000436782837) {
                                    return 1;
                                }

                                else {
                                    return 1;
                                }
                            }

                            else {
                                if (x[0] <= -3.4449000358581543) {
                                    return 1;
                                }

                                else {
                                    return 0;
                                }
                            }
                        }

                        else {
                            if (x[0] <= 2.2353999614715576) {
                                if (x[2] <= -2.2721999883651733) {
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
