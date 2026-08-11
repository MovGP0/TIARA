/* Ghidra address: 00c22dd0 */
/* Ghidra symbol: FUN_00c22dd0 */


void FUN_00c22dd0(undefined8 param_1,undefined1 *param_2,undefined4 param_3)

{
  param_2[2] = (char)((uint)param_3 >> 0x10);
  param_2[1] = (char)((uint)param_3 >> 8);
  *param_2 = (char)param_3;
  return;
}

