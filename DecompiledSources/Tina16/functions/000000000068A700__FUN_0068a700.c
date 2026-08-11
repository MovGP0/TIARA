/* Ghidra address: 0068a700 */
/* Ghidra symbol: FUN_0068a700 */


undefined8 * FUN_0068a700(longlong param_1,undefined8 *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined8 local_20;
  
  local_20 = 0;
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (*(byte *)(lVar1 + 0x4cc) < 8) {
    bVar6 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (*(byte *)(lVar1 + 0x4cc) & 0x1f) &
            0x18U) != 0;
  }
  else {
    bVar6 = false;
  }
  if (bVar6) {
    FUN_0068e190(lVar1,param_2,param_3);
  }
  else {
    uVar4 = FUN_0065b870(lVar1);
    iVar2 = thunk_FUN_041b2403(uVar4,0x18a,(longlong)param_3,0);
    if (iVar2 == -1) {
      FUN_0041ddd0(&local_20,PTR_PTR_02004940);
      FUN_004b34c0(param_1,local_20,param_3);
    }
    FUN_004169f0(param_2,iVar2);
    if (iVar2 != 0) {
      uVar4 = FUN_0065b870(*(undefined8 *)(param_1 + 0x38));
      uVar5 = FUN_00416740(*param_2);
      uVar3 = thunk_FUN_041b2403(uVar4,0x189,(longlong)param_3,uVar5);
      FUN_004169f0(param_2,uVar3);
    }
  }
  FUN_00414480(&local_20);
  return param_2;
}

