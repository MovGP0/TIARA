/* Ghidra address: 01c4cc00 */
/* Ghidra symbol: FUN_01c4cc00 */


void FUN_01c4cc00(longlong param_1,longlong *param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [40];
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  char local_53;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40 [3];
  undefined8 local_28;
  int local_20;
  int local_1c;
  
  local_60 = auStack_98;
  local_70 = 0;
  local_68 = 0;
  local_40[0] = 0;
  local_48 = 0;
  local_50 = 0;
  iVar2 = (**(code **)(*param_2 + 0x28))(param_2);
  iVar3 = (**(code **)(*param_3 + 0x28))(param_3);
  if (iVar2 != iVar3) {
    uVar5 = FUN_0044d490(&PTR_FUN_004334c0,1,L"number of input parameters");
    FUN_004134c0(uVar5);
  }
  iVar2 = (**(code **)(*param_2 + 0x28))();
  local_1c = 0;
  if (-1 < iVar2 + -1) {
    do {
      (**(code **)(*param_2 + 0x18))(param_2,&local_68,local_1c);
      FUN_0043e1a0(local_40,local_68);
      (**(code **)(*param_3 + 0x18))(param_3,&local_48,local_1c);
      local_53 = '\0';
      iVar3 = FUN_004170c0(L"manufactur",local_40[0],1);
      if (iVar3 == 0) {
        FUN_0147c660(&local_48,&local_50);
        FUN_0043e130(&local_70,local_50);
        FUN_00414b50(&local_50,local_70);
        cVar1 = FUN_00448710(local_48,&local_28,PTR_DAT_02004830);
        if (cVar1 == '\0') {
          local_28 = 0;
          local_53 = '\x01';
        }
      }
      local_20 = 0;
      iVar3 = FUN_004170c0(&DAT_01c4d0b4,local_40[0],1);
      if (iVar3 < 1) {
        iVar3 = FUN_004170c0(&DAT_01c4d0c8,local_40[0],1);
        if (0 < iVar3) {
          local_20 = 2;
        }
      }
      else {
        local_20 = 1;
      }
      iVar3 = FUN_004170c0(L"voltage",local_40[0],1);
      if (iVar3 < 1) {
        iVar3 = FUN_004170c0(L"current",local_40[0],1);
        if (0 < iVar3) {
          FUN_00414b50(&local_50,&DAT_01c4d124);
        }
      }
      else {
        FUN_00414b50(&local_50,&DAT_01c4d0f8);
      }
      if ((((local_53 == '\0') && (iVar3 = FUN_004170c0(L"input",local_40[0],1), 0 < iVar3)) &&
          ((local_20 == 1 || (local_20 == 0)))) &&
         ((iVar3 = FUN_00416db0(local_50,&DAT_01c4d0f8), iVar3 == 0 || (local_50 == 0)))) {
        FUN_00b90440(*(undefined8 *)(param_1 + 0x6c8),local_28);
      }
      else if ((local_53 == '\0') &&
              (((iVar3 = FUN_004170c0(L"input",local_40[0],1), 0 < iVar3 && (local_20 == 2)) &&
               ((iVar3 = FUN_00416db0(local_50,&DAT_01c4d0f8), iVar3 == 0 || (local_50 == 0)))))) {
        FUN_00b90440(*(undefined8 *)(param_1 + 0x6e0),local_28);
      }
      else if (((local_53 == '\0') && (iVar3 = FUN_004170c0(L"output",local_40[0],1), 0 < iVar3)) &&
              ((iVar3 = FUN_00416db0(local_50,&DAT_01c4d0f8), iVar3 == 0 || (local_50 == 0)))) {
        FUN_00b90440(*(undefined8 *)(param_1 + 0x6f8),local_28);
      }
      else if (((local_53 == '\0') && (iVar3 = FUN_004170c0(L"output",local_40[0],1), 0 < iVar3)) &&
              (iVar3 = FUN_00416db0(local_50,&DAT_01c4d124), iVar3 == 0)) {
        FUN_00b90440(*(undefined8 *)(param_1 + 0x710),local_28);
      }
      else {
        iVar3 = FUN_004170c0(L"manufactur",local_40[0],1);
        if (0 < iVar3) {
          uVar4 = FUN_01c4ca30(auStack_98,local_48);
          (**(code **)(**(longlong **)(param_1 + 0x780) + 0x268))
                    (*(longlong **)(param_1 + 0x780),uVar4);
        }
      }
      local_1c = local_1c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414560(&local_70,2);
  FUN_00414560(&local_50,3);
  return;
}

