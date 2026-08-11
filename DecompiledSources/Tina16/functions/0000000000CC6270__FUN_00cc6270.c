/* Ghidra address: 00cc6270 */
/* Ghidra symbol: FUN_00cc6270 */


undefined8 * FUN_00cc6270(longlong param_1,undefined8 *param_2)

{
  FUN_00416ba0(param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 8));
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_00416cd0(param_2,3,*param_2,&DAT_00cc62cc,*(undefined8 *)(param_1 + 0x50));
  }
  return param_2;
}

