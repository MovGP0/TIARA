/* Ghidra address: 015dc890 */
/* Ghidra symbol: FUN_015dc890 */


void FUN_015dc890(longlong param_1,byte param_2)

{
  FUN_00411a80(param_1,param_2);
  FUN_015dcd20(param_1);
  FUN_00410f20(*(undefined8 *)(param_1 + 0x98));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xc0));
  FUN_00410f20(*(undefined8 *)(param_1 + 200));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xd0));
  FUN_00410f20(*(undefined8 *)(param_1 + 0xd8));
  FUN_00410f20(*(undefined8 *)(param_1 + 0x108));
  FUN_004d23a0(param_1,param_2 & 0xfc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

