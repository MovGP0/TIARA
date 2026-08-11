/* Ghidra address: 015ec610 */
/* Ghidra symbol: FUN_015ec610 */


undefined8 FUN_015ec610(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)PTR_PTR_020038b0);
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)PTR_PTR_02003ba8);
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    else {
      iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)PTR_PTR_020021c8);
      if (iVar1 == 0) {
        uVar2 = 4;
      }
      else {
        iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)PTR_PTR_02003248);
        if (iVar1 == 0) {
          uVar2 = 8;
        }
        else {
          iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)PTR_PTR_02003b58);
          if (iVar1 == 0) {
            uVar2 = 0x200;
          }
          else {
            iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)PTR_PTR_02004d88);
            if (iVar1 == 0) {
              uVar2 = 0x400;
            }
            else {
              iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)PTR_PTR_02001da8);
              if (iVar1 == 0) {
                uVar2 = 0x100;
              }
              else {
                iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)PTR_PTR_02003c10
                                    );
                if (iVar1 == 0) {
                  uVar2 = 0x800;
                }
                else {
                  iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x18),
                                       *(undefined8 *)PTR_PTR_020030f8);
                  if (iVar1 == 0) {
                    uVar2 = 0x10;
                  }
                  else {
                    iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x18),
                                         *(undefined8 *)PTR_PTR_02001550);
                    if (iVar1 == 0) {
                      uVar2 = 0x20;
                    }
                    else {
                      iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x18),
                                           *(undefined8 *)PTR_PTR_02003ee0);
                      if (iVar1 == 0) {
                        uVar2 = 0x40;
                      }
                      else {
                        iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x18),
                                             *(undefined8 *)PTR_PTR_020039a0);
                        if (iVar1 == 0) {
                          uVar2 = 0x2000;
                        }
                        else {
                          iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x18),
                                               *(undefined8 *)PTR_PTR_02005740);
                          if (iVar1 == 0) {
                            uVar2 = 0x4000;
                          }
                          else {
                            iVar1 = FUN_00416db0(*(undefined8 *)(param_1 + 0x18),
                                                 *(undefined8 *)PTR_PTR_02001638);
                            if (iVar1 == 0) {
                              uVar2 = 0x80;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar2;
}

