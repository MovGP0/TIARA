/* Ghidra address: 005fe260 */
/* Ghidra symbol: FUN_005fe260 */


void FUN_005fe260(longlong param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_004afd50(DAT_02012038,param_1,1);
  FUN_005ffb10(param_1,0);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x70));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x78));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x80));
  FUN_004278e0(param_1 + 0x30);
  FUN_004b1010(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

