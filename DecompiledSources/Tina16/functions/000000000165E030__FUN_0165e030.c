/* Ghidra address: 0165e030 */
/* Ghidra symbol: FUN_0165e030 */


void FUN_0165e030(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  undefined8 local_res10 [3];
  
  plVar1 = *(longlong **)(param_1 + 0x13ae0);
  if (*plVar1 == 0) {
    bVar2 = true;
  }
  else {
    lVar3 = 0;
    if (*plVar1 != 0) {
      lVar3 = *(longlong *)(*plVar1 + -8);
    }
    bVar2 = lVar3 < (int)plVar1[1] + 8;
  }
  local_res10[0] = param_2;
  if (bVar2) {
    FUN_00419260(plVar1,&DAT_0165ae18,1,(longlong)((int)plVar1[1] * 2 + 1000));
  }
  FUN_00409a70(local_res10,*plVar1 + (longlong)(int)plVar1[1],8);
  *(int *)(plVar1 + 1) = (int)plVar1[1] + 8;
  return;
}

