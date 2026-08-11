/* Ghidra address: 01d56110 */
/* Ghidra symbol: FUN_01d56110 */


void FUN_01d56110(longlong param_1,undefined8 param_2,longlong param_3,char param_4)

{
  bool bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  FUN_016ee1f0(param_2,param_1,0xb0);
  dVar2 = (double)FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),*(undefined1 *)(param_1 + 1)
                               ,0,0);
  if (param_4 == '\x01') {
    bVar1 = *(double *)(param_1 + 0xa0) <= dVar2;
    if (bVar1) {
      if (*(double *)(param_1 + 0x98) <= dVar2) {
        if (*(double *)(param_1 + 0x90) <= dVar2) {
          if (*(double *)(param_1 + 0x88) <= dVar2) {
            if (0.0 <= dVar2) {
              if (*(double *)(param_1 + 0x68) <= dVar2) {
                if (*(double *)(param_1 + 0x70) <= dVar2) {
                  if (*(double *)(param_1 + 0x78) <= dVar2) {
                    if (*(double *)(param_1 + 0x80) <= dVar2) {
                      dVar3 = *(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x68) +
                              *(double *)(param_1 + 0x20) *
                              (*(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x68)) +
                              *(double *)(param_1 + 0x28) *
                              (*(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x70)) +
                              *(double *)(param_1 + 0x30) *
                              (*(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x78)) +
                              *(double *)(param_1 + 0x38) * (dVar2 - *(double *)(param_1 + 0x80));
                    }
                    else {
                      dVar3 = *(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x68) +
                              *(double *)(param_1 + 0x20) *
                              (*(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x68)) +
                              *(double *)(param_1 + 0x28) *
                              (*(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x70)) +
                              *(double *)(param_1 + 0x30) * (dVar2 - *(double *)(param_1 + 0x78));
                    }
                  }
                  else {
                    dVar3 = *(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x68) +
                            *(double *)(param_1 + 0x20) *
                            (*(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x68)) +
                            *(double *)(param_1 + 0x28) * (dVar2 - *(double *)(param_1 + 0x70));
                  }
                }
                else {
                  dVar3 = *(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x68) +
                          *(double *)(param_1 + 0x20) * (dVar2 - *(double *)(param_1 + 0x68));
                }
              }
              else {
                dVar3 = *(double *)(param_1 + 0x18) * dVar2;
              }
            }
            else {
              dVar3 = *(double *)(param_1 + 0x40) * dVar2;
            }
          }
          else {
            dVar3 = *(double *)(param_1 + 0x40) * *(double *)(param_1 + 0x88) +
                    *(double *)(param_1 + 0x48) * (dVar2 - *(double *)(param_1 + 0x88));
          }
        }
        else {
          dVar3 = *(double *)(param_1 + 0x40) * *(double *)(param_1 + 0x88) +
                  *(double *)(param_1 + 0x48) *
                  (*(double *)(param_1 + 0x90) - *(double *)(param_1 + 0x88)) +
                  *(double *)(param_1 + 0x50) * (dVar2 - *(double *)(param_1 + 0x90));
        }
      }
      else {
        dVar3 = *(double *)(param_1 + 0x40) * *(double *)(param_1 + 0x88) +
                *(double *)(param_1 + 0x48) *
                (*(double *)(param_1 + 0x90) - *(double *)(param_1 + 0x88)) +
                *(double *)(param_1 + 0x50) *
                (*(double *)(param_1 + 0x98) - *(double *)(param_1 + 0x90)) +
                *(double *)(param_1 + 0x58) * (dVar2 - *(double *)(param_1 + 0x98));
      }
    }
    else {
      dVar3 = *(double *)(param_1 + 0x40) * *(double *)(param_1 + 0x88) +
              *(double *)(param_1 + 0x48) *
              (*(double *)(param_1 + 0x90) - *(double *)(param_1 + 0x88)) +
              *(double *)(param_1 + 0x50) *
              (*(double *)(param_1 + 0x98) - *(double *)(param_1 + 0x90)) +
              *(double *)(param_1 + 0x58) *
              (*(double *)(param_1 + 0xa0) - *(double *)(param_1 + 0x98)) +
              *(double *)(param_1 + 0x60) * (dVar2 - *(double *)(param_1 + 0xa0));
    }
    if (bVar1) {
      if (*(double *)(param_1 + 0x98) <= dVar2) {
        if (*(double *)(param_1 + 0x90) <= dVar2) {
          if (*(double *)(param_1 + 0x88) <= dVar2) {
            if (0.0 <= dVar2) {
              if (*(double *)(param_1 + 0x68) <= dVar2) {
                if (*(double *)(param_1 + 0x70) <= dVar2) {
                  if (*(double *)(param_1 + 0x78) <= dVar2) {
                    if (*(double *)(param_1 + 0x80) <= dVar2) {
                      dVar4 = *(double *)(param_1 + 0x38);
                    }
                    else {
                      dVar4 = *(double *)(param_1 + 0x30);
                    }
                  }
                  else {
                    dVar4 = *(double *)(param_1 + 0x28);
                  }
                }
                else {
                  dVar4 = *(double *)(param_1 + 0x20);
                }
              }
              else {
                dVar4 = *(double *)(param_1 + 0x18);
              }
            }
            else {
              dVar4 = *(double *)(param_1 + 0x40);
            }
          }
          else {
            dVar4 = *(double *)(param_1 + 0x48);
          }
        }
        else {
          dVar4 = *(double *)(param_1 + 0x50);
        }
      }
      else {
        dVar4 = *(double *)(param_1 + 0x58);
      }
    }
    else {
      dVar4 = *(double *)(param_1 + 0x60);
    }
    FUN_016ed320(param_2,2,dVar3 - dVar2 * dVar4,dVar4,0);
  }
  else if (param_4 == '\x06') {
    bVar1 = *(double *)(param_1 + 0xa0) <= dVar2;
    if (bVar1) {
      if (*(double *)(param_1 + 0x98) <= dVar2) {
        if (*(double *)(param_1 + 0x90) <= dVar2) {
          if (*(double *)(param_1 + 0x88) <= dVar2) {
            if (0.0 <= dVar2) {
              if (*(double *)(param_1 + 0x68) <= dVar2) {
                if (*(double *)(param_1 + 0x70) <= dVar2) {
                  if (*(double *)(param_1 + 0x78) <= dVar2) {
                    if (*(double *)(param_1 + 0x80) <= dVar2) {
                      dVar3 = *(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x68) +
                              *(double *)(param_1 + 0x20) *
                              (*(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x68)) +
                              *(double *)(param_1 + 0x28) *
                              (*(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x70)) +
                              *(double *)(param_1 + 0x30) *
                              (*(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x78)) +
                              *(double *)(param_1 + 0x38) * (dVar2 - *(double *)(param_1 + 0x80));
                    }
                    else {
                      dVar3 = *(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x68) +
                              *(double *)(param_1 + 0x20) *
                              (*(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x68)) +
                              *(double *)(param_1 + 0x28) *
                              (*(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x70)) +
                              *(double *)(param_1 + 0x30) * (dVar2 - *(double *)(param_1 + 0x78));
                    }
                  }
                  else {
                    dVar3 = *(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x68) +
                            *(double *)(param_1 + 0x20) *
                            (*(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x68)) +
                            *(double *)(param_1 + 0x28) * (dVar2 - *(double *)(param_1 + 0x70));
                  }
                }
                else {
                  dVar3 = *(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x68) +
                          *(double *)(param_1 + 0x20) * (dVar2 - *(double *)(param_1 + 0x68));
                }
              }
              else {
                dVar3 = *(double *)(param_1 + 0x18) * dVar2;
              }
            }
            else {
              dVar3 = *(double *)(param_1 + 0x40) * dVar2;
            }
          }
          else {
            dVar3 = *(double *)(param_1 + 0x40) * *(double *)(param_1 + 0x88) +
                    *(double *)(param_1 + 0x48) * (dVar2 - *(double *)(param_1 + 0x88));
          }
        }
        else {
          dVar3 = *(double *)(param_1 + 0x40) * *(double *)(param_1 + 0x88) +
                  *(double *)(param_1 + 0x48) *
                  (*(double *)(param_1 + 0x90) - *(double *)(param_1 + 0x88)) +
                  *(double *)(param_1 + 0x50) * (dVar2 - *(double *)(param_1 + 0x90));
        }
      }
      else {
        dVar3 = *(double *)(param_1 + 0x40) * *(double *)(param_1 + 0x88) +
                *(double *)(param_1 + 0x48) *
                (*(double *)(param_1 + 0x90) - *(double *)(param_1 + 0x88)) +
                *(double *)(param_1 + 0x50) *
                (*(double *)(param_1 + 0x98) - *(double *)(param_1 + 0x90)) +
                *(double *)(param_1 + 0x58) * (dVar2 - *(double *)(param_1 + 0x98));
      }
    }
    else {
      dVar3 = *(double *)(param_1 + 0x40) * *(double *)(param_1 + 0x88) +
              *(double *)(param_1 + 0x48) *
              (*(double *)(param_1 + 0x90) - *(double *)(param_1 + 0x88)) +
              *(double *)(param_1 + 0x50) *
              (*(double *)(param_1 + 0x98) - *(double *)(param_1 + 0x90)) +
              *(double *)(param_1 + 0x58) *
              (*(double *)(param_1 + 0xa0) - *(double *)(param_1 + 0x98)) +
              *(double *)(param_1 + 0x60) * (dVar2 - *(double *)(param_1 + 0xa0));
    }
    if (bVar1) {
      if (*(double *)(param_1 + 0x98) <= dVar2) {
        if (*(double *)(param_1 + 0x90) <= dVar2) {
          if (*(double *)(param_1 + 0x88) <= dVar2) {
            if (0.0 <= dVar2) {
              if (*(double *)(param_1 + 0x68) <= dVar2) {
                if (*(double *)(param_1 + 0x70) <= dVar2) {
                  if (*(double *)(param_1 + 0x78) <= dVar2) {
                    if (*(double *)(param_1 + 0x80) <= dVar2) {
                      dVar4 = *(double *)(param_1 + 0x38);
                    }
                    else {
                      dVar4 = *(double *)(param_1 + 0x30);
                    }
                  }
                  else {
                    dVar4 = *(double *)(param_1 + 0x28);
                  }
                }
                else {
                  dVar4 = *(double *)(param_1 + 0x20);
                }
              }
              else {
                dVar4 = *(double *)(param_1 + 0x18);
              }
            }
            else {
              dVar4 = *(double *)(param_1 + 0x40);
            }
          }
          else {
            dVar4 = *(double *)(param_1 + 0x48);
          }
        }
        else {
          dVar4 = *(double *)(param_1 + 0x50);
        }
      }
      else {
        dVar4 = *(double *)(param_1 + 0x58);
      }
    }
    else {
      dVar4 = *(double *)(param_1 + 0x60);
    }
    FUN_016ed320(param_2,2,dVar3 - dVar2 * dVar4,dVar4,0);
  }
  else if (param_4 == '\b') {
    bVar1 = *(double *)(param_1 + 0xa0) <= dVar2;
    if (bVar1) {
      if (*(double *)(param_1 + 0x98) <= dVar2) {
        if (*(double *)(param_1 + 0x90) <= dVar2) {
          if (*(double *)(param_1 + 0x88) <= dVar2) {
            if (0.0 <= dVar2) {
              if (*(double *)(param_1 + 0x68) <= dVar2) {
                if (*(double *)(param_1 + 0x70) <= dVar2) {
                  if (*(double *)(param_1 + 0x78) <= dVar2) {
                    if (*(double *)(param_1 + 0x80) <= dVar2) {
                      dVar3 = *(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x68) +
                              *(double *)(param_1 + 0x20) *
                              (*(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x68)) +
                              *(double *)(param_1 + 0x28) *
                              (*(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x70)) +
                              *(double *)(param_1 + 0x30) *
                              (*(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x78)) +
                              *(double *)(param_1 + 0x38) * (dVar2 - *(double *)(param_1 + 0x80));
                    }
                    else {
                      dVar3 = *(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x68) +
                              *(double *)(param_1 + 0x20) *
                              (*(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x68)) +
                              *(double *)(param_1 + 0x28) *
                              (*(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x70)) +
                              *(double *)(param_1 + 0x30) * (dVar2 - *(double *)(param_1 + 0x78));
                    }
                  }
                  else {
                    dVar3 = *(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x68) +
                            *(double *)(param_1 + 0x20) *
                            (*(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x68)) +
                            *(double *)(param_1 + 0x28) * (dVar2 - *(double *)(param_1 + 0x70));
                  }
                }
                else {
                  dVar3 = *(double *)(param_1 + 0x18) * *(double *)(param_1 + 0x68) +
                          *(double *)(param_1 + 0x20) * (dVar2 - *(double *)(param_1 + 0x68));
                }
              }
              else {
                dVar3 = *(double *)(param_1 + 0x18) * dVar2;
              }
            }
            else {
              dVar3 = *(double *)(param_1 + 0x40) * dVar2;
            }
          }
          else {
            dVar3 = *(double *)(param_1 + 0x40) * *(double *)(param_1 + 0x88) +
                    *(double *)(param_1 + 0x48) * (dVar2 - *(double *)(param_1 + 0x88));
          }
        }
        else {
          dVar3 = *(double *)(param_1 + 0x40) * *(double *)(param_1 + 0x88) +
                  *(double *)(param_1 + 0x48) *
                  (*(double *)(param_1 + 0x90) - *(double *)(param_1 + 0x88)) +
                  *(double *)(param_1 + 0x50) * (dVar2 - *(double *)(param_1 + 0x90));
        }
      }
      else {
        dVar3 = *(double *)(param_1 + 0x40) * *(double *)(param_1 + 0x88) +
                *(double *)(param_1 + 0x48) *
                (*(double *)(param_1 + 0x90) - *(double *)(param_1 + 0x88)) +
                *(double *)(param_1 + 0x50) *
                (*(double *)(param_1 + 0x98) - *(double *)(param_1 + 0x90)) +
                *(double *)(param_1 + 0x58) * (dVar2 - *(double *)(param_1 + 0x98));
      }
    }
    else {
      dVar3 = *(double *)(param_1 + 0x40) * *(double *)(param_1 + 0x88) +
              *(double *)(param_1 + 0x48) *
              (*(double *)(param_1 + 0x90) - *(double *)(param_1 + 0x88)) +
              *(double *)(param_1 + 0x50) *
              (*(double *)(param_1 + 0x98) - *(double *)(param_1 + 0x90)) +
              *(double *)(param_1 + 0x58) *
              (*(double *)(param_1 + 0xa0) - *(double *)(param_1 + 0x98)) +
              *(double *)(param_1 + 0x60) * (dVar2 - *(double *)(param_1 + 0xa0));
    }
    if (bVar1) {
      if (*(double *)(param_1 + 0x98) <= dVar2) {
        if (*(double *)(param_1 + 0x90) <= dVar2) {
          if (*(double *)(param_1 + 0x88) <= dVar2) {
            if (0.0 <= dVar2) {
              if (*(double *)(param_1 + 0x68) <= dVar2) {
                if (*(double *)(param_1 + 0x70) <= dVar2) {
                  if (*(double *)(param_1 + 0x78) <= dVar2) {
                    if (*(double *)(param_1 + 0x80) <= dVar2) {
                      dVar4 = *(double *)(param_1 + 0x38);
                    }
                    else {
                      dVar4 = *(double *)(param_1 + 0x30);
                    }
                  }
                  else {
                    dVar4 = *(double *)(param_1 + 0x28);
                  }
                }
                else {
                  dVar4 = *(double *)(param_1 + 0x20);
                }
              }
              else {
                dVar4 = *(double *)(param_1 + 0x18);
              }
            }
            else {
              dVar4 = *(double *)(param_1 + 0x40);
            }
          }
          else {
            dVar4 = *(double *)(param_1 + 0x48);
          }
        }
        else {
          dVar4 = *(double *)(param_1 + 0x50);
        }
      }
      else {
        dVar4 = *(double *)(param_1 + 0x58);
      }
    }
    else {
      dVar4 = *(double *)(param_1 + 0x60);
    }
    FUN_016ed320(param_2,2,dVar3 - dVar2 * dVar4,dVar4,0);
  }
  FUN_016ea050(param_2,param_1,0xb0);
  return;
}

