/* Ghidra address: 01610c90 */
/* Ghidra symbol: FUN_01610c90 */


void FUN_01610c90(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0x10;
  do {
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined8 *)(param_1 + 2) = 0;
    param_1 = param_1 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

