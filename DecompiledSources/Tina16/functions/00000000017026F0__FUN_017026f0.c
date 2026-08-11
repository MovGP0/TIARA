/* Ghidra address: 017026f0 */
/* Ghidra symbol: FUN_017026f0 */


void FUN_017026f0(longlong param_1,undefined8 param_2,short *param_3)

{
  short sVar1;
  int iVar2;
  longlong lVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  sVar1 = *param_3;
  if ((sVar1 == 8) || (sVar1 == 0x1b)) {
    FUN_00414480(param_1 + 0x750);
  }
  else if ((ushort)(sVar1 - 0x20U) < 0xe0) {
    iVar2 = FUN_00427dd0();
    if (2000 < iVar2 - *(int *)(param_1 + 0x75c)) {
      FUN_00414480();
    }
    *(int *)(param_1 + 0x75c) = iVar2;
    iVar2 = 0;
    if (*(longlong *)(param_1 + 0x750) != 0) {
      iVar2 = *(int *)(*(longlong *)(param_1 + 0x750) + -4);
    }
    if (iVar2 < 0x32) {
      FUN_00416780(local_20,*param_3);
      FUN_00416ad0(param_1 + 0x750,local_20[0]);
    }
    lVar3 = FUN_006f6cc0(*(undefined8 *)(param_1 + 0x728),0xffffffff,
                         *(undefined8 *)(param_1 + 0x750),1,0,0);
    if (lVar3 != 0) {
      FUN_006f7000(*(undefined8 *)(param_1 + 0x728),lVar3);
      FUN_006eedc0(lVar3,1);
      (**(code **)(**(longlong **)(param_1 + 0x728) + 600))(*(longlong **)(param_1 + 0x728));
    }
    *param_3 = 0;
  }
  FUN_00414480(local_20);
  return;
}

