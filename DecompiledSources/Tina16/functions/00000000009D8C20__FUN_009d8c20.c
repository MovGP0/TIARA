/* Ghidra address: 009d8c20 */
/* Ghidra symbol: FUN_009d8c20 */


undefined4 FUN_009d8c20(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 local_28;
  undefined4 local_20;
  
  local_28 = 0;
  *param_3 = 0;
  plVar1 = (longlong *)FUN_009d81f0(param_1);
  uVar2 = FUN_009d3290(param_2);
  uVar2 = FUN_004113f0(uVar2,&PTR_FUN_00909bd0);
  uVar2 = (**(code **)(*plVar1 + 800))(plVar1,uVar2);
  FUN_009d3370(&local_28,uVar2,*(undefined8 *)(param_1 + 0x20),0);
  FUN_0041b890(param_3,local_28,&DAT_009d8d0c);
  local_20 = 0;
  FUN_0041b800(&local_28);
  return local_20;
}

