/* Ghidra address: 0060a750 */
/* Ghidra symbol: FUN_0060a750 */


void FUN_0060a750(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = *(longlong *)(param_1 + 0x60);
  if (*(char *)(param_1 + 0x50) != '\0') {
    return;
  }
  if (*(longlong *)(lVar1 + 0x20) != 0) {
    return;
  }
  if (*(longlong *)(lVar1 + 0x28) == 0) {
    return;
  }
  if (*(longlong *)(lVar1 + 0x10) == *(longlong *)(lVar1 + 0x28)) {
    FUN_00607750(*(longlong *)(lVar1 + 0x28));
  }
  uVar5 = FUN_00600b60(*(undefined8 *)(lVar1 + 0x28),0,1 << (*(byte *)(lVar1 + 0x6e) & 0x1f));
  *(undefined8 *)(lVar1 + 0x20) = uVar5;
  if (*(longlong *)(lVar1 + 0x20) != 0) {
    return;
  }
  uVar5 = thunk_FUN_040ef593(0);
  uVar5 = FUN_005fffe0(uVar5);
  if (*(char *)(lVar1 + 0x38) == '\0') {
    iVar3 = thunk_FUN_03e5bd07(uVar5,0xc);
    iVar4 = thunk_FUN_03e5bd07(uVar5,0xe);
    if ((int)((uint)*(ushort *)(lVar1 + 0x52) * (uint)*(ushort *)(lVar1 + 0x50)) <= iVar3 * iVar4) {
      cVar2 = '\0';
      goto LAB_0060a808;
    }
  }
  cVar2 = '\x01';
LAB_0060a808:
  *(char *)(lVar1 + 0x38) = cVar2;
  if (cVar2 != '\0') {
    uVar6 = thunk_FUN_041d714e(uVar5);
    *(undefined8 *)(lVar1 + 0x20) = uVar6;
  }
  thunk_FUN_041a9b5c(0,uVar5);
  if (*(longlong *)(lVar1 + 0x20) == 0) {
    *(undefined1 *)(param_1 + 0x50) = 1;
  }
  return;
}

