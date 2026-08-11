/* Ghidra address: 00534680 */
/* Ghidra symbol: FUN_00534680 */


undefined8 FUN_00534680(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    lVar2 = thunk_FUN_041a71d2(0,0,0);
    if (lVar2 == 0) {
      FUN_00451a00();
    }
    LOCK();
    lVar3 = *(longlong *)(param_1 + 8);
    if (lVar3 == 0) {
      *(longlong *)(param_1 + 8) = lVar2;
      lVar3 = 0;
    }
    UNLOCK();
    if ((lVar3 != 0) && (iVar1 = thunk_FUN_04157e37(lVar2), iVar1 == 0)) {
      FUN_00451a00();
    }
  }
  return *(undefined8 *)(param_1 + 8);
}

