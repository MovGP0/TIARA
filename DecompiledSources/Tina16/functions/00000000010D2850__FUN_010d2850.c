/* Ghidra address: 010d2850 */
/* Ghidra symbol: FUN_010d2850 */


void FUN_010d2850(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined8 local_318;
  undefined1 uStack_310;
  undefined1 local_218;
  undefined4 local_214;
  undefined4 local_200;
  
  local_214 = 0;
  local_218 = 0x15;
  local_318 = 0x7461747374657308;
  uStack_310 = 0x65;
  local_200 = param_2;
  uVar1 = FUN_010d1770(0,&PTR_FUN_010d1410,&local_318);
  (**(code **)(*param_1 + 0x20))(param_1,uVar1);
  return;
}

