/* Ghidra address: 005fc650 */
/* Ghidra symbol: FUN_005fc650 */


void FUN_005fc650(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_005fb9a0(DAT_02012020,*(undefined8 *)(param_1 + 0x18));
  FUN_004b1010(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

