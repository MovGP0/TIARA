/* Ghidra address: 00b3f2c0 */
/* Ghidra symbol: FUN_00b3f2c0 */


void FUN_00b3f2c0(undefined4 *param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  iVar2 = 4;
  do {
    *(undefined1 *)(param_2 + (ulonglong)uVar1) = *(undefined1 *)param_1;
    *(char *)(param_2 + (ulonglong)(uVar1 + 1)) = (char)((uint)*param_1 >> 8);
    *(char *)(param_2 + (ulonglong)(uVar1 + 2)) = (char)((uint)*param_1 >> 0x10);
    *(char *)(param_2 + (ulonglong)(uVar1 + 3)) = (char)((uint)*param_1 >> 0x18);
    uVar1 = uVar1 + 4;
    param_1 = param_1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

