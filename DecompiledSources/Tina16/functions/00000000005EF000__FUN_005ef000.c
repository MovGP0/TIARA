/* Ghidra address: 005ef000 */
/* Ghidra symbol: FUN_005ef000 */


void FUN_005ef000(undefined8 *param_1)

{
  undefined **ppuVar1;
  int iVar2;
  
  iVar2 = 0x15;
  ppuVar1 = &PTR_u_crDefault_01debcd0;
  do {
    (*(code *)*param_1)(param_1[1],*ppuVar1);
    ppuVar1 = ppuVar1 + 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

