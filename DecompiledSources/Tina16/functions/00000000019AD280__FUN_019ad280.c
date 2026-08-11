/* Ghidra address: 019ad280 */
/* Ghidra symbol: FUN_019ad280 */


void FUN_019ad280(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined8 *local_20;
  
  local_20 = (undefined8 *)FUN_0198b200(0,&PTR_FUN_01984d18,0,0);
  FUN_019ace40(auStack_48,param_1);
  FUN_019ad020(auStack_48,param_2);
  FUN_00b95120(local_20);
  uVar1 = (**(code **)*local_20)(local_20);
  FUN_00418590(uVar1,&DAT_01984da0);
  return;
}

