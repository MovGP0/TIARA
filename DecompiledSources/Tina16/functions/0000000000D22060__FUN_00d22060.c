/* Ghidra address: 00d22060 */
/* Ghidra symbol: FUN_00d22060 */


void FUN_00d22060(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  FUN_00410f20(*(undefined8 *)(param_2 + 0x88));
  if (*(longlong *)(param_2 + 0x88) != *(longlong *)(param_2 + 0x80)) {
    uVar1 = FUN_004b6da0(*(undefined8 *)(param_2 + 0x80));
    FUN_004b6e40(*(undefined8 *)(param_2 + 0x80),uVar1);
    FUN_00410f20(*(undefined8 *)(param_2 + 0x80));
  }
  return;
}

