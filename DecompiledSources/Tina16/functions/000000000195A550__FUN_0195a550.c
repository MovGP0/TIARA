/* Ghidra address: 0195a550 */
/* Ghidra symbol: FUN_0195a550 */


void FUN_0195a550(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x1c0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x208));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x210));
  FUN_00452320(param_1 + 0x290);
  FUN_01954030(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

