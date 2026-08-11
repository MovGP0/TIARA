/* Ghidra address: 00c8b4d0 */
/* Ghidra symbol: FUN_00c8b4d0 */


void FUN_00c8b4d0(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  ulonglong uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = *(ulonglong *)(param_2 + -8);
  }
  FUN_00c8c100(param_1,param_2,uVar1 & 0xffffffff,0,param_3);
  return;
}

