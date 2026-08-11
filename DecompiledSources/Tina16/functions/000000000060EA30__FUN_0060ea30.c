/* Ghidra address: 0060ea30 */
/* Ghidra symbol: FUN_0060ea30 */


ulonglong FUN_0060ea30(void)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 unaff_RBX;
  ulonglong uVar4;
  undefined1 local_54 [56];
  byte local_1c;
  
  uVar4 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  lVar2 = thunk_FUN_040ef593(0);
  if (lVar2 != 0) {
    lVar3 = thunk_FUN_041a19a1(lVar2,PTR_DAT_02011fc0);
    if (lVar3 != 0) {
      iVar1 = thunk_FUN_04172119(lVar2,local_54);
      if (iVar1 != 0) {
        uVar4 = (ulonglong)local_1c;
      }
    }
    thunk_FUN_041a9b5c(0,lVar2);
  }
  return uVar4 & 0xffffffff;
}

