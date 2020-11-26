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
                        if (x[2] <= 2.5) {
                            if (x[0] <= 76.0) {
                                if (x[0] <= 38.5) {
                                    return 0;
                                }

                                else {
                                    return 0;
                                }
                            }

                            else {
                                return 1;
                            }
                        }

                        else {
                            if (x[0] <= 42.5) {
                                if (x[1] <= 65.5) {
                                    return 0;
                                }

                                else {
                                    return 0;
                                }
                            }

                            else {
                                if (x[2] <= 8.5) {
                                    return 0;
                                }

                                else {
                                    return 1;
                                }
                            }
                        }
                    }

                protected:
                };
            }
        }
    }
