/* Ghidra address: 0136c510 */
/* Ghidra symbol: FUN_0136c510 */


void FUN_0136c510(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_0082a6c0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xaf0),0);
  FUN_0082a6c0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0xaf8),0);
  FUN_01364f70(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

