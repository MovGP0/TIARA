/* Ghidra address: 017b50e0 */
/* Ghidra symbol: FUN_017b50e0 */


void FUN_017b50e0(undefined8 param_1,int param_2,longlong param_3,longlong *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  
  lVar1 = FUN_004095c0((longlong)(param_2 << 3));
  *param_4 = lVar1;
  iVar3 = 0;
  if (-1 < param_2 + -1) {
    do {
      uVar2 = FUN_017b50b0(param_1,param_3 + (longlong)iVar3 * 8);
      *(undefined8 *)(*param_4 + (longlong)iVar3 * 8) = uVar2;
      iVar3 = iVar3 + 1;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

