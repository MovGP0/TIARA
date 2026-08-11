/* Ghidra address: 01645060 */
/* Ghidra symbol: FUN_01645060 */


ulonglong FUN_01645060(longlong param_1)

{
  char cVar1;
  undefined8 unaff_RBX;
  ulonglong uVar2;
  
  uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (*(longlong *)(param_1 + 0x88) != 0) {
    cVar1 = FUN_01645040(*(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x90));
    if (cVar1 != '\0') {
      uVar2 = 0;
    }
  }
  return uVar2 & 0xffffffff;
}

