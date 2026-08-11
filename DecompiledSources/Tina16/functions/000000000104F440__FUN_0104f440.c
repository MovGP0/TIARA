/* Ghidra address: 0104f440 */
/* Ghidra symbol: FUN_0104f440 */


void FUN_0104f440(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  plVar2 = (longlong *)FUN_007fc180(&PTR_FUN_01026e08,1,*(undefined8 *)PTR_DAT_02004030);
  FUN_010275e0(plVar2,*(undefined8 *)(param_1 + 0x948));
  iVar1 = (**(code **)(*plVar2 + 0x2d0))(plVar2);
  if (iVar1 == 1) {
    uVar3 = FUN_010275f0(plVar2);
    *(undefined8 *)(param_1 + 0x948) = uVar3;
    uVar3 = FUN_015f6540(*(undefined8 *)(param_1 + 0x948));
    if (*(longlong *)(param_1 + 0x9d8) != 0) {
      _MCU_SetRunUntil(*(undefined8 *)(param_1 + 0x970),uVar3,1);
      FUN_00f90ab0(*(undefined8 *)(param_1 + 0x9d8),uVar3,1);
      FUN_01052a70(param_1,param_2);
    }
  }
  FUN_00410f20(plVar2);
  return;
}

