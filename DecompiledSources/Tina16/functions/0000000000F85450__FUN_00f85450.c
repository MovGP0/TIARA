/* Ghidra address: 00f85450 */
/* Ghidra symbol: FUN_00f85450 */


void FUN_00f85450(undefined8 param_1,longlong param_2,int param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int local_3c;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  lVar1 = FUN_019a4600();
  iVar4 = *(int *)(*(longlong *)(lVar1 + 0x3d0) + 0x10);
  iVar3 = 0;
  local_3c = param_3;
  if (-1 < iVar4 + -1) {
    do {
      lVar1 = FUN_019a4600();
      uVar2 = FUN_004aeac0(*(undefined8 *)(lVar1 + 0x3d0),iVar3);
      if (local_3c == 1) {
        _continue_simulation(param_1,param_4);
        local_3c = 2;
      }
      FUN_015fd630(local_30,param_1,*(undefined8 *)(param_2 + 0x8d0),uVar2);
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_00414480(local_30);
  return;
}

