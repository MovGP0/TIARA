/* Ghidra address: 01c77c10 */
/* Ghidra symbol: FUN_01c77c10 */


void FUN_01c77c10(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar2 = thunk_FUN_041da4fa();
  lVar3 = FUN_0065b870(*(undefined8 *)(param_1 + 0xa10));
  if (lVar2 != lVar3) {
    lVar2 = thunk_FUN_041da4fa();
    lVar3 = FUN_0065b870(*(undefined8 *)(param_1 + 0x4c0));
    if (lVar2 != lVar3) {
      uVar4 = thunk_FUN_041da4fa();
      thunk_FUN_0413e052(uVar4,0x302,0,0);
      return;
    }
  }
  if ((*(longlong *)(param_1 + 0x2768) == 0) ||
     (((cVar1 = *(char *)(*(longlong *)(param_1 + 0x2768) + 0x70), cVar1 != '\x03' &&
       (cVar1 != '\x04')) || (*(longlong *)PTR_DAT_02005100 == 0)))) {
    cVar1 = FUN_01c8cee0(param_1);
    if (cVar1 == '\0') {
      FUN_01b9bcb0();
    }
  }
  else {
    FUN_00bf9d90(*(undefined8 *)(*(longlong *)PTR_DAT_02005100 + 0x740));
  }
  return;
}

