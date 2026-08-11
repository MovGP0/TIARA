/* Ghidra address: 00850690 */
/* Ghidra symbol: FUN_00850690 */


void FUN_00850690(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 local_20;
  
  thunk_FUN_03cc0d62(&local_20);
  local_20 = FUN_0064d3a0(param_1,&local_20);
  if ((*(char *)(param_1 + 0x530) != '\0') &&
     (cVar2 = FUN_00850600(param_1,&local_20), cVar2 != '\0')) {
    uVar1 = thunk_FUN_03978312(0,0x7f00);
    thunk_FUN_04176eb1(uVar1);
    return;
  }
  FUN_006587d0(param_1,param_2);
  return;
}

