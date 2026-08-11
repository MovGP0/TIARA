/* Ghidra address: 01969ae0 */
/* Ghidra symbol: FUN_01969ae0 */


void FUN_01969ae0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x2a8) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x2a8) + 0x1d0) = 0;
  }
  FUN_0195a550(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

