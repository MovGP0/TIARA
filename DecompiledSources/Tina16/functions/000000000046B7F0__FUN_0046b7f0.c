/* Ghidra address: 0046b7f0 */
/* Ghidra symbol: FUN_0046b7f0 */


void FUN_0046b7f0(undefined8 param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_004634b0(param_1);
  if (((longlong)uVar1 < 0x80000000) && (-0x80000001 < (longlong)uVar1)) {
    FUN_00468530(param_1,~(uint)uVar1,0xfffffffffffffffc);
  }
  else {
    FUN_00468700(param_1,~uVar1);
  }
  return;
}

