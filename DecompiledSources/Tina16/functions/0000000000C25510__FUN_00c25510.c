/* Ghidra address: 00c25510 */
/* Ghidra symbol: FUN_00c25510 */


void FUN_00c25510(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x30) != 0) {
    FUN_004095f0(*(longlong *)(param_1 + 0x30));
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

