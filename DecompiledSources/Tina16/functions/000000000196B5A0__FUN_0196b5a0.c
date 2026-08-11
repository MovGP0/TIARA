/* Ghidra address: 0196b5a0 */
/* Ghidra symbol: FUN_0196b5a0 */


void FUN_0196b5a0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 400));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x168));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x240));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x248));
  if (*(longlong *)(param_1 + 0x1d0) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x1d0) + 0x2a8) = 0;
  }
  FUN_01969e70(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

