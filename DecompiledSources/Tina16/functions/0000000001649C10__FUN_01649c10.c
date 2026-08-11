/* Ghidra address: 01649c10 */
/* Ghidra symbol: FUN_01649c10 */


void FUN_01649c10(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x10d0);
  iVar1 = 0;
  if (-1 < iVar2 + -1) {
    do {
      FUN_016a96a0(param_2,param_3,1,
                   *(undefined8 *)(*(longlong *)(param_1 + 0x10d8) + (longlong)iVar1 * 8),0);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

