/* Ghidra address: 010d2300 */
/* Ghidra symbol: FUN_010d2300 */


void FUN_010d2300(longlong *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined4 local_318;
  undefined2 uStack_314;
  undefined1 uStack_312;
  undefined1 local_218;
  undefined4 local_214;
  undefined4 local_200;
  
  local_214 = 0;
  local_218 = 4;
  local_318 = 0x74657206;
  uStack_314 = 0x7275;
  uStack_312 = 0x6e;
  local_200 = param_2;
  uVar1 = FUN_010d1770(0,&PTR_FUN_010d1410,&local_318);
  (**(code **)(*param_1 + 0x20))(param_1,uVar1);
  return;
}

