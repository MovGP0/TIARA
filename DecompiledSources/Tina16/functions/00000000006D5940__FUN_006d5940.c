/* Ghidra address: 006d5940 */
/* Ghidra symbol: FUN_006d5940 */


void FUN_006d5940(longlong *param_1)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 local_90;
  undefined8 local_88;
  undefined1 local_80;
  int local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined4 local_50 [7];
  undefined4 local_34;
  
  local_60[0] = 0;
  local_68 = 0;
  local_90 = 0;
  local_50[0] = 2;
  iVar1 = (**(code **)(*(longlong *)param_1[0x99] + 0x28))();
  iVar4 = 0;
  if (-1 < iVar1 + -1) {
    do {
      local_34 = (**(code **)(*param_1 + 0x270))(param_1,iVar4);
      uVar2 = FUN_0065b870(param_1);
      lVar3 = FUN_004701a0(uVar2,0x133d,(longlong)iVar4,local_50);
      if (lVar3 == 0) {
        FUN_0041ddd0(&local_68,PTR_PTR_02004b60);
        (**(code **)(*(longlong *)param_1[0x99] + 0x18))((longlong *)param_1[0x99],&local_90,iVar4);
        local_88 = local_90;
        local_80 = 0x11;
        local_70 = 0;
        local_78 = iVar4;
        FUN_00442f70(local_60,local_68,&local_88,1);
        FUN_006d42b0(local_60[0]);
      }
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_006d5880(param_1);
  FUN_00414480(&local_90);
  FUN_00414560(&local_68,2);
  return;
}

