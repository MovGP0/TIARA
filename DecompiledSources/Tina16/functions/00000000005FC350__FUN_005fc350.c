/* Ghidra address: 005fc350 */
/* Ghidra symbol: FUN_005fc350 */


void FUN_005fc350(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  int iVar4;
  
  pcVar1 = (code *)*param_1;
  uVar2 = param_1[1];
  iVar4 = 0x12;
  ppuVar3 = &PTR_u_ANSI_CHARSET_01decde0;
  do {
    (*pcVar1)(uVar2,*ppuVar3);
    ppuVar3 = ppuVar3 + 2;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  return;
}

