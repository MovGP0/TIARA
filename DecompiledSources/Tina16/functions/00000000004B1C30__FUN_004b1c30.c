/* Ghidra address: 004b1c30 */
/* Ghidra symbol: FUN_004b1c30 */


void FUN_004b1c30(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  *(undefined4 *)(param_1 + 0x18) = 1;
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_004b1e70(param_1);
  }
  FUN_004b14f0(param_1,param_1,1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x10));
  FUN_004b1010(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

