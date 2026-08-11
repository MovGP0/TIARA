/* Ghidra address: 00ef9e60 */
/* Ghidra symbol: FUN_00ef9e60 */


byte * FUN_00ef9e60(byte *param_1,short param_2,longlong param_3)

{
  byte *pbVar1;
  char cVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined4 local_20 [2];
  undefined2 local_18 [4];
  undefined8 local_10;
  
  local_10 = 0;
  pbVar1 = *(byte **)(param_3 + 8);
  *param_1 = 0;
  do {
    if (pbVar1 == (byte *)0x0) {
LAB_00efa18e:
      FUN_00414480(&local_10);
      return param_1;
    }
    uVar3 = (ulonglong)*pbVar1;
    if (uVar3 < 0x1e) {
      if (uVar3 < 0x11) {
        if (uVar3 - 9 < 3) {
LAB_00ef9f43:
          if (**(short **)(pbVar1 + 0xa8) == param_2) {
            FUN_00415020(param_1,*(short **)(pbVar1 + 0xa8) + 8,0x28);
            if (1 < *param_1) {
              FUN_004169a0(&local_10,param_1);
              cVar2 = FUN_019b6680(local_10);
              if (cVar2 == '\0') {
                local_18[0] = 0x2c01;
                FUN_004152c0(local_18,param_1,0x28,2);
                local_20[0] = 0x28695c03;
                FUN_004152c0(local_20,param_1,0x28,0);
                FUN_00415110(param_1,&DAT_00efa1ce,0x28);
              }
            }
            goto LAB_00efa18e;
          }
        }
        else if (uVar3 - 9 == 3) {
          iVar4 = 1;
          do {
            lVar5 = (longlong)iVar4;
            if (*(short *)(*(longlong *)(pbVar1 + 0xa8) + -0x40 + lVar5 * 0x40) == param_2) {
              FUN_00415020(param_1,*(longlong *)(pbVar1 + 0xa8) + -0x30 + lVar5 * 0x40,
                           CONCAT71((int7)((ulonglong)(lVar5 * 8) >> 8),0x28));
              goto LAB_00efa18e;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 != 4);
        }
      }
      else {
        if (uVar3 - 0x11 < 4) goto LAB_00ef9f43;
        if (uVar3 - 0x18 < 2) goto LAB_00efa04d;
        if (uVar3 - 0x1a < 4) goto LAB_00efa0b8;
      }
    }
    else if (uVar3 < 0x57) {
      if (uVar3 - 0x1e < 2) {
LAB_00efa11d:
        if (pbVar1[0xa5] == 2) {
          iVar4 = 1;
          do {
            lVar5 = (longlong)iVar4;
            if (*(short *)(*(longlong *)(pbVar1 + 0xa8) + -0x40 + lVar5 * 0x40) == param_2) {
              FUN_00415020(param_1,*(longlong *)(pbVar1 + 0xa8) + -0x30 + lVar5 * 0x40,
                           CONCAT71((int7)((ulonglong)(lVar5 * 8) >> 8),0x28));
              goto LAB_00efa18e;
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 != 3);
        }
      }
      else if (uVar3 - 0x25 < 2) goto LAB_00ef9f43;
    }
    else if (uVar3 - 0x57 < 2) {
LAB_00efa04d:
      if (pbVar1[0xa5] == 3) {
        iVar4 = 1;
        do {
          lVar5 = (longlong)iVar4;
          if (*(short *)(*(longlong *)(pbVar1 + 0xa8) + -0x40 + lVar5 * 0x40) == param_2) {
            FUN_00415020(param_1,*(longlong *)(pbVar1 + 0xa8) + -0x30 + lVar5 * 0x40,
                         CONCAT71((int7)((ulonglong)(lVar5 * 8) >> 8),0x28));
            goto LAB_00efa18e;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 != 3);
      }
    }
    else if (uVar3 - 0x59 < 4) {
LAB_00efa0b8:
      if (pbVar1[0xa5] == 8) {
        iVar4 = 1;
        do {
          lVar5 = (longlong)iVar4;
          if (*(short *)(*(longlong *)(pbVar1 + 0xa8) + -0x40 + lVar5 * 0x40) == param_2) {
            FUN_00415020(param_1,*(longlong *)(pbVar1 + 0xa8) + -0x30 + lVar5 * 0x40,
                         CONCAT71((int7)((ulonglong)(lVar5 * 8) >> 8),0x28));
            goto LAB_00efa18e;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 != 3);
      }
    }
    else if (uVar3 - 0x5d < 2) goto LAB_00efa11d;
    pbVar1 = *(byte **)(pbVar1 + 0xb0);
  } while( true );
}

