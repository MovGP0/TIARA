/* Ghidra address: 00bad980 */
/* Ghidra symbol: FUN_00bad980 */


void FUN_00bad980(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  
  FUN_00416ba0(param_1 + 0x30,param_2);
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = *(undefined4 *)(param_2 + -4);
  }
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  return;
}

