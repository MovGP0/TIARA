/* Ghidra address: 008f8ef0 */
/* Ghidra symbol: FUN_008f8ef0 */


int FUN_008f8ef0(longlong *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x38))(param_1);
  iVar1 = iVar1 + -1;
  if (-1 < iVar1) {
    do {
      iVar2 = FUN_008f7250(*(undefined8 *)(param_1[3] + (longlong)iVar1 * 0x10),param_2);
      if (iVar2 == 0) {
        return iVar1;
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != -1);
  }
  return -1;
}

