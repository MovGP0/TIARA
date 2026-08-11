/* Ghidra address: 0123b880 */
/* Ghidra symbol: FUN_0123b880 */


void FUN_0123b880(longlong param_1,undefined4 param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_004095f0(*(undefined8 *)(param_1 + 0x600));
  FUN_004095f0(*(undefined8 *)(param_1 + 0x18));
  FUN_004095f0(*(undefined8 *)(param_1 + 0x20));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x58));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x60));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x5f0));
  FUN_00419430(param_1 + 0x5d0,&DAT_0123a208);
  FUN_00419430(param_1 + 0x5d8,&DAT_0123a208);
  FUN_00419430(param_1 + 0x5e0,&DAT_0123a208);
  FUN_00419430(param_1 + 0x5e8,&DAT_0123a208);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

