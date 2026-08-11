/* Ghidra address: 007e1f10 */
/* Ghidra symbol: FUN_007e1f10 */


undefined8 FUN_007e1f10(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  for (lVar1 = *(longlong *)(param_1 + 200); (lVar1 != 0 && (*(longlong *)(lVar1 + 0xf8) == 0));
      lVar1 = *(longlong *)(lVar1 + 200)) {
  }
  if (lVar1 == 0) {
    lVar1 = FUN_007e3880();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + 0xa0);
    }
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0xf8);
  }
  return uVar2;
}

