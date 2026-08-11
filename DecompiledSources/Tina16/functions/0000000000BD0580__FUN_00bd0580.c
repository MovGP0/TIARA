/* Ghidra address: 00bd0580 */
/* Ghidra symbol: FUN_00bd0580 */


void FUN_00bd0580(longlong param_1,uint param_2,undefined8 param_3)

{
  if (*(uint *)(param_1 + 0x40) <= param_2) {
    FUN_00bceea0(param_2);
  }
  FUN_004b3260(param_1);
  *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 8 + (longlong)(int)param_2 * 0x28) = param_3;
  FUN_004b3390(param_1);
  return;
}

