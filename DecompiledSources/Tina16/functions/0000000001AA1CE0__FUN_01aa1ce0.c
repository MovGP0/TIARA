/* Ghidra address: 01aa1ce0 */
/* Ghidra symbol: FUN_01aa1ce0 */


void FUN_01aa1ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong *plVar4;
  ulonglong uVar5;
  undefined8 local_res8;
  undefined8 local_res10;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 local_20;
  
  local_res8 = param_1;
  local_res10 = param_2;
  FUN_00414610(param_1);
  plVar4 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  FUN_0060a8f0(plVar4,PTR_IMAGE_DOS_HEADER_0200c280,L"bmDIP");
  iVar1 = (**(code **)(*plVar4 + 0x60))(plVar4);
  uVar2 = (**(code **)(*plVar4 + 0x48))(plVar4);
  uVar5 = (ulonglong)uVar2;
  local_20 = FUN_007d5160(&PTR_FUN_006441f8,CONCAT71((int7)((ulonglong)param_4 >> 8),1) & 0xffffffff
                          ,(longlong)iVar1 / 6 & 0xffffffff,uVar5);
  FUN_007d5ad0(local_20,plVar4,0x1fffffff);
  FUN_00410f20(plVar4);
  plVar4 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  FUN_0060a8f0(plVar4,PTR_IMAGE_DOS_HEADER_0200c280,L"bmSMD");
  iVar1 = (**(code **)(*plVar4 + 0x60))(plVar4);
  uVar3 = (**(code **)(*plVar4 + 0x48))(plVar4);
  local_28 = FUN_007d5160(&PTR_FUN_006441f8,CONCAT71((int7)(uVar5 >> 8),1) & 0xffffffff,
                          (longlong)iVar1 / 6 & 0xffffffff,uVar3);
  FUN_007d5ad0(local_28,plVar4,0x1fffffff);
  FUN_00410f20(plVar4);
  FUN_01aa1960(auStack_48,local_res8);
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  FUN_00414480(&local_res8);
  return;
}

