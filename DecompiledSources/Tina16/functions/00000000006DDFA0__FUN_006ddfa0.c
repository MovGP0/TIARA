/* Ghidra address: 006ddfa0 */
/* Ghidra symbol: FUN_006ddfa0 */


bool FUN_006ddfa0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  
  lVar1 = FUN_006dc7a0(param_1);
  if ((lVar1 == 0) || (*(longlong *)(param_1 + 0x20) == 0)) {
    bVar3 = false;
  }
  else {
    uVar2 = FUN_006dc7a0(param_1);
    lVar1 = thunk_FUN_041b2403(uVar2,0x1141,0,*(undefined8 *)(param_1 + 0x20));
    bVar3 = lVar1 != 0;
  }
  return bVar3;
}

