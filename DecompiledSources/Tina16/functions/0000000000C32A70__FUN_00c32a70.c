/* Ghidra address: 00c32a70 */
/* Ghidra symbol: FUN_00c32a70 */


void FUN_00c32a70(longlong param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x50) != '\0') {
    FUN_00c32ac0(param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x88);
    *(undefined8 *)(param_1 + 0x88) = 0;
    FUN_00410f20(uVar1);
    FUN_00c31ce0(param_1);
  }
  return;
}

