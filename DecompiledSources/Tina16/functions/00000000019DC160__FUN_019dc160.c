/* Ghidra address: 019dc160 */
/* Ghidra symbol: FUN_019dc160 */


void FUN_019dc160(undefined8 param_1,longlong *param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 *local_78;
  undefined1 *local_60;
  longlong *local_48;
  undefined8 local_40;
  undefined1 local_32;
  undefined1 local_31;
  int local_2c;
  undefined8 *local_28;
  
  local_60 = auStack_b8;
  local_40 = 0;
  local_28 = (undefined8 *)FUN_014e4f70(0,&PTR_FUN_014db5f8,0);
  local_31 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0;
  local_78 = &local_32;
  FUN_00ee3b90(0,param_1,local_28,6);
  local_31 = 1;
  iVar2 = *(int *)(local_28 + 2);
  local_2c = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar1 = FUN_00b94e60(local_28,local_2c);
      local_48 = (longlong *)FUN_019dba60(uVar1);
      (**(code **)(*local_48 + 0x288))(local_48,&local_40);
      (**(code **)(*local_48 + 0xf8))(local_48);
      (**(code **)(*param_2 + 0x20))(param_2,local_48);
      local_2c = local_2c + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00b95120(local_28);
  uVar1 = (**(code **)*local_28)(local_28);
  FUN_00418590(uVar1,&DAT_014db680);
  FUN_00414480(&local_40);
  return;
}

