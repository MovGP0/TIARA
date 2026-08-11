/* Ghidra address: 017dd020 */
/* Ghidra symbol: FUN_017dd020 */


void FUN_017dd020(longlong param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 1;
  if (0 < param_4) {
    do {
      lVar3 = (longlong)iVar2;
      uVar1 = FUN_017dcbd0(*(undefined8 *)(param_1 + 0x60),param_3 + -8 + lVar3 * 8,
                           *(undefined1 *)(param_1 + 0x68),*(undefined8 *)(param_2 + -8 + lVar3 * 8)
                          );
      *(undefined8 *)(param_2 + -8 + lVar3 * 8) = uVar1;
      iVar2 = iVar2 + 1;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

