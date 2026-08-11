/* Ghidra address: 0133bc70 */
/* Ghidra symbol: FUN_0133bc70 */


void FUN_0133bc70(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x700) != *(longlong *)(param_1 + 0x6f0)) {
    *(undefined1 *)(param_1 + 0x712) = 1;
    FUN_01c87d20(*(undefined8 *)PTR_DAT_02004e40);
    FUN_01c80a70(*(undefined8 *)PTR_DAT_02004e40);
    FUN_0133b9b0(param_1);
    *(undefined8 *)(param_1 + 0x700) = *(undefined8 *)(param_1 + 0x6f0);
  }
  return;
}

