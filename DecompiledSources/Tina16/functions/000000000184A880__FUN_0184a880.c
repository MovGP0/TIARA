/* Ghidra address: 0184a880 */
/* Ghidra symbol: FUN_0184a880 */


void FUN_0184a880(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5,undefined1 param_6)

{
  int iVar1;
  undefined1 auStack_c8 [32];
  undefined *local_a8;
  undefined *local_a0;
  undefined1 *local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *local_70;
  longlong local_60;
  undefined8 local_50;
  int local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  longlong *local_30;
  
  local_70 = auStack_c8;
  local_88 = 0;
  local_78 = 0;
  local_80 = 0;
  local_50 = 0;
  local_40 = *param_5;
  uStack_38 = param_5[1];
  local_30 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_004b4b10(local_30,param_3);
  FUN_00414480(&local_50);
  iVar1 = (**(code **)(*local_30 + 0x28))();
  local_44 = 0;
  if (-1 < iVar1 + -1) {
    do {
      FUN_0043f750(&local_78,local_44);
      (**(code **)(*local_30 + 0x18))(local_30,&local_80,local_44);
      local_a8 = (undefined *)local_78;
      local_a0 = &DAT_0184ab28;
      local_98 = (undefined1 *)local_80;
      local_90 = &DAT_0184ab3c;
      FUN_00416cd0(&local_50,6,local_50,&DAT_0184ab18);
      local_44 = local_44 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = FUN_00414cb0(local_50);
  FUN_004169f0(&local_50,iVar1 + -2);
  local_a8 = &DAT_0184ab70;
  local_a0 = (undefined *)local_50;
  local_98 = &LAB_0184ab80;
  local_90 = (undefined *)param_4;
  FUN_00416cd0(&local_88,6,L"function ",param_2);
  FUN_0184a4f0(param_1,local_88,&local_40);
  iVar1 = FUN_01847410(*(undefined8 *)(param_1 + 0xa0));
  local_60 = FUN_0184a250(param_1,iVar1 + -1);
  *(undefined1 *)(local_60 + 0x19) = param_6;
  *(undefined1 *)(local_60 + 200) = 1;
  FUN_00410f20(local_30);
  FUN_00414560(&local_88,3);
  FUN_00414480(&local_50);
  return;
}

