/* Ghidra address: 010d2d20 */
/* Ghidra symbol: FUN_010d2d20 */


void FUN_010d2d20(longlong *param_1)

{
  undefined8 uVar1;
  undefined8 local_318;
  undefined2 uStack_310;
  undefined1 uStack_30e;
  undefined1 local_218;
  undefined4 local_214;
  
  local_214 = 0;
  local_218 = 0xd;
  local_318 = 0x637365776172640a;
  uStack_310 = 0x7061;
  uStack_30e = 0x65;
  uVar1 = FUN_010d1770(0,&PTR_FUN_010d1410,&local_318);
  (**(code **)(*param_1 + 0x20))(param_1,uVar1);
  return;
}

