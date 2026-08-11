/* Ghidra address: 0165dfb0 */
/* Ghidra symbol: FUN_0165dfb0 */


void FUN_0165dfb0(longlong param_1,undefined1 param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  
  plVar1 = *(longlong **)(param_1 + 0x13ae0);
  if (*plVar1 == 0) {
    bVar2 = true;
  }
  else {
    lVar3 = 0;
    if (*plVar1 != 0) {
      lVar3 = *(longlong *)(*plVar1 + -8);
    }
    bVar2 = lVar3 <= (int)plVar1[1];
  }
  if (bVar2) {
    FUN_00419260(plVar1,&DAT_0165ae18,1,(longlong)((int)plVar1[1] * 2 + 1000));
  }
  *(undefined1 *)(*plVar1 + (longlong)(int)plVar1[1]) = param_2;
  *(int *)(plVar1 + 1) = (int)plVar1[1] + 1;
  return;
}

