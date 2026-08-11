/* Ghidra address: 01d396b0 */
/* Ghidra symbol: FUN_01d396b0 */


void FUN_01d396b0(undefined8 *param_1,uint param_2,int param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  byte *pbVar3;
  byte bVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined7 uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  byte *local_68;
  undefined8 local_59;
  undefined8 uStack_51;
  undefined8 uStack_49;
  undefined8 uStack_41;
  undefined1 uStack_39;
  
  local_59 = *param_1;
  uStack_51 = param_1[1];
  uStack_49 = param_1[2];
  uStack_41 = param_1[3];
  uStack_39 = *(undefined1 *)(param_1 + 4);
  FUN_004179d0(&local_59,&DAT_01d36af8);
  if ((int)param_2 <= param_3) {
    iVar10 = (param_3 - param_2) + 1;
    do {
      uVar7 = (ulonglong)param_2;
      bVar4 = FUN_01d36f50(&local_59,uVar7,&local_68);
      pbVar3 = local_68;
      if (bVar4 < 0xd) {
        if (bVar4 == 0xc) {
          FUN_013a5c20(local_68);
        }
        else {
          uVar8 = (undefined7)(uVar7 >> 8);
          if (bVar4 < 7) {
            if (bVar4 == 6) {
              FUN_004095f0(*(undefined8 *)(local_68 + 8));
              pbVar3[8] = 0;
              pbVar3[9] = 0;
              pbVar3[10] = 0;
              pbVar3[0xb] = 0;
              pbVar3[0xc] = 0;
              pbVar3[0xd] = 0;
              pbVar3[0xe] = 0;
              pbVar3[0xf] = 0;
              FUN_004095f0(*(undefined8 *)(pbVar3 + 0x20));
              pbVar3[0x20] = 0;
              pbVar3[0x21] = 0;
              pbVar3[0x22] = 0;
              pbVar3[0x23] = 0;
              pbVar3[0x24] = 0;
              pbVar3[0x25] = 0;
              pbVar3[0x26] = 0;
              pbVar3[0x27] = 0;
            }
            else if (bVar4 == 3) {
              FUN_004095f0(*(undefined8 *)(local_68 + 8));
              pbVar3[8] = 0;
              pbVar3[9] = 0;
              pbVar3[10] = 0;
              pbVar3[0xb] = 0;
              pbVar3[0xc] = 0;
              pbVar3[0xd] = 0;
              pbVar3[0xe] = 0;
              pbVar3[0xf] = 0;
            }
            else if (bVar4 == 4) {
              lVar1 = *(longlong *)(local_68 + 0x26);
              if (lVar1 != 0) {
                FUN_004095f0(*(undefined8 *)(lVar1 + 1));
                FUN_004095f0(*(undefined8 *)(lVar1 + 9));
                FUN_004095f0(*(undefined8 *)(lVar1 + 0x19));
                FUN_004095f0(*(undefined8 *)(local_68 + 0x26));
              }
            }
            else if (bVar4 == 5) {
              bVar4 = *local_68;
              if (bVar4 < 8) {
                uVar6 = (int)CONCAT71(uVar8,1) << (bVar4 & 0x1f);
                uVar7 = (ulonglong)uVar6;
                bVar11 = (uVar6 & 0xfe) != 0;
              }
              else {
                bVar11 = false;
              }
              if (!bVar11) {
                if ((byte)(bVar4 - 8) < 8) {
                  bVar11 = ((int)CONCAT71((int7)(uVar7 >> 8),1) << (bVar4 - 8 & 0x1f) & 0x70U) != 0;
                }
                else {
                  bVar11 = false;
                }
                if (!bVar11) {
                  if (bVar4 == 9) {
                    FUN_00410f20(*(undefined8 *)(local_68 + 0x11));
                    FUN_004095f0(*(undefined8 *)(local_68 + 9));
                    local_68[0x11] = 0;
                    local_68[0x12] = 0;
                    local_68[0x13] = 0;
                    local_68[0x14] = 0;
                    local_68[0x15] = 0;
                    local_68[0x16] = 0;
                    local_68[0x17] = 0;
                    local_68[0x18] = 0;
                    local_68[9] = 0;
                    local_68[10] = 0;
                    local_68[0xb] = 0;
                    local_68[0xc] = 0;
                    local_68[0xd] = 0;
                    local_68[0xe] = 0;
                    local_68[0xf] = 0;
                    local_68[0x10] = 0;
                    local_68[5] = 0;
                    local_68[6] = 0;
                    local_68[7] = 0;
                    local_68[8] = 0;
                    local_68[0x19] = 0;
                  }
                  else if (bVar4 == 8) {
                    FUN_00410f20(*(undefined8 *)(local_68 + 9));
                    if (*(longlong *)(local_68 + 1) != 0) {
                      FUN_00410f20(*(undefined8 *)(local_68 + 1));
                    }
                    local_68[9] = 0;
                    local_68[10] = 0;
                    local_68[0xb] = 0;
                    local_68[0xc] = 0;
                    local_68[0xd] = 0;
                    local_68[0xe] = 0;
                    local_68[0xf] = 0;
                    local_68[0x10] = 0;
                    local_68[1] = 0;
                    local_68[2] = 0;
                    local_68[3] = 0;
                    local_68[4] = 0;
                    local_68[5] = 0;
                    local_68[6] = 0;
                    local_68[7] = 0;
                    local_68[8] = 0;
                  }
                  else if (bVar4 == 10) {
                    FUN_00442c30(*(undefined8 *)(local_68 + 2));
                    FUN_00410f20(*(undefined8 *)(local_68 + 0xe));
                  }
                  else if ((bVar4 != 0xb) && (bVar4 == 0xf)) {
                    FUN_004095f0(*(undefined8 *)(local_68 + 1));
                  }
                  goto LAB_01d39c8b;
                }
              }
              FUN_004095f0(*(undefined8 *)(local_68 + 1));
              if (*(longlong *)(local_68 + 9) != 0) {
                uVar6 = (uint)(byte)(&DAT_01ff4ec2)[*local_68];
                iVar9 = 0;
                if (-1 < (int)(uVar6 - 1)) {
                  do {
                    FUN_004095f0(*(undefined8 *)(*(longlong *)(local_68 + 9) + (longlong)iVar9 * 8))
                    ;
                    iVar9 = iVar9 + 1;
                    uVar6 = uVar6 - 1;
                  } while (uVar6 != 0);
                }
              }
              FUN_004095f0(*(undefined8 *)(local_68 + 9));
            }
          }
          else if (bVar4 == 7) {
            lVar1 = *(longlong *)(local_68 + 0x26);
            if (lVar1 != 0) {
              FUN_004095f0(*(undefined8 *)(lVar1 + 1));
              FUN_004095f0(*(undefined8 *)(lVar1 + 9));
              FUN_004095f0(*(undefined8 *)(lVar1 + 0x19));
              FUN_004095f0(*(undefined8 *)(local_68 + 0x26));
              if (local_68[0x2f] != 0) {
                FUN_00410f20(*(undefined8 *)(local_68 + 0x30));
                FUN_00442c30(*(undefined8 *)(local_68 + 0x138));
              }
            }
            lVar1 = *(longlong *)(local_68 + 0x140);
            if (lVar1 != 0) {
              FUN_004095f0(*(undefined8 *)(lVar1 + 8));
              FUN_004095f0(*(undefined8 *)(lVar1 + 0x10));
              FUN_004095f0(*(undefined8 *)(local_68 + 0x140));
              local_68[0x140] = 0;
              local_68[0x141] = 0;
              local_68[0x142] = 0;
              local_68[0x143] = 0;
              local_68[0x144] = 0;
              local_68[0x145] = 0;
              local_68[0x146] = 0;
              local_68[0x147] = 0;
              local_68[0x148] = 0;
            }
          }
          else if (bVar4 == 10) {
            puVar2 = *(undefined8 **)(local_68 + 8);
            if (puVar2 != (undefined8 *)0x0) {
              uVar5 = (**(code **)*puVar2)(puVar2);
              FUN_004095f0(uVar5);
            }
          }
          else if (bVar4 == 0xb) {
            if (*(longlong *)(local_68 + 0x18) != 0) {
              if (local_68[0x40] < 8) {
                bVar11 = ((int)CONCAT71(uVar8,1) << (local_68[0x40] & 0x1f) & 0xfcU) != 0;
              }
              else {
                bVar11 = false;
              }
              if (bVar11) {
                uVar6 = (uint)*(ushort *)(local_68 + 0x10);
                iVar9 = 0;
                if (-1 < (int)(uVar6 - 1)) {
                  do {
                    FUN_016a94d0(*(undefined8 *)(*(longlong *)(pbVar3 + 0x18) + (longlong)iVar9 * 8)
                                 ,1);
                    iVar9 = iVar9 + 1;
                    uVar6 = uVar6 - 1;
                  } while (uVar6 != 0);
                }
                FUN_004095f0(*(undefined8 *)(pbVar3 + 0x18));
              }
              else {
                FUN_004095f0(*(longlong *)(local_68 + 0x18));
              }
            }
            FUN_00410f20(*(undefined8 *)(pbVar3 + 8));
            pbVar3[8] = 0;
            pbVar3[9] = 0;
            pbVar3[10] = 0;
            pbVar3[0xb] = 0;
            pbVar3[0xc] = 0;
            pbVar3[0xd] = 0;
            pbVar3[0xe] = 0;
            pbVar3[0xf] = 0;
            if (*(longlong *)(pbVar3 + 0x38) != 0) {
              FUN_00410f20(*(longlong *)(pbVar3 + 0x38));
              pbVar3[0x38] = 0;
              pbVar3[0x39] = 0;
              pbVar3[0x3a] = 0;
              pbVar3[0x3b] = 0;
              pbVar3[0x3c] = 0;
              pbVar3[0x3d] = 0;
              pbVar3[0x3e] = 0;
              pbVar3[0x3f] = 0;
            }
            if (*(longlong *)(pbVar3 + 0x20) != 0) {
              FUN_004095f0(*(longlong *)(pbVar3 + 0x20));
            }
            uVar5 = FUN_016a94d0(*(undefined8 *)(pbVar3 + 0x28),0);
            if (pbVar3[0x40] == 4) {
              uVar5 = FUN_016a94d0(*(undefined8 *)(pbVar3 + 0x48),0);
            }
            if (pbVar3[0x40] < 8) {
              bVar11 = ((int)CONCAT71((int7)((ulonglong)uVar5 >> 8),1) << (pbVar3[0x40] & 0x1f) &
                       0x28U) != 0;
            }
            else {
              bVar11 = false;
            }
            if (bVar11) {
              FUN_004095f0(*(undefined8 *)(pbVar3 + 0x50));
            }
          }
        }
      }
      else if (bVar4 < 0x12) {
        if (bVar4 == 0x11) {
          FUN_00410f20(*(undefined8 *)local_68);
          pbVar3[0] = 0;
          pbVar3[1] = 0;
          pbVar3[2] = 0;
          pbVar3[3] = 0;
          pbVar3[4] = 0;
          pbVar3[5] = 0;
          pbVar3[6] = 0;
          pbVar3[7] = 0;
        }
        else if (bVar4 == 0xd) {
          FUN_004095f0(*(undefined8 *)(local_68 + 0x10));
          pbVar3[0x10] = 0;
          pbVar3[0x11] = 0;
          pbVar3[0x12] = 0;
          pbVar3[0x13] = 0;
          pbVar3[0x14] = 0;
          pbVar3[0x15] = 0;
          pbVar3[0x16] = 0;
          pbVar3[0x17] = 0;
        }
        else if (bVar4 == 0xe) {
          puVar2 = *(undefined8 **)(local_68 + 8);
          if (puVar2 != (undefined8 *)0x0) {
            uVar5 = (**(code **)*puVar2)(puVar2);
            FUN_004095f0(uVar5);
          }
          puVar2 = *(undefined8 **)(pbVar3 + 0x10);
          if (puVar2 != (undefined8 *)0x0) {
            uVar5 = (**(code **)*puVar2)(puVar2);
            FUN_004095f0(uVar5);
          }
        }
        else if ((bVar4 == 0xf) &&
                (puVar2 = *(undefined8 **)(local_68 + 0x10), puVar2 != (undefined8 *)0x0)) {
          uVar5 = (**(code **)*puVar2)(puVar2);
          FUN_004095f0(uVar5);
        }
      }
      else if (bVar4 == 0x12) {
        FUN_013a5c50(local_68);
      }
      else if (bVar4 == 0x14) {
        FUN_013a5c60(local_68);
      }
LAB_01d39c8b:
      param_2 = param_2 + 1;
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  FUN_00417740(&local_59,&DAT_01d36af8);
  return;
}

