/* Ghidra address: 00b05bc0 */
/* Ghidra symbol: FUN_00b05bc0 */


void FUN_00b05bc0(longlong param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  sVar1 = *param_2;
  if ((sVar1 == 8) || (sVar1 == 0x1b)) {
    FUN_00414480(param_1 + 0x558);
  }
  else if ((ushort)(sVar1 - 0x20U) < 0xe0) {
    iVar2 = FUN_00427dd0();
    if (2000 < iVar2 - *(int *)(param_1 + 0x560)) {
      FUN_00414480();
    }
    *(int *)(param_1 + 0x560) = iVar2;
    iVar2 = 0;
    if (*(longlong *)(param_1 + 0x558) != 0) {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x558) + -4);
    }
    if (iVar2 < 0x20) {
      FUN_00416780(local_20,*param_2);
      FUN_00416ad0(param_1 + 0x558,local_20[0]);
    }
    uVar3 = FUN_0065b870(param_1);
    uVar4 = FUN_00416740(*(undefined8 *)(param_1 + 0x558));
    thunk_FUN_041b2403(uVar3,0x18c,0xffffffffffffffff,uVar4);
    *param_2 = 0;
  }
  FUN_0068dba0(param_1,param_2);
  FUN_00414480(local_20);
  return;
}

