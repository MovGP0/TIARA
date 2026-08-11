/* Ghidra address: 00d98ac0 */
/* Ghidra symbol: FUN_00d98ac0 */


void FUN_00d98ac0(longlong param_1,undefined8 param_2)

{
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  (**(code **)(**(longlong **)(param_1 + 0x180) + 0x40))(**(longlong **)(param_1 + 0x180),&local_30)
  ;
  if (local_30._1_1_ != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x180) + 0x58))(*(longlong **)(param_1 + 0x180),param_2);
  }
  FUN_00417740(&local_30,&DAT_00d67d80);
  return;
}

