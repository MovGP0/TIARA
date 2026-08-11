/* Ghidra address: 00787940 */
/* Ghidra symbol: FUN_00787940 */


void FUN_00787940(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
    FUN_00410f20(uVar1);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_00410f20(*(longlong *)(param_1 + 8));
  }
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

