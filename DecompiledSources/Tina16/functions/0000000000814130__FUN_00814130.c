/* Ghidra address: 00814130 */
/* Ghidra symbol: FUN_00814130 */


void FUN_00814130(longlong param_1,char param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined1 local_58 [8];
  int local_50;
  int local_48;
  undefined4 uStack_44;
  
  if (*(char *)(param_1 + 0x38) == '\0') {
    *(undefined1 *)(param_1 + 0x38) = 1;
    do {
      if (param_2 != '\0') {
        FUN_00817ea0(param_1);
      }
      bVar2 = false;
      iVar3 = thunk_FUN_04166556(local_58,0,0,0,1);
      bVar1 = false;
      if (iVar3 == 0) goto LAB_008144e0;
      bVar1 = bVar2;
      if (local_50 < 0xa7) {
        if (local_50 < 0x20) {
          if ((local_50 == 0x1f) || (local_50 - 6U < 3)) goto LAB_008144ce;
          if (local_50 == 0x10) {
LAB_00814288:
            *(undefined1 *)(param_1 + 0x38) = 0;
            bVar1 = true;
          }
          else {
            if (local_50 != 0x12) goto LAB_008144d7;
            *(undefined1 *)(param_1 + 0x38) = 0;
            thunk_FUN_03fcecfa(local_48);
            bVar1 = false;
          }
        }
        else {
          if (((local_50 == 0x86) || (local_50 - 0xa1U < 2)) || (local_50 - 0xa4U < 2))
          goto LAB_008144ce;
LAB_008144d7:
          thunk_FUN_040da573(local_58);
        }
      }
      else {
        if (local_50 < 0x201) {
          if (1 < local_50 - 0xa7U) {
            if (local_50 == 0x100) {
              if (*(char *)(param_1 + 0x1c) == '\0') {
                *(undefined1 *)(param_1 + 0x1c) = 1;
                FUN_00814f60(param_1);
              }
              iVar3 = FUN_00814620(param_1);
              if ((iVar3 == -1) || (*(int *)(param_1 + 8) != iVar3)) {
                if (local_48 < 0x26) {
                  if (local_48 == 0x25) {
                    if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0xb1) ==
                        '\x01') {
                      FUN_00814700(param_1);
                    }
                    else {
                      FUN_008148d0(param_1);
                    }
                  }
                  else if (local_48 == 0xd) {
LAB_008143fe:
                    if (*(char *)(param_1 + 0x98) == '\0') {
                      if (*(char *)(param_1 + 0xc2) == '\0') {
                        if (*(int *)(param_1 + 8) != -1) {
                          iVar3 = FUN_007e2ef0(*(undefined8 *)
                                                (*(longlong *)(param_1 + 0x40) + 8 +
                                                (longlong)*(int *)(param_1 + 8) * 0x20));
                          if (iVar3 == 0) {
                            iVar3 = *(int *)(param_1 + 8);
                            FUN_00813fb0(param_1);
                            lVar5 = FUN_007e3880(*(undefined8 *)
                                                  (*(longlong *)(param_1 + 0x40) + 8 +
                                                  (longlong)iVar3 * 0x20));
                            if (lVar5 != 0) {
                              uVar6 = FUN_007e3880(*(undefined8 *)
                                                    (*(longlong *)(param_1 + 0x40) + 8 +
                                                    (longlong)iVar3 * 0x20));
                              FUN_007e5c50(uVar6);
                            }
                          }
                          else {
                            FUN_00817ea0(param_1);
                          }
                        }
                      }
                      else {
                        FUN_00813fb0(param_1);
                        FUN_00817c50(param_1);
                      }
                    }
                    else {
                      FUN_00813fb0(param_1);
                      FUN_00817b20(param_1);
                    }
                  }
                  else if (local_48 == 0x1b) {
                    FUN_00813fb0(param_1);
                  }
                }
                else if (local_48 == 0x27) {
                  if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x20) + 0x10) + 0xb1) ==
                      '\x01') {
                    FUN_008148d0(param_1);
                  }
                  else {
                    FUN_00814700(param_1);
                  }
                }
                else if (local_48 == 0x28) goto LAB_008143fe;
              }
              else {
                iVar4 = FUN_007e2ef0(*(undefined8 *)
                                      (*(longlong *)(param_1 + 0x40) + 8 +
                                      (longlong)*(int *)(param_1 + 8) * 0x20));
                if (iVar4 == 0) {
                  FUN_00813fb0(param_1);
                  lVar5 = FUN_007e3880(*(undefined8 *)
                                        (*(longlong *)(param_1 + 0x40) + 8 + (longlong)iVar3 * 0x20)
                                      );
                  if (lVar5 != 0) {
                    uVar6 = FUN_007e3880(*(undefined8 *)
                                          (*(longlong *)(param_1 + 0x40) + 8 +
                                          (longlong)iVar3 * 0x20));
                    FUN_007e5c50(uVar6);
                  }
                }
                else {
                  FUN_00817ea0(param_1);
                }
              }
            }
            else if (local_50 == 0x104) {
              if (CONCAT44(uStack_44,local_48) == 0x12) {
                *(undefined1 *)(param_1 + 0x38) = 0;
                bVar1 = true;
              }
            }
            else if (local_50 != 0x200) goto LAB_008144d7;
            goto LAB_008144e0;
          }
        }
        else if (((1 < local_50 - 0x201U) && (1 < local_50 - 0x204U)) && (1 < local_50 - 0x207U)) {
          if (local_50 == 0xb021) goto LAB_00814288;
          goto LAB_008144d7;
        }
LAB_008144ce:
        *(undefined1 *)(param_1 + 0x38) = 0;
        bVar1 = true;
      }
LAB_008144e0:
    } while (*(char *)(param_1 + 0x38) != '\0');
    if (((*(char *)(param_1 + 0xab) == '\0') && (FUN_00813fb0(param_1), local_50 == 0xa1)) &&
       (*(int *)(param_1 + 8) != -1)) {
      bVar1 = false;
    }
    if (bVar1) {
      thunk_FUN_040da573(local_58);
    }
  }
  return;
}

