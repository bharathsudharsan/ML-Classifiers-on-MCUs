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
                        if (x[7] <= 0.5) {
                            if (x[6] <= 0.5) {
                                if (x[8] <= 0.5) {
                                    return 0;
                                }

                                else {
                                    if (x[0] <= 0.2904636338353157) {
                                        return 0;
                                    }

                                    else {
                                        if (x[2] <= 1.2413911819458008) {
                                            return 0;
                                        }

                                        else {
                                            return 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[21] <= 0.5) {
                                    if (x[20] <= 0.5) {
                                        if (x[4] <= -0.42237916588783264) {
                                            if (x[24] <= 0.5) {
                                                if (x[9] <= 0.5) {
                                                    return 0;
                                                }

                                                else {
                                                    if (x[29] <= 0.5) {
                                                        return 0;
                                                    }

                                                    else {
                                                        return 1;
                                                    }
                                                }
                                            }

                                            else {
                                                return 1;
                                            }
                                        }

                                        else {
                                            return 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 1.106633186340332) {
                                            if (x[2] <= -0.40127481520175934) {
                                                if (x[4] <= -0.5517835021018982) {
                                                    return 0;
                                                }

                                                else {
                                                    return 1;
                                                }
                                            }

                                            else {
                                                return 0;
                                            }
                                        }

                                        else {
                                            return 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[4] <= -0.2929748296737671) {
                                        if (x[2] <= 0.2557915672659874) {
                                            if (x[19] <= 0.5) {
                                                if (x[2] <= -0.09206711128354073) {
                                                    return 0;
                                                }

                                                else {
                                                    if (x[1] <= -1.2349959015846252) {
                                                        return 1;
                                                    }

                                                    else {
                                                        return 0;
                                                    }
                                                }
                                            }

                                            else {
                                                return 0;
                                            }
                                        }

                                        else {
                                            if (x[10] <= 0.5) {
                                                if (x[4] <= -0.7674573957920074) {
                                                    if (x[8] <= 0.5) {
                                                        if (x[2] <= 1.5795871019363403) {
                                                            return 0;
                                                        }

                                                        else {
                                                            return 1;
                                                        }
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
                                                return 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[12] <= 0.5) {
                                            if (x[3] <= 0.4964783191680908) {
                                                if (x[8] <= 0.5) {
                                                    if (x[4] <= 2.467650890350342) {
                                                        if (x[9] <= 0.5) {
                                                            if (x[16] <= 0.5) {
                                                                return 0;
                                                            }

                                                            else {
                                                                return 1;
                                                            }
                                                        }

                                                        else {
                                                            return 1;
                                                        }
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
                                                if (x[14] <= 0.5) {
                                                    return 0;
                                                }

                                                else {
                                                    if (x[17] <= 0.5) {
                                                        if (x[4] <= 0.22464249841868877) {
                                                            if (x[29] <= 0.5) {
                                                                return 0;
                                                            }

                                                            else {
                                                                return 1;
                                                            }
                                                        }

                                                        else {
                                                            return 0;
                                                        }
                                                    }

                                                    else {
                                                        if (x[19] <= 0.5) {
                                                            return 0;
                                                        }

                                                        else {
                                                            return 1;
                                                        }
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            if (x[28] <= 0.5) {
                                                if (x[27] <= 0.5) {
                                                    if (x[13] <= 0.5) {
                                                        return 0;
                                                    }

                                                    else {
                                                        return 1;
                                                    }
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
                                }
                            }
                        }

                        else {
                            if (x[28] <= 0.5) {
                                if (x[11] <= 0.5) {
                                    return 1;
                                }

                                else {
                                    if (x[13] <= 0.5) {
                                        if (x[18] <= 0.5) {
                                            if (x[29] <= 0.5) {
                                                if (x[1] <= -0.4925281032919884) {
                                                    return 0;
                                                }

                                                else {
                                                    return 1;
                                                }
                                            }

                                            else {
                                                if (x[21] <= 0.5) {
                                                    if (x[1] <= -0.14985069260001183) {
                                                        if (x[3] <= -1.7775079011917114) {
                                                            if (x[2] <= 0.5070228427648544) {
                                                                return 0;
                                                            }

                                                            else {
                                                                return 1;
                                                            }
                                                        }

                                                        else {
                                                            return 1;
                                                        }
                                                    }

                                                    else {
                                                        return 1;
                                                    }
                                                }

                                                else {
                                                    if (x[0] <= 0.4007524698972702) {
                                                        if (x[1] <= 0.24993964191526175) {
                                                            if (x[20] <= 0.5) {
                                                                return 1;
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
                                                        return 0;
                                                    }
                                                }
                                            }
                                        }

                                        else {
                                            return 1;
                                        }
                                    }

                                    else {
                                        if (x[2] <= -0.34329837560653687) {
                                            if (x[19] <= 0.5) {
                                                if (x[4] <= 1.8206292986869812) {
                                                    if (x[3] <= -1.0996851027011871) {
                                                        return 0;
                                                    }

                                                    else {
                                                        if (x[1] <= 1.0495202988386154) {
                                                            return 1;
                                                        }

                                                        else {
                                                            return 0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    return 1;
                                                }
                                            }

                                            else {
                                                return 1;
                                            }
                                        }

                                        else {
                                            return 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[24] <= 0.5) {
                                    if (x[22] <= 0.5) {
                                        if (x[3] <= -1.318337619304657) {
                                            return 1;
                                        }

                                        else {
                                            if (x[4] <= -0.24984005093574524) {
                                                if (x[3] <= -0.46559277176856995) {
                                                    if (x[14] <= 0.5) {
                                                        return 0;
                                                    }

                                                    else {
                                                        if (x[1] <= -0.26407649740576744) {
                                                            return 1;
                                                        }

                                                        else {
                                                            return 0;
                                                        }
                                                    }
                                                }

                                                else {
                                                    if (x[1] <= -0.26407649740576744) {
                                                        return 0;
                                                    }

                                                    else {
                                                        if (x[1] <= 0.1357138343155384) {
                                                            if (x[3] <= 0.27782580256462097) {
                                                                return 0;
                                                            }

                                                            else {
                                                                return 1;
                                                            }
                                                        }

                                                        else {
                                                            return 0;
                                                        }
                                                    }
                                                }
                                            }

                                            else {
                                                if (x[17] <= 0.5) {
                                                    return 0;
                                                }

                                                else {
                                                    if (x[23] <= 0.5) {
                                                        if (x[5] <= 0.5) {
                                                            return 0;
                                                        }

                                                        else {
                                                            return 1;
                                                        }
                                                    }

                                                    else {
                                                        return 1;
                                                    }
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        return 1;
                                    }
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
