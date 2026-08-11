/* Ghidra address: 00b972c0 */
/* Ghidra symbol: FUN_00b972c0 */


undefined8 FUN_00b972c0(undefined8 param_1,longlong param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  ulonglong unaff_RBX;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  longlong local_res10 [3];
  int local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_78 = 0;
  local_68 = 0;
  local_70 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar2 = 0;
  if (local_res10[0] != 0) {
    iVar2 = *(int *)(local_res10[0] + -4);
  }
  FUN_00414480(local_40);
  local_80 = 1;
  iVar5 = iVar2;
  if (0 < iVar2) {
    do {
      uVar1 = *(ushort *)(local_res10[0] + -2 + (longlong)local_80 * 2);
      if ((uVar1 < 0x30) || (0x39 < uVar1)) {
        if (local_80 < iVar2) {
          unaff_RBX = (ulonglong)*(ushort *)(local_res10[0] + -2 + (longlong)(local_80 + 1) * 2);
        }
        else {
          unaff_RBX = CONCAT62((int6)(unaff_RBX >> 0x10),0x29);
        }
        if (((ushort)unaff_RBX < 0x30) || (0x39 < (ushort)unaff_RBX)) {
          if ((uVar1 < 0x41) || (0x5a < uVar1)) {
            FUN_00416780(&local_50,uVar1);
            FUN_00416ad0(local_40,local_50);
          }
          else {
            unaff_RBX = 1;
            if (0 < DAT_02019a8c) {
              puVar4 = &DAT_02019a40;
              iVar6 = DAT_02019a8c;
              do {
                FUN_00416780(&local_58,uVar1);
                iVar3 = FUN_00416db0(*puVar4,local_58);
                if (iVar3 == 0) {
                  FUN_00416780(&local_60,(int)unaff_RBX + 0x40);
                  FUN_00416ad0(local_40,local_60);
                }
                unaff_RBX = (ulonglong)((int)unaff_RBX + 1);
                puVar4 = puVar4 + 1;
                iVar6 = iVar6 + -1;
              } while (iVar6 != 0);
            }
          }
        }
        else {
          FUN_00416780(&local_68,uVar1);
          FUN_00416780(&local_70,unaff_RBX & 0xffffffff);
          FUN_00416ba0(&local_48,local_68,local_70);
          unaff_RBX = 1;
          if (0 < DAT_02019a8c) {
            puVar4 = &DAT_02019a40;
            iVar6 = DAT_02019a8c;
            do {
              iVar3 = FUN_00416db0(*puVar4,local_48);
              if (iVar3 == 0) {
                FUN_00416780(&local_78,(int)unaff_RBX + 0x40);
                FUN_00416ad0(local_40,local_78);
              }
              unaff_RBX = (ulonglong)((int)unaff_RBX + 1);
              puVar4 = puVar4 + 1;
              iVar6 = iVar6 + -1;
            } while (iVar6 != 0);
          }
        }
      }
      local_80 = local_80 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_00414ad0(param_1,local_40[0]);
  FUN_00414560(&local_78,8);
  FUN_00414480(local_res10);
  return param_1;
}

