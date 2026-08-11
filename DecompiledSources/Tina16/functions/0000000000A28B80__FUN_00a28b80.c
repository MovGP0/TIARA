/* Ghidra address: 00a28b80 */
/* Ghidra symbol: FUN_00a28b80 */


undefined8 * FUN_00a28b80(undefined8 *param_1)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_38 [40];
  
  FUN_00414ad0(param_1);
  iVar1 = FUN_004170c0(&DAT_00a28c04,*param_1,1);
  FUN_00a28aa0(auStack_38,0x3a,0x7c);
  FUN_00a28aa0(auStack_38,0x5c,0x2f);
  if (0 < iVar1) {
    lVar2 = FUN_00414de0(param_1);
    *(undefined2 *)(lVar2 + -2 + (longlong)iVar1 * 2) = 0x3a;
  }
  return param_1;
}

