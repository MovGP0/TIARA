/* Ghidra address: 019acdc0 */
/* Ghidra symbol: FUN_019acdc0 */


void FUN_019acdc0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [39];
  char local_21;
  undefined8 *local_20;
  
  local_21 = '\0';
  local_20 = (undefined8 *)FUN_0198b200(0,&PTR_FUN_01984d18,0,0);
  FUN_019acb60(auStack_48,param_1);
  FUN_00b95120(local_20);
  uVar1 = (**(code **)*local_20)(local_20);
  FUN_00418590(uVar1,&DAT_01984da0);
  if (local_21 != '\0') {
    FUN_0199e310(param_1,0,1,0);
  }
  return;
}

