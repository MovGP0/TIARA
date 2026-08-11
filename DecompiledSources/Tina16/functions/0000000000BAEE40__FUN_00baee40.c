/* Ghidra address: 00baee40 */
/* Ghidra symbol: FUN_00baee40 */


undefined8 FUN_00baee40(longlong param_1,undefined8 param_2)

{
  char cVar1;
  longlong *local_20 [2];
  
  local_20[0] = (longlong *)0x0;
  FUN_0041b800(param_2);
  if (*(longlong *)(param_1 + 0x38) != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0xa0))(*(longlong **)(param_1 + 0x38));
    if (cVar1 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))(*(longlong **)(param_1 + 0x38),local_20)
      ;
      if (*(int *)(param_1 + 0x44) < 0) {
        (**(code **)(*local_20[0] + 0x28))(local_20[0],1);
      }
      if (0 < *(int *)(param_1 + 0x44)) {
        (**(code **)(*local_20[0] + 0x20))(local_20[0],param_2,*(int *)(param_1 + 0x44) + -1);
      }
    }
  }
  FUN_0041b800(local_20);
  return param_2;
}

