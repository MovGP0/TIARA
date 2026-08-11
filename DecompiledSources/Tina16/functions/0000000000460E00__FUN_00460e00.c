/* Ghidra address: 00460e00 */
/* Ghidra symbol: FUN_00460e00 */


longlong *
FUN_00460e00(longlong *param_1,longlong param_2,ushort *param_3,longlong param_4,char param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined1 auStack_78 [40];
  longlong *local_50;
  longlong local_48;
  ushort *local_40;
  longlong local_38;
  int local_30;
  byte local_29;
  
  iVar4 = 0;
  local_50 = param_1;
  local_48 = param_2;
  local_40 = param_3;
  local_38 = param_4;
  FUN_00419260(param_1,&DAT_0045e9a0,1,*(undefined1 *)(param_2 + 1));
  uVar5 = (uint)*(byte *)(local_48 + 1);
  local_30 = 0;
  if (-1 < (int)(uVar5 - 1)) {
    do {
      local_29 = *(byte *)(local_48 + 3 + (longlong)local_30);
      if (param_5 == '\0') {
        puVar3 = (ushort *)
                 (*local_50 +
                 (longlong)(int)(((uint)*(byte *)(local_48 + 1) - local_30) + -1) * 0x18);
      }
      else {
        puVar3 = (ushort *)(*local_50 + (longlong)local_30 * 0x18);
      }
      if ((local_29 & 0x80) == 0x80) {
        if ((local_29 & 0x7f) == 0x48) {
          *puVar3 = 0x4008;
          uVar1 = FUN_00460d80(local_38 + (longlong)iVar4 * 0x18,*(undefined8 *)local_40);
          *(undefined8 *)(puVar3 + 4) = uVar1;
          iVar4 = iVar4 + 1;
        }
        else if ((local_29 & 0x7f) == 0x4a) {
          *puVar3 = 0x4008;
          uVar1 = FUN_00460db0(local_38 + (longlong)iVar4 * 0x18,*(undefined8 *)local_40);
          *(undefined8 *)(puVar3 + 4) = uVar1;
          iVar4 = iVar4 + 1;
        }
        else {
          if (((local_29 & 0x7f) == 0xc) &&
             ((**(short **)local_40 == 0x100 || (**(short **)local_40 == 0x102)))) {
            FUN_004620f0(*(undefined8 *)local_40,*(undefined8 *)local_40,8);
          }
          local_29 = local_29 & 0x7f;
          if (DAT_02010980 != '\0') {
            if (local_29 == 0x11) {
              local_29 = 0x10;
            }
            else if (local_29 == 0x12) {
              local_29 = 2;
            }
            else if (local_29 == 0x13) {
              local_29 = 3;
            }
            else if (local_29 == 0x15) {
              local_29 = 0x14;
            }
          }
          *puVar3 = local_29 | 0x4000;
          *(undefined8 *)(puVar3 + 4) = *(undefined8 *)local_40;
        }
        local_40 = local_40 + 4;
      }
      else {
        *puVar3 = (ushort)local_29;
        if (local_29 < 0xc) {
          if (local_29 == 0xb) {
            puVar3[4] = -(ushort)((char)*local_40 != '\0');
          }
          else if (local_29 < 7) {
            if (local_29 == 6) {
              *(undefined8 *)(puVar3 + 4) = *(undefined8 *)local_40;
            }
            else if (local_29 < 4) {
              if (local_29 == 3) {
                *(undefined4 *)(puVar3 + 4) = *(undefined4 *)local_40;
              }
              else if (1 < local_29) {
                if (local_29 != 2) goto LAB_004613b7;
                puVar3[4] = *local_40;
              }
            }
            else if (local_29 == 4) {
              if (local_30 == 0) {
                uVar6 = FUN_00460df0(auStack_78);
                *(undefined4 *)(puVar3 + 4) = uVar6;
              }
              else {
                *(undefined4 *)(puVar3 + 4) = *(undefined4 *)local_40;
              }
            }
            else {
              if (local_29 != 5) goto LAB_004613b7;
              if (local_30 == 0) {
                uVar1 = FUN_00460de0(auStack_78);
                *(undefined8 *)(puVar3 + 4) = uVar1;
              }
              else {
                *(undefined8 *)(puVar3 + 4) = *(undefined8 *)local_40;
              }
            }
          }
          else if (local_29 == 7) {
            if (local_30 == 0) {
              uVar1 = FUN_00460de0(auStack_78);
              *(undefined8 *)(puVar3 + 4) = uVar1;
            }
            else {
              *(undefined8 *)(puVar3 + 4) = *(undefined8 *)local_40;
            }
          }
          else if (local_29 == 8) {
            *(undefined8 *)(puVar3 + 4) = *(undefined8 *)local_40;
          }
          else if (local_29 == 9) {
            *(undefined8 *)(puVar3 + 4) = *(undefined8 *)local_40;
          }
          else {
            if (local_29 != 10) goto LAB_004613b7;
            puVar3[4] = 4;
            puVar3[5] = 0x8002;
          }
        }
        else if (local_29 < 0x14) {
          if (local_29 == 0x13) {
            if (DAT_02010980 == '\0') {
              *(undefined4 *)(puVar3 + 4) = *(undefined4 *)local_40;
            }
            else {
              *puVar3 = 3;
              *(undefined4 *)(puVar3 + 4) = *(undefined4 *)local_40;
            }
          }
          else if (local_29 < 0x11) {
            if (local_29 == 0x10) {
              *(char *)(puVar3 + 4) = (char)*local_40;
            }
            else if (local_29 == 0xc) {
              *puVar3 = 0;
              FUN_00461840(puVar3,*(undefined8 *)local_40);
            }
            else {
              if (local_29 != 0xd) goto LAB_004613b7;
              *(undefined8 *)(puVar3 + 4) = *(undefined8 *)local_40;
            }
          }
          else if (local_29 == 0x11) {
            *(char *)(puVar3 + 4) = (char)*local_40;
          }
          else if (local_29 == 0x12) {
            if (DAT_02010980 == '\0') {
              puVar3[4] = *local_40;
            }
            else {
              *puVar3 = 3;
              *(uint *)(puVar3 + 4) = (uint)*local_40;
            }
          }
          else {
LAB_004613b7:
            FUN_004608e0();
          }
        }
        else if (local_29 == 0x14) {
          *(undefined8 *)(puVar3 + 4) = *(undefined8 *)local_40;
        }
        else if (local_29 == 0x15) {
          if (DAT_02010980 == '\0') {
            *(undefined8 *)(puVar3 + 4) = *(undefined8 *)local_40;
          }
          else {
            *puVar3 = 0x14;
            *(undefined8 *)(puVar3 + 4) = *(undefined8 *)local_40;
          }
        }
        else if (local_29 == 0x48) {
          *puVar3 = 8;
          if (*(longlong *)local_40 == 0) {
            *(undefined8 *)(puVar3 + 4) = DAT_01dc43a0;
          }
          else {
            puVar2 = (undefined8 *)FUN_00460d80(local_38 + (longlong)iVar4 * 0x18,local_40);
            uVar1 = FUN_00415f70(*puVar2);
            *(undefined8 *)(puVar3 + 4) = uVar1;
            *(undefined8 *)(local_38 + 8 + (longlong)iVar4 * 0x18) = 0;
            iVar4 = iVar4 + 1;
          }
        }
        else {
          if (local_29 != 0x4a) goto LAB_004613b7;
          *puVar3 = 8;
          if (*(longlong *)local_40 == 0) {
            *(undefined8 *)(puVar3 + 4) = DAT_01dc43a0;
          }
          else {
            puVar2 = (undefined8 *)FUN_00460db0(local_38 + (longlong)iVar4 * 0x18,local_40);
            uVar1 = FUN_00415f70(*puVar2);
            *(undefined8 *)(puVar3 + 4) = uVar1;
            *(undefined8 *)(local_38 + 0x10 + (longlong)iVar4 * 0x18) = 0;
            iVar4 = iVar4 + 1;
          }
        }
        if (local_29 != 10) {
          local_40 = local_40 + 4;
        }
      }
      local_30 = local_30 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return local_50;
}

