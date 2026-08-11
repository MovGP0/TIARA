/* Ghidra address: 00447e70 */
/* Ghidra symbol: FUN_00447e70 */


undefined1 FUN_00447e70(longlong param_1,ulonglong *param_2,longlong param_3)

{
  short sVar1;
  int iVar2;
  ulonglong uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined1 auStack_a8 [40];
  ulonglong *local_80;
  longlong local_78;
  undefined1 local_69;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  ushort *local_30;
  longlong local_28;
  int local_20;
  int local_1c;
  
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_28 = 0;
  local_30 = (ushort *)0x0;
  local_1c = 0;
  local_69 = 0;
  local_80 = param_2;
  local_78 = param_3;
  FUN_00447c50(auStack_a8);
  if ((*(short *)(param_1 + (longlong)local_1c * 2) != 0) &&
     (sVar1 = FUN_00447c80(auStack_a8), *(short *)(param_1 + (longlong)local_1c * 2) != 0)) {
    FUN_00447cd0(auStack_a8,local_40);
    FUN_00414b50(&local_28,local_40[0]);
    if (*(short *)(param_1 + (longlong)local_1c * 2) == *(short *)(local_78 + 0x17a)) {
      local_1c = local_1c + 1;
      FUN_00447cd0(auStack_a8,&local_48);
      FUN_00414b50(&local_30,local_48);
    }
    iVar2 = 0;
    if ((*(ushort *)(param_1 + (longlong)local_1c * 2) & 0xffdf) == 0x45) {
      local_1c = local_1c + 1;
      iVar2 = FUN_00447de0(auStack_a8);
    }
    if (((local_28 != 0) || (local_30 != (ushort *)0x0)) &&
       (FUN_00447c50(auStack_a8), *(short *)(param_1 + (longlong)local_1c * 2) == 0)) {
      iVar5 = iVar2 + 4;
      if (iVar5 < 1) {
        if (iVar5 < 0) {
          iVar6 = -iVar5;
          iVar2 = 0;
          if (local_28 != 0) {
            iVar2 = *(int *)(local_28 + -4);
          }
          if (iVar2 < iVar6) {
            FUN_00417320(&local_60,0x30,iVar6);
            FUN_00416ba0(&local_28,local_60,local_28);
          }
          iVar2 = 0;
          if (local_28 != 0) {
            iVar2 = *(int *)(local_28 + -4);
          }
          FUN_00416dc0(&local_68,local_28,iVar2 + iVar5 + 1,iVar6);
          FUN_00416ba0(&local_30,local_68,local_30);
          iVar2 = 0;
          if (local_28 != 0) {
            iVar2 = *(int *)(local_28 + -4);
          }
          FUN_00416dc0(&local_28,local_28,1,iVar2 + iVar5);
        }
      }
      else {
        iVar6 = 0;
        if (local_30 != (ushort *)0x0) {
          iVar6 = *(int *)(local_30 + -2);
        }
        if (iVar6 < iVar5) {
          FUN_00417320(&local_50,0x30,iVar5);
          FUN_00416ad0(&local_30,local_50);
        }
        FUN_00416dc0(&local_58,local_30,1,iVar5);
        FUN_00416ad0(&local_28,local_58);
        FUN_00416dc0(&local_30,local_30,iVar2 + 5,0x7fffffff);
      }
      if (local_28 == 0) {
        FUN_00414b50(&local_28,&DAT_004482dc);
      }
      uVar3 = FUN_00418a50(local_28,&local_20);
      if ((local_20 == 0) && (uVar3 < 0x8000000000000001)) {
        if ((local_30 != (ushort *)0x0) && (0x34 < *local_30)) {
          bVar7 = true;
          if (*local_30 == 0x35) {
            iVar2 = 0;
            if (local_30 != (ushort *)0x0) {
              iVar2 = *(int *)(local_30 + -2);
            }
            iVar2 = iVar2 + -1;
            local_20 = 1;
            bVar7 = false;
            if (0 < iVar2) {
              do {
                if (local_30[local_20] != 0x30) {
                  bVar7 = true;
                  break;
                }
                local_20 = local_20 + 1;
                iVar2 = iVar2 + -1;
                bVar7 = false;
              } while (iVar2 != 0);
            }
            if (bVar7) {
              bVar7 = true;
            }
            else {
              iVar2 = 0;
              if (local_28 != 0) {
                iVar2 = *(int *)(local_28 + -4);
              }
              uVar4 = *(short *)(local_28 + (longlong)(iVar2 + -1) * 2) - 0x30;
              if (uVar4 < 0x10) {
                bVar7 = ((int)CONCAT62((int6)((ulonglong)local_28 >> 0x10),1) <<
                         ((byte)uVar4 & 0x1f) & 0x2aaU) != 0;
              }
              else {
                bVar7 = false;
              }
            }
          }
          if (bVar7) {
            uVar3 = uVar3 + 1;
          }
        }
        if (sVar1 < 0) {
          if (0x8000000000000000 < uVar3) goto LAB_0044826d;
          uVar3 = -uVar3;
        }
        else if (0x7fffffffffffffff < uVar3) goto LAB_0044826d;
        *local_80 = uVar3;
        local_69 = 1;
      }
    }
  }
LAB_0044826d:
  FUN_00414560(&local_68,6);
  FUN_00414560(&local_30,2);
  return local_69;
}

