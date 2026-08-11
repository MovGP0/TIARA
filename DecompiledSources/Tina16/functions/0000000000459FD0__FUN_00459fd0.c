/* Ghidra address: 00459fd0 */
/* Ghidra symbol: FUN_00459fd0 */


void FUN_00459fd0(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = *(ulonglong *)(param_2 + -8);
  }
  FUN_0045a100(param_1,param_2,0,uVar1 & 0xffffffff);
  return;
}

