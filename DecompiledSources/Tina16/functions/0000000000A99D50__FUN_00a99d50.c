/* Ghidra address: 00a99d50 */
/* Ghidra symbol: FUN_00a99d50 */


void FUN_00a99d50(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)((longlong)param_1 + 0xbc) != '\0') {
    iVar1 = thunk_FUN_03f3ed25(*(undefined4 *)((longlong)param_1 + 0x10c),param_4,100);
    iVar2 = (param_4 - *(int *)((longlong)param_1 + 0xac)) - (int)param_1[0x16];
    if (iVar2 <= iVar1) {
      iVar1 = iVar2;
    }
    if (iVar1 < 10) {
      iVar1 = 10;
    }
    (**(code **)(*param_1 + 0xd8))(param_1,iVar1);
  }
  if (*(char *)((longlong)param_1 + 0xbd) != '\0') {
    iVar1 = thunk_FUN_03f3ed25(*(undefined4 *)((longlong)param_1 + 0x10c),param_5,100);
    iVar2 = (param_5 - *(int *)((longlong)param_1 + 0xb4)) - (int)param_1[0x17];
    if (iVar2 <= iVar1) {
      iVar1 = iVar2;
    }
    if (iVar1 < 10) {
      iVar1 = 10;
    }
    (**(code **)(*param_1 + 0xd0))(param_1,iVar1);
  }
  return;
}

