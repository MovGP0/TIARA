/* Ghidra address: 009f44a0 */
/* Ghidra symbol: FUN_009f44a0 */


ulonglong FUN_009f44a0(undefined4 param_1)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  lVar2 = FUN_009f4460();
  uVar3 = 0xffffffff;
  if (lVar2 != 0) {
    iVar1 = FUN_009fa080(lVar2,param_1);
    uVar3 = 0xffffffff;
    if (-1 < iVar1) {
      lVar2 = FUN_009fa100(lVar2,iVar1);
      uVar3 = (ulonglong)*(ushort *)(lVar2 + 0x14);
    }
  }
  if ((short)uVar3 == -1) {
    uVar3 = CONCAT62((int6)(uVar3 >> 0x10),1);
  }
  return uVar3;
}

