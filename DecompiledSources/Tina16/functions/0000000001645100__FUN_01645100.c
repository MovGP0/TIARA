/* Ghidra address: 01645100 */
/* Ghidra symbol: FUN_01645100 */


undefined8 FUN_01645100(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(longlong *)(param_1 + 0x88) != 0) {
    cVar1 = FUN_01645040(*(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x90));
    if (cVar1 != '\0') {
      param_1 = *(longlong *)(param_1 + 0x88);
    }
  }
  if (*(longlong *)(param_1 + 0x88) != 0) {
    cVar1 = FUN_01645040(*(undefined1 *)(*(longlong *)(param_1 + 0x88) + 0x90));
    if (cVar1 != '\0') {
      param_1 = *(longlong *)(param_1 + 0x88);
    }
  }
  uVar2 = FUN_01645090(param_1,199);
  return uVar2;
}

