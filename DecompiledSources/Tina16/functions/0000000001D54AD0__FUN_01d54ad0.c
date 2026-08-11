/* Ghidra address: 01d54ad0 */
/* Ghidra symbol: FUN_01d54ad0 */


void FUN_01d54ad0(longlong param_1,undefined8 param_2,longlong param_3,char param_4)

{
  double dVar1;
  double dVar2;
  double unaff_XMM7_Qa;
  
  FUN_016ee1f0(param_2,param_1,0x78);
  dVar1 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),*(undefined1 *)(param_1 + 1)
                               ,0,0);
  if (param_4 == '\x01') {
    dVar2 = (double)FUN_01d546a0(dVar1);
    if (*(double *)(param_1 + 0x48) < dVar2) {
      if ((dVar1 < *(double *)(param_1 + 0x48) || dVar1 == *(double *)(param_1 + 0x48)) ||
         (*(double *)(param_1 + 0x50) < dVar1)) {
        if ((dVar1 < *(double *)(param_1 + 0x50) || dVar1 == *(double *)(param_1 + 0x50)) ||
           (*(double *)(param_1 + 0x58) < dVar1)) {
          if ((dVar1 < *(double *)(param_1 + 0x58) || dVar1 == *(double *)(param_1 + 0x58)) ||
             (*(double *)(param_1 + 0x60) < dVar1)) {
            if ((dVar1 < *(double *)(param_1 + 0x60) || dVar1 == *(double *)(param_1 + 0x60)) ||
               (*(double *)(param_1 + 0x68) < dVar1)) {
              if (dVar1 < *(double *)(param_1 + 0x68) || dVar1 == *(double *)(param_1 + 0x68)) {
                if (dVar1 <= -*(double *)(param_1 + 0x48)) {
                  if ((-*(double *)(param_1 + 0x48) <= dVar1) ||
                     (dVar1 < -*(double *)(param_1 + 0x50))) {
                    if ((-*(double *)(param_1 + 0x50) <= dVar1) ||
                       (dVar1 < -*(double *)(param_1 + 0x58))) {
                      if ((-*(double *)(param_1 + 0x58) <= dVar1) ||
                         (dVar1 < -*(double *)(param_1 + 0x60))) {
                        if ((-*(double *)(param_1 + 0x60) <= dVar1) ||
                           (dVar1 < -*(double *)(param_1 + 0x68))) {
                          if (dVar1 < -*(double *)(param_1 + 0x68)) {
                            unaff_XMM7_Qa =
                                 ((((-*(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x48) -
                                    *(double *)(param_1 + 0x20) *
                                    (*(double *)(param_1 + 0x50) - *(double *)(param_1 + 0x48))) -
                                   *(double *)(param_1 + 0x28) *
                                   (*(double *)(param_1 + 0x58) - *(double *)(param_1 + 0x50))) -
                                  *(double *)(param_1 + 0x30) *
                                  (*(double *)(param_1 + 0x60) - *(double *)(param_1 + 0x58))) -
                                 *(double *)(param_1 + 0x38) *
                                 (*(double *)(param_1 + 0x68) - *(double *)(param_1 + 0x60))) +
                                 *(double *)(param_1 + 0x40) * (dVar1 + *(double *)(param_1 + 0x68))
                            ;
                          }
                        }
                        else {
                          unaff_XMM7_Qa =
                               (((-*(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x48) -
                                 *(double *)(param_1 + 0x20) *
                                 (*(double *)(param_1 + 0x50) - *(double *)(param_1 + 0x48))) -
                                *(double *)(param_1 + 0x28) *
                                (*(double *)(param_1 + 0x58) - *(double *)(param_1 + 0x50))) -
                               *(double *)(param_1 + 0x30) *
                               (*(double *)(param_1 + 0x60) - *(double *)(param_1 + 0x58))) +
                               *(double *)(param_1 + 0x38) * (dVar1 + *(double *)(param_1 + 0x60));
                        }
                      }
                      else {
                        unaff_XMM7_Qa =
                             ((-*(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x48) -
                              *(double *)(param_1 + 0x20) *
                              (*(double *)(param_1 + 0x50) - *(double *)(param_1 + 0x48))) -
                             *(double *)(param_1 + 0x28) *
                             (*(double *)(param_1 + 0x58) - *(double *)(param_1 + 0x50))) +
                             *(double *)(param_1 + 0x30) * (dVar1 + *(double *)(param_1 + 0x58));
                      }
                    }
                    else {
                      unaff_XMM7_Qa =
                           (-*(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x48) -
                           *(double *)(param_1 + 0x20) *
                           (*(double *)(param_1 + 0x50) - *(double *)(param_1 + 0x48))) +
                           *(double *)(param_1 + 0x28) * (dVar1 + *(double *)(param_1 + 0x50));
                    }
                  }
                  else {
                    unaff_XMM7_Qa =
                         -*(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x48) +
                         *(double *)(param_1 + 0x20) * (dVar1 + *(double *)(param_1 + 0x48));
                  }
                }
                else {
                  unaff_XMM7_Qa = *(double *)(param_1 + 0x18) * dVar1;
                }
              }
              else {
                unaff_XMM7_Qa =
                     *(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x48) +
                     *(double *)(param_1 + 0x20) *
                     (*(double *)(param_1 + 0x50) - *(double *)(param_1 + 0x48)) +
                     *(double *)(param_1 + 0x28) *
                     (*(double *)(param_1 + 0x58) - *(double *)(param_1 + 0x50)) +
                     *(double *)(param_1 + 0x30) *
                     (*(double *)(param_1 + 0x60) - *(double *)(param_1 + 0x58)) +
                     *(double *)(param_1 + 0x38) *
                     (*(double *)(param_1 + 0x68) - *(double *)(param_1 + 0x60)) +
                     *(double *)(param_1 + 0x40) * (dVar1 - *(double *)(param_1 + 0x68));
              }
            }
            else {
              unaff_XMM7_Qa =
                   *(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x48) +
                   *(double *)(param_1 + 0x20) *
                   (*(double *)(param_1 + 0x50) - *(double *)(param_1 + 0x48)) +
                   *(double *)(param_1 + 0x28) *
                   (*(double *)(param_1 + 0x58) - *(double *)(param_1 + 0x50)) +
                   *(double *)(param_1 + 0x30) *
                   (*(double *)(param_1 + 0x60) - *(double *)(param_1 + 0x58)) +
                   *(double *)(param_1 + 0x38) * (dVar1 - *(double *)(param_1 + 0x60));
            }
          }
          else {
            unaff_XMM7_Qa =
                 *(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x48) +
                 *(double *)(param_1 + 0x20) *
                 (*(double *)(param_1 + 0x50) - *(double *)(param_1 + 0x48)) +
                 *(double *)(param_1 + 0x28) *
                 (*(double *)(param_1 + 0x58) - *(double *)(param_1 + 0x50)) +
                 *(double *)(param_1 + 0x30) * (dVar1 - *(double *)(param_1 + 0x58));
          }
        }
        else {
          unaff_XMM7_Qa =
               *(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x48) +
               *(double *)(param_1 + 0x20) *
               (*(double *)(param_1 + 0x50) - *(double *)(param_1 + 0x48)) +
               *(double *)(param_1 + 0x28) * (dVar1 - *(double *)(param_1 + 0x50));
        }
      }
      else {
        unaff_XMM7_Qa =
             *(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x48) +
             *(double *)(param_1 + 0x20) * (dVar1 - *(double *)(param_1 + 0x48));
      }
    }
    else {
      unaff_XMM7_Qa = *(double *)(param_1 + 0x18) * dVar1;
    }
    dVar2 = (double)FUN_01d546a0(dVar1);
    if (*(double *)(param_1 + 0x48) <= dVar2) {
      dVar2 = (double)FUN_01d546a0(dVar1);
      if (*(double *)(param_1 + 0x50) <= dVar2) {
        dVar2 = (double)FUN_01d546a0(dVar1);
        if (*(double *)(param_1 + 0x58) <= dVar2) {
          dVar2 = (double)FUN_01d546a0(dVar1);
          if (*(double *)(param_1 + 0x60) <= dVar2) {
            dVar2 = (double)FUN_01d546a0(dVar1);
            if (*(double *)(param_1 + 0x68) <= dVar2) {
              dVar2 = *(double *)(param_1 + 0x40);
            }
            else {
              dVar2 = *(double *)(param_1 + 0x38);
            }
          }
          else {
            dVar2 = *(double *)(param_1 + 0x30);
          }
        }
        else {
          dVar2 = *(double *)(param_1 + 0x28);
        }
      }
      else {
        dVar2 = *(double *)(param_1 + 0x20);
      }
    }
    else {
      dVar2 = *(double *)(param_1 + 0x18);
    }
    FUN_016ed320(param_2,2,unaff_XMM7_Qa - dVar2 * dVar1,dVar2,0);
  }
  else if (param_4 == '\x06') {
    dVar2 = (double)FUN_01d546a0(dVar1);
    if (*(double *)(param_1 + 0x48) < dVar2) {
      if ((dVar1 < *(double *)(param_1 + 0x48) || dVar1 == *(double *)(param_1 + 0x48)) ||
         (*(double *)(param_1 + 0x50) < dVar1)) {
        if ((dVar1 < *(double *)(param_1 + 0x50) || dVar1 == *(double *)(param_1 + 0x50)) ||
           (*(double *)(param_1 + 0x58) < dVar1)) {
          if ((dVar1 < *(double *)(param_1 + 0x58) || dVar1 == *(double *)(param_1 + 0x58)) ||
             (*(double *)(param_1 + 0x60) < dVar1)) {
            if ((dVar1 < *(double *)(param_1 + 0x60) || dVar1 == *(double *)(param_1 + 0x60)) ||
               (*(double *)(param_1 + 0x68) < dVar1)) {
              if (dVar1 < *(double *)(param_1 + 0x68) || dVar1 == *(double *)(param_1 + 0x68)) {
                if (dVar1 <= -*(double *)(param_1 + 0x48)) {
                  if ((-*(double *)(param_1 + 0x48) <= dVar1) ||
                     (dVar1 < -*(double *)(param_1 + 0x50))) {
                    if ((-*(double *)(param_1 + 0x50) <= dVar1) ||
                       (dVar1 < -*(double *)(param_1 + 0x58))) {
                      if ((-*(double *)(param_1 + 0x58) <= dVar1) ||
                         (dVar1 < -*(double *)(param_1 + 0x60))) {
                        if ((-*(double *)(param_1 + 0x60) <= dVar1) ||
                           (dVar1 < -*(double *)(param_1 + 0x68))) {
                          if (dVar1 < -*(double *)(param_1 + 0x68)) {
                            unaff_XMM7_Qa =
                                 ((((-*(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x48) -
                                    *(double *)(param_1 + 0x20) *
                                    (*(double *)(param_1 + 0x50) - *(double *)(param_1 + 0x48))) -
                                   *(double *)(param_1 + 0x28) *
                                   (*(double *)(param_1 + 0x58) - *(double *)(param_1 + 0x50))) -
                                  *(double *)(param_1 + 0x30) *
                                  (*(double *)(param_1 + 0x60) - *(double *)(param_1 + 0x58))) -
                                 *(double *)(param_1 + 0x38) *
                                 (*(double *)(param_1 + 0x68) - *(double *)(param_1 + 0x60))) +
                                 *(double *)(param_1 + 0x40) * (dVar1 + *(double *)(param_1 + 0x68))
                            ;
                          }
                        }
                        else {
                          unaff_XMM7_Qa =
                               (((-*(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x48) -
                                 *(double *)(param_1 + 0x20) *
                                 (*(double *)(param_1 + 0x50) - *(double *)(param_1 + 0x48))) -
                                *(double *)(param_1 + 0x28) *
                                (*(double *)(param_1 + 0x58) - *(double *)(param_1 + 0x50))) -
                               *(double *)(param_1 + 0x30) *
                               (*(double *)(param_1 + 0x60) - *(double *)(param_1 + 0x58))) +
                               *(double *)(param_1 + 0x38) * (dVar1 + *(double *)(param_1 + 0x60));
                        }
                      }
                      else {
                        unaff_XMM7_Qa =
                             ((-*(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x48) -
                              *(double *)(param_1 + 0x20) *
                              (*(double *)(param_1 + 0x50) - *(double *)(param_1 + 0x48))) -
                             *(double *)(param_1 + 0x28) *
                             (*(double *)(param_1 + 0x58) - *(double *)(param_1 + 0x50))) +
                             *(double *)(param_1 + 0x30) * (dVar1 + *(double *)(param_1 + 0x58));
                      }
                    }
                    else {
                      unaff_XMM7_Qa =
                           (-*(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x48) -
                           *(double *)(param_1 + 0x20) *
                           (*(double *)(param_1 + 0x50) - *(double *)(param_1 + 0x48))) +
                           *(double *)(param_1 + 0x28) * (dVar1 + *(double *)(param_1 + 0x50));
                    }
                  }
                  else {
                    unaff_XMM7_Qa =
                         -*(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x48) +
                         *(double *)(param_1 + 0x20) * (dVar1 + *(double *)(param_1 + 0x48));
                  }
                }
                else {
                  unaff_XMM7_Qa = *(double *)(param_1 + 0x18) * dVar1;
                }
              }
              else {
                unaff_XMM7_Qa =
                     *(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x48) +
                     *(double *)(param_1 + 0x20) *
                     (*(double *)(param_1 + 0x50) - *(double *)(param_1 + 0x48)) +
                     *(double *)(param_1 + 0x28) *
                     (*(double *)(param_1 + 0x58) - *(double *)(param_1 + 0x50)) +
                     *(double *)(param_1 + 0x30) *
                     (*(double *)(param_1 + 0x60) - *(double *)(param_1 + 0x58)) +
                     *(double *)(param_1 + 0x38) *
                     (*(double *)(param_1 + 0x68) - *(double *)(param_1 + 0x60)) +
                     *(double *)(param_1 + 0x40) * (dVar1 - *(double *)(param_1 + 0x68));
              }
            }
            else {
              unaff_XMM7_Qa =
                   *(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x48) +
                   *(double *)(param_1 + 0x20) *
                   (*(double *)(param_1 + 0x50) - *(double *)(param_1 + 0x48)) +
                   *(double *)(param_1 + 0x28) *
                   (*(double *)(param_1 + 0x58) - *(double *)(param_1 + 0x50)) +
                   *(double *)(param_1 + 0x30) *
                   (*(double *)(param_1 + 0x60) - *(double *)(param_1 + 0x58)) +
                   *(double *)(param_1 + 0x38) * (dVar1 - *(double *)(param_1 + 0x60));
            }
          }
          else {
            unaff_XMM7_Qa =
                 *(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x48) +
                 *(double *)(param_1 + 0x20) *
                 (*(double *)(param_1 + 0x50) - *(double *)(param_1 + 0x48)) +
                 *(double *)(param_1 + 0x28) *
                 (*(double *)(param_1 + 0x58) - *(double *)(param_1 + 0x50)) +
                 *(double *)(param_1 + 0x30) * (dVar1 - *(double *)(param_1 + 0x58));
          }
        }
        else {
          unaff_XMM7_Qa =
               *(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x48) +
               *(double *)(param_1 + 0x20) *
               (*(double *)(param_1 + 0x50) - *(double *)(param_1 + 0x48)) +
               *(double *)(param_1 + 0x28) * (dVar1 - *(double *)(param_1 + 0x50));
        }
      }
      else {
        unaff_XMM7_Qa =
             *(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x48) +
             *(double *)(param_1 + 0x20) * (dVar1 - *(double *)(param_1 + 0x48));
      }
    }
    else {
      unaff_XMM7_Qa = *(double *)(param_1 + 0x18) * dVar1;
    }
    dVar2 = (double)FUN_01d546a0(dVar1);
    if (*(double *)(param_1 + 0x48) <= dVar2) {
      dVar2 = (double)FUN_01d546a0(dVar1);
      if (*(double *)(param_1 + 0x50) <= dVar2) {
        dVar2 = (double)FUN_01d546a0(dVar1);
        if (*(double *)(param_1 + 0x58) <= dVar2) {
          dVar2 = (double)FUN_01d546a0(dVar1);
          if (*(double *)(param_1 + 0x60) <= dVar2) {
            dVar2 = (double)FUN_01d546a0(dVar1);
            if (*(double *)(param_1 + 0x68) <= dVar2) {
              dVar2 = *(double *)(param_1 + 0x40);
            }
            else {
              dVar2 = *(double *)(param_1 + 0x38);
            }
          }
          else {
            dVar2 = *(double *)(param_1 + 0x30);
          }
        }
        else {
          dVar2 = *(double *)(param_1 + 0x28);
        }
      }
      else {
        dVar2 = *(double *)(param_1 + 0x20);
      }
    }
    else {
      dVar2 = *(double *)(param_1 + 0x18);
    }
    FUN_016ed320(param_2,2,unaff_XMM7_Qa - dVar1 * dVar2,dVar2,0);
  }
  else if (param_4 == '\b') {
    dVar2 = (double)FUN_01d546a0(dVar1);
    if (*(double *)(param_1 + 0x48) < dVar2) {
      if ((dVar1 < *(double *)(param_1 + 0x48) || dVar1 == *(double *)(param_1 + 0x48)) ||
         (*(double *)(param_1 + 0x50) < dVar1)) {
        if ((dVar1 < *(double *)(param_1 + 0x50) || dVar1 == *(double *)(param_1 + 0x50)) ||
           (*(double *)(param_1 + 0x58) < dVar1)) {
          if ((dVar1 < *(double *)(param_1 + 0x58) || dVar1 == *(double *)(param_1 + 0x58)) ||
             (*(double *)(param_1 + 0x60) < dVar1)) {
            if ((dVar1 < *(double *)(param_1 + 0x60) || dVar1 == *(double *)(param_1 + 0x60)) ||
               (*(double *)(param_1 + 0x68) < dVar1)) {
              if (dVar1 < *(double *)(param_1 + 0x68) || dVar1 == *(double *)(param_1 + 0x68)) {
                if (dVar1 <= -*(double *)(param_1 + 0x48)) {
                  if ((-*(double *)(param_1 + 0x48) <= dVar1) ||
                     (dVar1 < -*(double *)(param_1 + 0x50))) {
                    if ((-*(double *)(param_1 + 0x50) <= dVar1) ||
                       (dVar1 < -*(double *)(param_1 + 0x58))) {
                      if ((-*(double *)(param_1 + 0x58) <= dVar1) ||
                         (dVar1 < -*(double *)(param_1 + 0x60))) {
                        if ((-*(double *)(param_1 + 0x60) <= dVar1) ||
                           (dVar1 < -*(double *)(param_1 + 0x68))) {
                          if (dVar1 < -*(double *)(param_1 + 0x68)) {
                            unaff_XMM7_Qa =
                                 ((((-*(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x48) -
                                    *(double *)(param_1 + 0x20) *
                                    (*(double *)(param_1 + 0x50) - *(double *)(param_1 + 0x48))) -
                                   *(double *)(param_1 + 0x28) *
                                   (*(double *)(param_1 + 0x58) - *(double *)(param_1 + 0x50))) -
                                  *(double *)(param_1 + 0x30) *
                                  (*(double *)(param_1 + 0x60) - *(double *)(param_1 + 0x58))) -
                                 *(double *)(param_1 + 0x38) *
                                 (*(double *)(param_1 + 0x68) - *(double *)(param_1 + 0x60))) +
                                 *(double *)(param_1 + 0x40) * (dVar1 + *(double *)(param_1 + 0x68))
                            ;
                          }
                        }
                        else {
                          unaff_XMM7_Qa =
                               (((-*(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x48) -
                                 *(double *)(param_1 + 0x20) *
                                 (*(double *)(param_1 + 0x50) - *(double *)(param_1 + 0x48))) -
                                *(double *)(param_1 + 0x28) *
                                (*(double *)(param_1 + 0x58) - *(double *)(param_1 + 0x50))) -
                               *(double *)(param_1 + 0x30) *
                               (*(double *)(param_1 + 0x60) - *(double *)(param_1 + 0x58))) +
                               *(double *)(param_1 + 0x38) * (dVar1 + *(double *)(param_1 + 0x60));
                        }
                      }
                      else {
                        unaff_XMM7_Qa =
                             ((-*(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x48) -
                              *(double *)(param_1 + 0x20) *
                              (*(double *)(param_1 + 0x50) - *(double *)(param_1 + 0x48))) -
                             *(double *)(param_1 + 0x28) *
                             (*(double *)(param_1 + 0x58) - *(double *)(param_1 + 0x50))) +
                             *(double *)(param_1 + 0x30) * (dVar1 + *(double *)(param_1 + 0x58));
                      }
                    }
                    else {
                      unaff_XMM7_Qa =
                           (-*(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x48) -
                           *(double *)(param_1 + 0x20) *
                           (*(double *)(param_1 + 0x50) - *(double *)(param_1 + 0x48))) +
                           *(double *)(param_1 + 0x28) * (dVar1 + *(double *)(param_1 + 0x50));
                    }
                  }
                  else {
                    unaff_XMM7_Qa =
                         -*(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x48) +
                         *(double *)(param_1 + 0x20) * (dVar1 + *(double *)(param_1 + 0x48));
                  }
                }
                else {
                  unaff_XMM7_Qa = *(double *)(param_1 + 0x18) * dVar1;
                }
              }
              else {
                unaff_XMM7_Qa =
                     *(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x48) +
                     *(double *)(param_1 + 0x20) *
                     (*(double *)(param_1 + 0x50) - *(double *)(param_1 + 0x48)) +
                     *(double *)(param_1 + 0x28) *
                     (*(double *)(param_1 + 0x58) - *(double *)(param_1 + 0x50)) +
                     *(double *)(param_1 + 0x30) *
                     (*(double *)(param_1 + 0x60) - *(double *)(param_1 + 0x58)) +
                     *(double *)(param_1 + 0x38) *
                     (*(double *)(param_1 + 0x68) - *(double *)(param_1 + 0x60)) +
                     *(double *)(param_1 + 0x40) * (dVar1 - *(double *)(param_1 + 0x68));
              }
            }
            else {
              unaff_XMM7_Qa =
                   *(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x48) +
                   *(double *)(param_1 + 0x20) *
                   (*(double *)(param_1 + 0x50) - *(double *)(param_1 + 0x48)) +
                   *(double *)(param_1 + 0x28) *
                   (*(double *)(param_1 + 0x58) - *(double *)(param_1 + 0x50)) +
                   *(double *)(param_1 + 0x30) *
                   (*(double *)(param_1 + 0x60) - *(double *)(param_1 + 0x58)) +
                   *(double *)(param_1 + 0x38) * (dVar1 - *(double *)(param_1 + 0x60));
            }
          }
          else {
            unaff_XMM7_Qa =
                 *(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x48) +
                 *(double *)(param_1 + 0x20) *
                 (*(double *)(param_1 + 0x50) - *(double *)(param_1 + 0x48)) +
                 *(double *)(param_1 + 0x28) *
                 (*(double *)(param_1 + 0x58) - *(double *)(param_1 + 0x50)) +
                 *(double *)(param_1 + 0x30) * (dVar1 - *(double *)(param_1 + 0x58));
          }
        }
        else {
          unaff_XMM7_Qa =
               *(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x48) +
               *(double *)(param_1 + 0x20) *
               (*(double *)(param_1 + 0x50) - *(double *)(param_1 + 0x48)) +
               *(double *)(param_1 + 0x28) * (dVar1 - *(double *)(param_1 + 0x50));
        }
      }
      else {
        unaff_XMM7_Qa =
             *(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x48) +
             *(double *)(param_1 + 0x20) * (dVar1 - *(double *)(param_1 + 0x48));
      }
    }
    else {
      unaff_XMM7_Qa = *(double *)(param_1 + 0x18) * dVar1;
    }
    dVar2 = (double)FUN_01d546a0(dVar1);
    if (*(double *)(param_1 + 0x48) <= dVar2) {
      dVar2 = (double)FUN_01d546a0(dVar1);
      if (*(double *)(param_1 + 0x50) <= dVar2) {
        dVar2 = (double)FUN_01d546a0(dVar1);
        if (*(double *)(param_1 + 0x58) <= dVar2) {
          dVar2 = (double)FUN_01d546a0(dVar1);
          if (*(double *)(param_1 + 0x60) <= dVar2) {
            dVar2 = (double)FUN_01d546a0(dVar1);
            if (*(double *)(param_1 + 0x68) <= dVar2) {
              dVar2 = *(double *)(param_1 + 0x40);
            }
            else {
              dVar2 = *(double *)(param_1 + 0x38);
            }
          }
          else {
            dVar2 = *(double *)(param_1 + 0x30);
          }
        }
        else {
          dVar2 = *(double *)(param_1 + 0x28);
        }
      }
      else {
        dVar2 = *(double *)(param_1 + 0x20);
      }
    }
    else {
      dVar2 = *(double *)(param_1 + 0x18);
    }
    FUN_016ed320(param_2,2,unaff_XMM7_Qa - dVar1 * dVar2,dVar2,0);
  }
  FUN_016ea050(param_2,param_1,0x78);
  return;
}

