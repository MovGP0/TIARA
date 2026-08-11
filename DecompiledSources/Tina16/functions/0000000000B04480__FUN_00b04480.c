/* Ghidra address: 00b04480 */
/* Ghidra symbol: FUN_00b04480 */


undefined8 FUN_00b04480(longlong param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  FUN_00414ad0(param_2,*(undefined8 *)(param_1 + 0x28));
  iVar2 = 0;
  if (*(longlong *)(param_1 + 0x30) != 0) {
    iVar2 = (int)*(undefined8 *)(*(longlong *)(param_1 + 0x30) + -8);
  }
  iVar1 = 0;
  if (-1 < iVar2 + -1) {
    do {
      if (*(int *)(*(longlong *)(param_1 + 0x30) + (longlong)iVar1 * 0x18) == param_3) {
        FUN_00414ad0(param_2,*(undefined8 *)
                              (*(longlong *)(param_1 + 0x30) + 8 + (longlong)iVar1 * 0x18));
        return param_2;
      }
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return param_2;
}

