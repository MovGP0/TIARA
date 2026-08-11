/* Ghidra address: 0082afe0 */
/* Ghidra symbol: FUN_0082afe0 */


void FUN_0082afe0(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00688bf0(param_1,param_2 & 0xfffffffc);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x520));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x518));
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

