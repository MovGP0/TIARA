/* Ghidra address: 00706e30 */
/* Ghidra symbol: FUN_00706e30 */


bool FUN_00706e30(longlong param_1,int param_2,longlong param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  undefined8 local_50 [2];
  longlong local_40 [2];
  
  local_50[0] = 0;
  local_40[0] = 0;
  iVar4 = 0;
  iVar1 = FUN_00706df0(param_1);
  while ((iVar4 < param_2 && (*(int *)(param_1 + 0x20) < iVar1))) {
    FUN_00706e00(param_1,local_50,*(undefined4 *)(param_1 + 0x20));
    FUN_004168e0(local_40,local_50[0]);
    uVar2 = 0;
    if (local_40[0] != 0) {
      uVar2 = *(uint *)(local_40[0] + -4) >> 1;
    }
    iVar5 = uVar2 * 2 + 2;
    uVar3 = thunk_FUN_04183578(iVar5);
    *(undefined8 *)(param_3 + (longlong)iVar4 * 8) = uVar3;
    FUN_0040d200(uVar3,(longlong)iVar5,0);
    FUN_00409a70(local_40[0],*(undefined8 *)(param_3 + (longlong)iVar4 * 8),
                 (longlong)(int)(uVar2 * 2));
    iVar4 = iVar4 + 1;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = iVar4;
  }
  FUN_00414480(local_50);
  FUN_00414520(local_40);
  return iVar4 != param_2;
}

