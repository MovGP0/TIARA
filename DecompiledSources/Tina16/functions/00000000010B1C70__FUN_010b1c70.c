/* Ghidra address: 010b1c70 */
/* Ghidra symbol: FUN_010b1c70 */


void FUN_010b1c70(longlong param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined8 local_res10 [3];
  int local_94;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  longlong local_40;
  longlong local_38;
  undefined8 local_30;
  
  local_80 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  local_58 = 0;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  iVar7 = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10);
  local_94 = 0;
  if (-1 < iVar7 + -1) {
    do {
      lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x18),local_94);
      (**(code **)(*plVar3 + 0x90))(plVar3);
      (**(code **)(*plVar3 + 0x10))(plVar3,*(undefined8 *)(lVar4 + 0x20));
      FUN_00414b50(&local_40,L"#include \"Arduino.h\"");
      FUN_00441a10(&local_58,*(undefined8 *)(lVar4 + 0x30));
      FUN_0043e1a0(&local_50,local_58);
      iVar1 = FUN_00416db0(local_50,L".ino");
      bVar9 = iVar1 == 0;
      iVar1 = *(int *)(lVar4 + 0x4c);
      if ((bVar9) &&
         (iVar2 = (**(code **)(**(longlong **)(lVar4 + 0x20) + 0xb0))
                            (*(longlong **)(lVar4 + 0x20),local_40), iVar2 == -1)) {
        (**(code **)(*plVar3 + 200))(plVar3,0,local_40);
      }
      FUN_010af830(lVar4,&local_38);
      FUN_0043e1a0(&local_40,L"{$PRJ}");
      iVar2 = FUN_004170c0(local_40,local_38,1);
      if (0 < iVar2) {
        iVar5 = 0;
        if (local_40 != 0) {
          iVar5 = *(int *)(local_40 + -4);
        }
        iVar6 = 0;
        if (local_38 != 0) {
          iVar6 = *(int *)(local_38 + -4);
        }
        iVar8 = 0;
        if (local_40 != 0) {
          iVar8 = *(int *)(local_40 + -4);
        }
        FUN_00416dc0(&local_38,local_38,iVar2 + iVar5 + 1,iVar6 - iVar8);
      }
      FUN_00441a10(&local_60,*(undefined8 *)(lVar4 + 0x30));
      FUN_0043e1a0(&local_48,local_60);
      if (iVar1 == 1) {
        if (*(longlong *)(lVar4 + 0x38) == 0) {
          FUN_00441920(&local_78,local_38);
          FUN_010b1b70(plVar3,local_res10[0],local_78);
          if (bVar9) {
            FUN_00441920(&local_80,*(undefined8 *)(lVar4 + 0x30));
            FUN_010b1b70(plVar3,local_res10[0],local_80);
          }
        }
        else {
          FUN_00416cd0(&local_30,3,local_res10[0],&LAB_010b20a8,*(undefined8 *)(lVar4 + 0x38));
          FUN_00440c30(local_30);
          FUN_00441920(&local_68,local_38);
          FUN_010b1b70(plVar3,local_30,local_68);
          if (bVar9) {
            FUN_00441920(&local_70,*(undefined8 *)(lVar4 + 0x30));
            FUN_010b1b70(plVar3,local_30,local_70);
          }
        }
      }
      local_94 = local_94 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_00410f20(plVar3);
  FUN_00414560(&local_80,0xb);
  FUN_00414480(local_res10);
  return;
}

