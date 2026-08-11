/* Ghidra address: 01cc3330 */
/* Ghidra symbol: FUN_01cc3330 */


void FUN_01cc3330(longlong param_1,int param_2,longlong *param_3,undefined1 param_4,
                 undefined1 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  longlong lVar4;
  int iVar5;
  int local_34;
  undefined8 local_30;
  
  local_30 = 0;
  FUN_00414610(param_6);
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x448);
  local_34 = 0;
  iVar5 = param_2;
  if (-1 < param_2 + -1) {
    do {
      (**(code **)(*param_3 + 0x18))(param_3,&local_30,local_34);
      uVar3 = (**(code **)(*param_3 + 0x30))(param_3,local_34);
      lVar4 = FUN_01cc2930(param_1,local_30,param_4,param_5,0,param_6,uVar3,param_7);
      *(int *)(lVar4 + 0x150) = param_2;
      *(int *)(lVar4 + 0x154) = local_34;
      *(undefined4 *)(lVar4 + 0x158) = uVar2;
      *(undefined4 *)(lVar4 + 0x15c) = *(undefined4 *)(param_1 + 0x454);
      *(int *)(param_1 + 0x454) = *(int *)(param_1 + 0x454) + 1;
      local_34 = local_34 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  *(undefined4 *)(param_1 + 0x448) = uVar2;
  *(undefined4 *)(param_1 + 0x450) = uVar1;
  if (0 < param_2) {
    *(int *)(param_1 + 0x448) = *(int *)(param_1 + 0x448) + 1;
  }
  *(int *)(param_1 + 0x44c) = param_2;
  FUN_00414480(&local_30);
  FUN_00414480(&param_6);
  return;
}

