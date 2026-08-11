/* Ghidra address: 00c03220 */
/* Ghidra symbol: FUN_00c03220 */


void FUN_00c03220(longlong *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined1 local_28 [24];
  
  if ((int)param_1[0xa4] != param_2) {
    *(int *)(param_1 + 0xa4) = param_2;
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      iVar2 = (int)param_1[0xa6] +
              *(int *)((longlong)param_1 + 0x51c) * *(int *)((longlong)param_1 + 0x4d4);
      FUN_00498350(local_28,iVar2 + -1,0,iVar2 + 1,*(undefined4 *)((longlong)param_1 + 0x9c));
      (**(code **)(*param_1 + 0x268))(param_1,local_28,0);
    }
  }
  return;
}

