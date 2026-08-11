/* Ghidra address: 009d95a0 */
/* Ghidra symbol: FUN_009d95a0 */


undefined4 FUN_009d95a0(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = 0;
  *param_3 = 0;
  plVar1 = (longlong *)FUN_004113f0(*(undefined8 *)(param_1 + 0x18),&PTR_FUN_0090b468);
  uVar2 = (**(code **)(*plVar1 + 0x308))(plVar1,param_2);
  FUN_009d3370(&local_18,uVar2,*(undefined8 *)(param_1 + 0x20),0);
  FUN_0041b890(param_3,local_18,&DAT_009d967c);
  local_10 = 0;
  FUN_0041b800(&local_18);
  return local_10;
}

