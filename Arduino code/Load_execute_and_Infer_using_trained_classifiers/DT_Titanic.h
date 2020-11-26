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
                        if (x[0] <= 0.5) {
                            if (x[4] <= 3.5) {
                                if (x[2] <= 4.5) {
                                    return 0;
                                }

                                else {
                                    return 0;
                                }
                            }

                            else {
                                if (x[4] <= 7.0) {
                                    return 0;
                                }

                                else {
                                    return 0;
                                }
                            }
                        }

                        else {
                            if (x[4] <= 5.0) {
                                if (x[2] <= 4.5) {
                                    return 1;
                                }

                                else {
                                    return 0;
                                }
                            }

                            else {
                                if (x[2] <= 4.5) {
                                    return 1;
                                }

                                else {
                                    return 0;
                                }
                            }
                        }
                    }

                protected:
                };
            }
        }
    }
