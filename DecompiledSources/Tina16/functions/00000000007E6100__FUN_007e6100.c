/* Ghidra address: 007e6100 */
/* Ghidra symbol: FUN_007e6100 */


undefined1 FUN_007e6100(void)

{
  short sVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined1 auStack_38 [40];
  
  sVar1 = thunk_FUN_040bd713(0xa5);
  uVar3 = 0;
  if ((sVar1 < 0) && (lVar2 = thunk_FUN_03fe657d(0), uVar3 = DAT_01e13908, lVar2 != DAT_01e13900)) {
    FUN_007e5e60(auStack_38);
    DAT_01e13900 = lVar2;
    uVar3 = DAT_01e13908;
  }
  return uVar3;
}

