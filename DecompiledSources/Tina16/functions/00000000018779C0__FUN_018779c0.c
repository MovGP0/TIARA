/* Ghidra address: 018779c0 */
/* Ghidra symbol: FUN_018779c0 */


void FUN_018779c0(longlong *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if (param_2 <= iVar1 + -2) {
    iVar2 = ((iVar1 + -2) - param_2) + 1;
    iVar1 = param_2;
    do {
      *(undefined8 *)(param_1[5] + (longlong)iVar1 * 8) =
           *(undefined8 *)(param_1[5] + (longlong)(iVar1 + 1) * 8);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_01876fb0(param_1,param_2);
  return;
}

