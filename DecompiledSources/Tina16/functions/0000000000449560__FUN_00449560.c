/* Ghidra address: 00449560 */
/* Ghidra symbol: FUN_00449560 */


void FUN_00449560(longlong param_1,ushort *param_2)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  ushort uVar5;
  ushort uVar6;
  ushort *puVar7;
  bool bVar8;
  ushort *local_res10;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50 [2];
  undefined1 local_3e;
  undefined1 local_3d;
  int local_3c;
  ushort local_38;
  short local_36;
  short local_34;
  short local_32;
  ushort local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  ushort local_2a;
  
  local_58 = 0;
  local_50[0] = 0;
  if ((param_2 != (ushort *)0x0) && (*(int *)(param_1 + 0x60) < 2)) {
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
    local_3d = 0;
    local_3e = 0;
    bVar1 = false;
    uVar6 = 0x20;
    local_res10 = param_2;
LAB_00449fe5:
    uVar2 = *local_res10;
    if (uVar2 != 0) {
      local_38 = uVar2;
      if ((uVar2 < 0xd800) || (0xdfff < uVar2)) {
        puVar4 = (ushort *)FUN_0044f6b0(local_res10);
        if ((ushort)(local_38 - 0x60) < 0x20) {
          bVar8 = (1 << ((byte)(local_38 - 0x60) & 0x1f) & 0x7fffffeU) != 0;
        }
        else {
          bVar8 = false;
        }
        uVar2 = local_38;
        if (bVar8) {
          uVar2 = local_38 - 0x20;
        }
        if ((ushort)(uVar2 - 0x40) < 0x20) {
          bVar8 = (1 << ((byte)(uVar2 - 0x40) & 0x1f) & 0x7fffffeU) != 0;
        }
        else {
          bVar8 = false;
        }
        uVar5 = uVar6;
        if (((bVar8) && (uVar5 = uVar2, uVar2 == 0x4d)) && (uVar6 == 0x48)) {
          uVar2 = 0x4e;
          uVar5 = uVar2;
        }
        uVar6 = uVar5;
        local_res10 = puVar4;
        if (uVar2 < 0x48) {
          if (uVar2 == 0x47) {
            FUN_00449100(auStack_78);
            FUN_00449150(auStack_78);
            FUN_004491e0(auStack_78,local_50,local_3c);
            FUN_00449080(param_1);
            goto LAB_00449fe5;
          }
          if (uVar2 < 0x42) {
            if (uVar2 == 0x41) {
              FUN_00449190(auStack_78);
              puVar7 = puVar4 + -1;
              iVar3 = FUN_004428c0(puVar7,L"AM/PM",5);
              if (iVar3 == 0) {
                if (0xb < local_30) {
                  puVar7 = puVar4 + 2;
                }
                FUN_00448f90(param_1,puVar7,2);
                bVar1 = true;
                local_res10 = puVar4 + 4;
              }
              else {
                iVar3 = FUN_004428c0(puVar7,&DAT_0044a05c,3);
                if (iVar3 == 0) {
                  if (0xb < local_30) {
                    puVar7 = puVar4 + 1;
                  }
                  FUN_00448f90(param_1,puVar7,1);
                  bVar1 = true;
                  local_res10 = puVar4 + 2;
                }
                else {
                  iVar3 = FUN_004428c0(puVar7,L"AMPM",4);
                  if (iVar3 == 0) {
                    if (local_30 < 0xc) {
                      FUN_00449080(param_1);
                    }
                    else {
                      FUN_00449080(param_1);
                    }
                    bVar1 = true;
                    local_res10 = puVar4 + 3;
                  }
                  else {
                    iVar3 = FUN_004428c0(puVar7,L"AAAA",4);
                    if (iVar3 == 0) {
                      FUN_00449150(auStack_78);
                      FUN_00448e40(*(undefined8 *)(param_1 + 0x290));
                      FUN_00449080(param_1);
                      local_res10 = puVar4 + 3;
                    }
                    else {
                      iVar3 = FUN_004428c0(puVar7,&DAT_0044a078,3);
                      if (iVar3 == 0) {
                        FUN_00449150(auStack_78);
                        FUN_00448e40(*(undefined8 *)(param_1 + 0x290));
                        FUN_00449080(param_1);
                        local_res10 = puVar4 + 2;
                      }
                      else {
                        FUN_00448f90(param_1,&local_38,1);
                      }
                    }
                  }
                }
              }
              goto LAB_00449fe5;
            }
            if ((uVar2 == 0x22) || (uVar2 == 0x27)) {
              while ((uVar2 = *local_res10, uVar2 != 0 && (uVar2 != local_38))) {
                if ((uVar2 < 0xd800) || (0xdfff < uVar2)) {
                  local_res10 = local_res10 + 1;
                }
                else {
                  local_res10 = (ushort *)FUN_0044f6b0(local_res10);
                }
              }
              FUN_00448f90(param_1,puVar4,
                           ((longlong)local_res10 - (longlong)puVar4) / 2 & 0xffffffff);
              if (*local_res10 != 0) {
                local_res10 = local_res10 + 1;
              }
              goto LAB_00449fe5;
            }
            if (uVar2 == 0x2f) {
              if (*(short *)(*(longlong *)(param_1 + 0x298) + 10) != 0) {
                FUN_00448f90(param_1,*(longlong *)(param_1 + 0x298) + 10,1);
              }
              goto LAB_00449fe5;
            }
            if (uVar2 == 0x3a) {
              if (*(short *)(*(longlong *)(param_1 + 0x298) + 0xc) != 0) {
                FUN_00448f90(param_1,*(longlong *)(param_1 + 0x298) + 0xc,1);
              }
              goto LAB_00449fe5;
            }
          }
          else {
            if (uVar2 == 0x43) {
              FUN_00449100(auStack_78);
              FUN_00449560(param_1);
              FUN_00449190(auStack_78);
              if (((local_30 != 0) || (local_32 != 0)) || ((local_34 != 0 || (local_36 != 0)))) {
                FUN_00448f90(param_1,&LAB_0044a080,1);
                FUN_00449560(param_1);
              }
              goto LAB_00449fe5;
            }
            if (uVar2 == 0x44) {
              FUN_00449100(auStack_78);
              if (local_3c - 1U < 2) {
                FUN_00449150(auStack_78);
                FUN_004490a0(param_1,local_2e,local_3c);
              }
              else if (local_3c == 3) {
                FUN_00448e40(*(undefined8 *)(param_1 + 0x290));
                FUN_00449080(param_1);
              }
              else if (local_3c == 4) {
                FUN_00448e40(*(undefined8 *)(param_1 + 0x290));
                FUN_00449080(param_1);
              }
              else if (local_3c == 5) {
                FUN_00449560(param_1);
              }
              else {
                FUN_00449560(param_1);
              }
              goto LAB_00449fe5;
            }
            if (uVar2 == 0x45) {
              FUN_00449100(auStack_78);
              FUN_00449150(auStack_78);
              FUN_004493d0(auStack_78,&local_58,local_3c);
              FUN_00449080(param_1);
              goto LAB_00449fe5;
            }
          }
        }
        else if (uVar2 < 0x54) {
          if (uVar2 == 0x53) {
            FUN_00449100(auStack_78);
            FUN_00449190(auStack_78);
            if (2 < local_3c) {
              local_3c = 2;
            }
            FUN_004490a0(param_1,local_34,local_3c);
            goto LAB_00449fe5;
          }
          if (uVar2 == 0x48) {
            FUN_00449100(auStack_78);
            FUN_00449190(auStack_78);
            bVar8 = false;
            while (uVar2 = *puVar4, uVar2 != 0) {
              if ((uVar2 < 0xd800) || (0xdfff < uVar2)) {
                uVar2 = *puVar4;
                if (uVar2 < 0x49) {
                  if (uVar2 == 0x48) break;
                  if ((uVar2 == 0x22) || (uVar2 == 0x27)) {
                    bVar8 = !bVar8;
                  }
                  else if (uVar2 == 0x41) goto LAB_00449a8b;
                }
                else if (uVar2 == 0x61) {
LAB_00449a8b:
                  if (!bVar8) {
                    iVar3 = FUN_004428c0(puVar4,L"AM/PM",5);
                    if (((iVar3 == 0) || (iVar3 = FUN_004428c0(puVar4,&DAT_0044a05c,3), iVar3 == 0))
                       || (iVar3 = FUN_004428c0(puVar4,L"AMPM",4), iVar3 == 0)) {
                      bVar1 = true;
                    }
                    break;
                  }
                }
                else if (uVar2 == 0x68) break;
                puVar4 = puVar4 + 1;
              }
              else {
                puVar4 = (ushort *)FUN_0044f6b0(puVar4);
              }
            }
            uVar2 = local_30;
            if (bVar1) {
              if (local_30 == 0) {
                uVar2 = 0xc;
              }
              else if (0xc < local_30) {
                uVar2 = local_30 - 0xc;
              }
            }
            if (2 < local_3c) {
              local_3c = 2;
            }
            FUN_004490a0(param_1,uVar2,local_3c);
            goto LAB_00449fe5;
          }
          if (uVar2 == 0x4d) {
            FUN_00449100(auStack_78);
            FUN_00449150(auStack_78);
            if (local_3c - 1U < 2) {
              FUN_004490a0(param_1,local_2c,local_3c);
            }
            else if (local_3c == 3) {
              FUN_00449080(param_1);
            }
            else {
              FUN_00449080(param_1);
            }
            goto LAB_00449fe5;
          }
          if (uVar2 == 0x4e) {
            FUN_00449100(auStack_78);
            FUN_00449190(auStack_78);
            if (2 < local_3c) {
              local_3c = 2;
            }
            FUN_004490a0(param_1,local_32,local_3c);
            goto LAB_00449fe5;
          }
        }
        else {
          if (uVar2 == 0x54) {
            FUN_00449100(auStack_78);
            if (local_3c == 1) {
              FUN_00449560(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x298) + 0x30));
            }
            else {
              FUN_00449560(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x298) + 0x38));
            }
            goto LAB_00449fe5;
          }
          if (uVar2 == 0x59) {
            FUN_00449100(auStack_78);
            FUN_00449150(auStack_78);
            if (local_3c < 3) {
              FUN_004490a0(param_1,(ulonglong)local_2a % 100,2);
            }
            else {
              FUN_004490a0(param_1,local_2a,4);
            }
            goto LAB_00449fe5;
          }
          if (uVar2 == 0x5a) {
            FUN_00449100(auStack_78);
            FUN_00449190(auStack_78);
            if (3 < local_3c) {
              local_3c = 3;
            }
            FUN_004490a0(param_1,local_36,local_3c);
            goto LAB_00449fe5;
          }
        }
        FUN_00448f90(param_1,&local_38,1);
        goto LAB_00449fe5;
      }
      iVar3 = FUN_0044f680(local_res10);
      FUN_00448f90(param_1,local_res10,(longlong)iVar3 / 2 & 0xffffffff);
      local_res10 = (ushort *)FUN_0044f6b0(local_res10);
      uVar6 = 0x20;
      goto LAB_00449fe5;
    }
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
  }
  FUN_00414560(&local_58,2);
  return;
}

