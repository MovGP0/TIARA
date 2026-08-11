/* Ghidra address: 018553a0 */
/* Ghidra symbol: FUN_018553a0 */


void FUN_018553a0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00609e10(*(undefined8 *)(param_2 + 0x88));
  FUN_005fe090(uVar1);
  FUN_00410f20(*(undefined8 *)(param_2 + 0x88));
  if (*(char *)(param_2 + 0x87) != '\0') {
    FUN_00410f20(*(undefined8 *)(param_2 + 0x78));
    FUN_00410f20(*(undefined8 *)(param_2 + 0x70));
  }
  return;
}

