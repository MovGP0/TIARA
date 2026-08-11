/* Ghidra address: 004d8330 */
/* Ghidra symbol: FUN_004d8330 */


void FUN_004d8330(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00419500(param_2);
  iVar3 = 0;
  while( true ) {
    lVar2 = 0;
    if (local_res10[0] != 0) {
      lVar2 = *(longlong *)(local_res10[0] + -8);
    }
    if (lVar2 <= iVar3) break;
    iVar4 = 0;
    if (local_res10[0] != 0) {
      iVar4 = (int)*(undefined8 *)(local_res10[0] + -8);
    }
    iVar4 = iVar4 - iVar3;
    lVar2 = 0;
    if (param_1[5] != 0) {
      lVar2 = *(longlong *)(param_1[5] + -8);
    }
    iVar1 = *(int *)((longlong)param_1 + 0x24);
    if (lVar2 - iVar1 < (longlong)iVar4) {
      iVar4 = 0;
      if (param_1[5] != 0) {
        iVar4 = (int)*(undefined8 *)(param_1[5] + -8);
      }
      iVar4 = iVar4 - iVar1;
    }
    FUN_00409a70(local_res10[0] + iVar3,param_1[5] + (longlong)iVar1,(longlong)iVar4);
    *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + iVar4;
    iVar3 = iVar3 + iVar4;
    lVar2 = 0;
    if (param_1[5] != 0) {
      lVar2 = *(longlong *)(param_1[5] + -8);
    }
    if (lVar2 <= *(int *)((longlong)param_1 + 0x24)) {
      (**(code **)(*param_1 + 8))(param_1);
    }
  }
  if ((char)param_1[4] != '\0') {
    (**(code **)(*param_1 + 8))(param_1);
  }
  FUN_00419430(local_res10,&DAT_00406578);
  return;
}

