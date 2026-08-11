/* Ghidra address: 00ad4960 */
/* Ghidra symbol: FUN_00ad4960 */


undefined8 FUN_00ad4960(longlong param_1)

{
  short sVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  
  while( true ) {
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x38);
    iVar3 = 0;
    if (lVar2 != 0) {
      iVar3 = *(int *)(lVar2 + -4);
    }
    if ((((99 < iVar3) ||
         (sVar1 = *(short *)(*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x70) + 0x20), sVar1 == 0
         )) || (sVar1 == 0xd)) || ((sVar1 == 0x26 || (sVar1 == 0x3c)))) break;
    iVar3 = 0;
    if (lVar2 != 0) {
      iVar3 = *(int *)(lVar2 + -4);
    }
    FUN_004169f0(*(longlong *)(param_1 + 0x60) + 0x38,iVar3 + 1);
    lVar4 = FUN_00414de0(*(longlong *)(param_1 + 0x60) + 0x38);
    iVar3 = 0;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x38);
    if (lVar2 != 0) {
      iVar3 = *(int *)(lVar2 + -4);
    }
    *(short *)(lVar4 + -2 + (longlong)iVar3 * 2) = sVar1;
    FUN_00ad1170();
  }
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x60) + 0x38);
  iVar3 = 0;
  if (lVar2 != 0) {
    iVar3 = *(int *)(lVar2 + -4);
  }
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),0 < iVar3);
}

