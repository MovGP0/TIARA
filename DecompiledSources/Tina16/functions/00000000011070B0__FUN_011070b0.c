/* Ghidra address: 011070b0 */
/* Ghidra symbol: FUN_011070b0 */


void FUN_011070b0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_01cc6030(*(longlong *)(param_1 + 0x98));
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_01cc6030(*(longlong *)(param_1 + 0xa0));
  }
  FUN_01106ca0(param_1,param_2 & 0xfffffffc);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x48));
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

