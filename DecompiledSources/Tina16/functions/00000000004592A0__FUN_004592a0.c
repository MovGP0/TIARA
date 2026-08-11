/* Ghidra address: 004592a0 */
/* Ghidra symbol: FUN_004592a0 */


void FUN_004592a0(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = *(ulonglong *)(param_2 + -8);
  }
  FUN_004593b0(param_1,param_2,0,uVar1 & 0xffffffff);
  return;
}

