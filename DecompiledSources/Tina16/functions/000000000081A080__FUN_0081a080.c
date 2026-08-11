/* Ghidra address: 0081a080 */
/* Ghidra symbol: FUN_0081a080 */


void FUN_0081a080(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined1 auStack_28 [32];
  
  cVar2 = '\0';
  lVar1 = *(longlong *)(*(longlong *)(DAT_02012668 + 0xa8) + 0x500);
  if (lVar1 != 0) {
    cVar2 = FUN_00819ff0(auStack_28,lVar1);
  }
  if ((cVar2 == '\0') &&
     (*(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) + 0x500) != 0)) {
    FUN_00819ff0(auStack_28,
                 *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x10) + 0x500));
  }
  return;
}

