/* Ghidra address: 01abd980 */
/* Ghidra symbol: FUN_01abd980 */


undefined8 FUN_01abd980(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  
  cVar1 = FUN_004113d0(param_2,&PTR_FUN_01aae560);
  if (cVar1 == '\0') {
    cVar1 = FUN_004113d0(param_2,&PTR_FUN_01aaff18);
    if (cVar1 != '\0') {
      (**(code **)(*param_2 + 0x48))(param_2,param_1);
    }
  }
  else {
    (**(code **)(*param_2 + 0x48))(param_2,param_1);
  }
  return param_1;
}

