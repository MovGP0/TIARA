/* Ghidra address: 00ab9aa0 */
/* Ghidra symbol: FUN_00ab9aa0 */


undefined8 FUN_00ab9aa0(undefined8 param_1,undefined8 param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  
  FUN_004169f0(param_2,param_4 + 1);
  iVar2 = 1;
  iVar3 = param_4;
  if (0 < param_4) {
    do {
      lVar1 = FUN_00414de0(param_2);
      *(undefined2 *)(lVar1 + -2 + (longlong)iVar2 * 2) =
           *(undefined2 *)(param_3 + (longlong)(iVar2 + -1) * 2);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  lVar1 = FUN_00414de0(param_2);
  *(undefined2 *)(lVar1 + -2 + (longlong)(param_4 + 1) * 2) = 0x2d;
  return param_2;
}

