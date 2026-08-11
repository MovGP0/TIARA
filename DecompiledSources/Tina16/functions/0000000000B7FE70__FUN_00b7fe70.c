/* Ghidra address: 00b7fe70 */
/* Ghidra symbol: FUN_00b7fe70 */


void FUN_00b7fe70(longlong param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  param_2 = param_2 & 0xff;
  iVar2 = 0;
  do {
    uVar1 = iVar2 * 4;
    *(uint *)(param_1 + (ulonglong)uVar1) =
         *(uint *)(&DAT_01e926b0 + (ulonglong)*(byte *)(param_1 + (ulonglong)uVar1) * 4) ^
         *(uint *)(&DAT_01e92ab0 + (ulonglong)*(byte *)(param_1 + (ulonglong)(uVar1 + 1)) * 4) ^
         *(uint *)(&DAT_01e92eb0 + (ulonglong)*(byte *)(param_1 + (ulonglong)(uVar1 + 2)) * 4) ^
         *(uint *)(&DAT_01e932b0 + (ulonglong)*(byte *)(param_1 + (ulonglong)(uVar1 + 3)) * 4);
    iVar2 = iVar2 + 1;
    param_2 = param_2 - 1;
  } while (param_2 != 0);
  return;
}

