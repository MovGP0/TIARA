/* Ghidra address: 00648930 */
/* Ghidra symbol: FUN_00648930 */


longlong FUN_00648930(void)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = thunk_FUN_041d93e9();
  lVar2 = FUN_006485b0(uVar1);
  if (((lVar2 != 0) && (DAT_01df5bf8 != 0)) && (*(longlong *)(DAT_01df5bf8 + 0x78) == lVar2)) {
    lVar2 = DAT_01df5bf8;
  }
  return lVar2;
}

