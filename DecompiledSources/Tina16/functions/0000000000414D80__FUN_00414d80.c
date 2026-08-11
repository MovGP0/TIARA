/* Ghidra address: 00414d80 */
/* Ghidra symbol: FUN_00414d80 */


longlong FUN_00414d80(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  lVar2 = lVar1;
  if ((lVar1 != 0) && (*(int *)(lVar1 + -8) != 1)) {
    lVar2 = FUN_004143b0(*(undefined4 *)(lVar1 + -4),*(undefined2 *)(lVar1 + -0xc));
    uVar3 = FUN_00415ab0(*param_1);
    FUN_00409a70(uVar3,lVar2,(longlong)*(int *)(lVar1 + -4));
    FUN_004144d0(param_1);
    *param_1 = lVar2;
  }
  return lVar2;
}

