/* Ghidra address: 01aa0bf0 */
/* Ghidra symbol: FUN_01aa0bf0 */


void FUN_01aa0bf0(int *param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  
  *param_1 = 0;
  iVar2 = -0x20;
  pbVar1 = (byte *)(param_2 + 0x1f);
  do {
    *param_1 = *param_1 * 2 + (uint)*pbVar1;
    pbVar1 = pbVar1 + -1;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0);
  return;
}

