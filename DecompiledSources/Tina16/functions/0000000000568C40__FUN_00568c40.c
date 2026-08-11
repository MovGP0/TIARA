/* Ghidra address: 00568c40 */
/* Ghidra symbol: FUN_00568c40 */


void FUN_00568c40(longlong param_1,undefined8 *param_2)

{
  *(undefined8 *)(param_1 + 0x40) = *param_2;
  *(undefined8 *)(param_1 + 0x48) = param_2[1];
  FUN_00568bf0();
  return;
}

