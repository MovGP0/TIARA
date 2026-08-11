/* Ghidra address: 00660220 */
/* Ghidra symbol: FUN_00660220 */


ulonglong FUN_00660220(longlong param_1)

{
  int iVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  
  if ((*(longlong *)(param_1 + 0xa0) == 0) || (*(char *)(param_1 + 0xea) == '\0')) {
    uVar2 = 0;
  }
  else {
    FUN_00660160(param_1);
    iVar1 = thunk_FUN_0418a208();
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),iVar1 != 0);
    *(undefined1 *)(param_1 + 0xea) = 0;
    FUN_0065ffa0(param_1,0xffffffff);
    FUN_008088b0(*(undefined8 *)PTR_DAT_02005950,*(undefined2 *)(param_1 + 0x104));
  }
  return uVar2 & 0xffffffff;
}

