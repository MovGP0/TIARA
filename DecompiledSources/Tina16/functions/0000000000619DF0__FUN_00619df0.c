/* Ghidra address: 00619df0 */
/* Ghidra symbol: FUN_00619df0 */


void FUN_00619df0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  FUN_00423fc0(param_1,param_2 & 0xfffffffc);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  FUN_00410f20(uVar1);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

