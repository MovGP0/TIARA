/* Ghidra address: 015d84a0 */
/* Ghidra symbol: FUN_015d84a0 */


void FUN_015d84a0(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined1 in_stack_00000030;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 *local_40;
  undefined8 local_30;
  int local_24;
  undefined8 local_20;
  
  local_40 = auStack_78;
  local_48 = 0;
  local_20 = 0;
  local_30 = 0;
  FUN_015ca180(param_1);
  FUN_00414b50(&local_20,*(undefined8 *)(param_1 + 0x78));
  FUN_015c1220(&local_30,*(undefined8 *)(param_1 + 0xb0),0,*(undefined8 *)(param_1 + 0x78));
  FUN_00414ad0(param_1 + 0x78,local_30);
  iVar1 = (**(code **)(*param_2 + 0x28))();
  local_24 = 0;
  if (-1 < iVar1 + -1) {
    do {
      (**(code **)(*param_2 + 0x18))(param_2,&local_48,local_24);
      local_58 = in_stack_00000030;
      local_50 = *(undefined8 *)(param_1 + 0x78);
      FUN_015d7b90(auStack_78,local_30,local_30,local_48);
      local_24 = local_24 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00414ad0(param_1 + 0x78,local_20);
  FUN_015ca1a0(param_1);
  FUN_00414480(&local_48);
  FUN_00414480(&local_30);
  FUN_00414480(&local_20);
  return;
}

