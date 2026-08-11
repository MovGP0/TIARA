/* Ghidra address: 01b20f60 */
/* Ghidra symbol: FUN_01b20f60 */


void FUN_01b20f60(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  int local_1c;
  
  local_1c = 0;
  if (param_2 != 0) {
    local_1c = *(int *)(param_2 + -4);
  }
  FUN_004b89e0(param_1,&local_1c,4);
  if (0 < local_1c) {
    uVar1 = FUN_00415ab0(param_2);
    FUN_004b89e0(param_1,uVar1,(longlong)local_1c);
  }
  return;
}

