/* Ghidra address: 013f4820 */
/* Ghidra symbol: FUN_013f4820 */


void FUN_013f4820(longlong param_1,undefined8 param_2,short *param_3)

{
  short sVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  sVar1 = *param_3;
  if ((sVar1 == 8) || (sVar1 == 0x1b)) {
    FUN_00414480(param_1 + 0x7c0);
  }
  else if ((ushort)(sVar1 - 0x20U) < 0xe0) {
    iVar2 = FUN_00427dd0();
    if (2000 < iVar2 - *(int *)(param_1 + 0x764)) {
      FUN_00414480();
    }
    *(int *)(param_1 + 0x764) = iVar2;
    iVar2 = 0;
    if (*(longlong *)(param_1 + 0x7c0) != 0) {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x7c0) + -4);
    }
    if (iVar2 < 0x32) {
      FUN_00416780(local_20,*param_3);
      FUN_00416ad0(param_1 + 0x7c0,local_20[0]);
    }
    uVar3 = FUN_0065b870(*(undefined8 *)(param_1 + 0x6d8));
    uVar4 = FUN_00416740(*(undefined8 *)(param_1 + 0x7c0));
    thunk_FUN_041b2403(uVar3,0x18c,0xffffffffffffffff,uVar4);
    *param_3 = 0;
  }
  FUN_00414480(local_20);
  return;
}

