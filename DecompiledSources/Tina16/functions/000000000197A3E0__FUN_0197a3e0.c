/* Ghidra address: 0197a3e0 */
/* Ghidra symbol: FUN_0197a3e0 */


longlong FUN_0197a3e0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = 0;
  iVar1 = FUN_0197d260();
  iVar3 = 0;
  if (-1 < iVar1 + -1) {
    do {
      lVar2 = FUN_0197d550(param_2,iVar3);
      if (*(longlong *)(lVar2 + 0x40) == 0) {
        lVar2 = FUN_0197a3e0(param_1,lVar2);
      }
      else {
        *(undefined1 *)(param_1 + 0x2f) = 1;
      }
      if (*(char *)(param_1 + 0x2f) != '\0') {
        return lVar2;
      }
      iVar3 = iVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return lVar2;
}

