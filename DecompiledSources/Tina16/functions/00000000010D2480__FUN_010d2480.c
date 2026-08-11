/* Ghidra address: 010d2480 */
/* Ghidra symbol: FUN_010d2480 */


void FUN_010d2480(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined4 local_318;
  undefined2 uStack_314;
  undefined1 uStack_312;
  undefined1 local_218;
  undefined4 local_214;
  
  local_218 = 9;
  local_318 = 0x646e6506;
  uStack_314 = 0x7973;
  uStack_312 = 0x73;
  local_214 = param_2;
  uVar1 = FUN_010d1770(0,&PTR_FUN_010d1410,&local_318);
  (**(code **)(*param_1 + 0x20))(param_1,uVar1);
  return;
}

