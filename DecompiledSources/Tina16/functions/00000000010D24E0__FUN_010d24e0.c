/* Ghidra address: 010d24e0 */
/* Ghidra symbol: FUN_010d24e0 */


void FUN_010d24e0(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined4 local_308 [64];
  undefined1 local_208;
  undefined4 local_204;
  undefined8 local_1f0;
  undefined8 local_190;
  undefined8 local_130;
  
  local_208 = 8;
  local_308[0] = 0x73797303;
  local_204 = param_3;
  local_1f0 = FUN_013b2dc0(0,&PTR_FUN_010d12e8,1,1);
  FUN_00c53190(local_1f0,param_2);
  local_190 = FUN_013b2dc0(0,&PTR_FUN_010d12e8,1,1);
  local_130 = FUN_013b2dc0(0,&PTR_FUN_010d12e8,1,1);
  uVar1 = FUN_010d1770(0,&PTR_FUN_010d1410,local_308);
  (**(code **)(*param_1 + 0x20))(param_1,uVar1);
  return;
}

