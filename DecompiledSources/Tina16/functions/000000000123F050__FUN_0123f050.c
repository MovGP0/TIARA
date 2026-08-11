/* Ghidra address: 0123f050 */
/* Ghidra symbol: FUN_0123f050 */


void FUN_0123f050(longlong param_1,int param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  short sVar4;
  double *pdVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined2 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70 [10];
  
  local_a8 = 0;
  local_80 = 0;
  local_70[0] = 0;
  local_78 = 0;
  lVar6 = (longlong)param_2;
  dVar1 = *(double *)(*(longlong *)(param_1 + 0x30) + 0x10 + lVar6 * 8);
  dVar2 = *(double *)(*(longlong *)(param_1 + 0x30) + 0x978 + lVar6 * 8);
  uVar8 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x12e0 + lVar6 * 8);
  dVar3 = *(double *)(*(longlong *)(param_1 + 0x30) + 0x1c48 + lVar6 * 8);
  pdVar5 = *(double **)(param_1 + 0x30);
  if ((*pdVar5 <= 0.0 && *pdVar5 != 0.0) || (pdVar5[1] <= 0.0 && pdVar5[1] != 0.0)) {
    uVar7 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Circuit synthesis error. Try another specification.")
    ;
    FUN_004134c0(uVar7);
  }
  FUN_00414b50(&local_78,&DAT_0123f55c);
  lVar6 = *(longlong *)(param_1 + 0x600);
  sVar4 = *(short *)(lVar6 + 0x1fa4);
  if (((sVar4 == 0x4c) || (sVar4 == 0x48)) || (sVar4 == 0x50)) {
    FUN_00414b50(&local_78,&DAT_0123f56c);
  }
  if (dVar3 == 0.0) {
    sVar4 = *(short *)(*(longlong *)(param_1 + 0x600) + 0x1fa4);
    if ((sVar4 == 0x50) || (sVar4 == 0x53)) {
      uVar8 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Invalid stage");
      FUN_004134c0(uVar8);
    }
    local_a0 = local_78;
    local_98 = 0x11;
    local_90 = *(undefined2 *)(*(longlong *)(param_1 + 0x600) + 0x1fa6);
    local_88 = 9;
    FUN_00442f70(&local_80,L"filter_first_o_%s%s.tsc",&local_a0,1);
    FUN_00416ba0(local_70,*(undefined8 *)(param_1 + 0x48),local_80);
    FUN_0123ef40(param_1,9,&DAT_0123f5e0,dVar1);
    FUN_0123ef40(param_1,10,&DAT_0123f5f4,dVar2);
    FUN_0123dc00(param_1,param_2,local_70[0],1,1);
  }
  else {
    if (sVar4 == 0x53) {
      FUN_00416ba0(local_70,*(undefined8 *)(param_1 + 0x48),L"filter_BS.tsc");
      FUN_0123ef40(param_1,9,L"Rp20",dVar1 / 2.0);
      FUN_0123ef40(param_1,10,&DAT_0123f648,dVar2 * 2.0);
      FUN_0123ef40(param_1,10,&DAT_0123f65c,dVar2);
      FUN_0123ef40(param_1,10,&DAT_0123f65c,dVar2);
      FUN_0123ef40(param_1,9,&DAT_0123f670,dVar1);
    }
    else {
      local_a0 = local_78;
      local_98 = 0x11;
      local_90 = *(undefined2 *)(lVar6 + 0x1fa6);
      local_88 = 9;
      FUN_00442f70(&local_a8,L"filter_sec_o_%s%s.tsc",&local_a0,1);
      FUN_00416ba0(local_70,*(undefined8 *)(param_1 + 0x48),local_a8);
    }
    FUN_0123ef40(param_1,9,&DAT_0123f5e0,dVar1);
    FUN_0123ef40(param_1,9,&DAT_0123f6bc,dVar1);
    FUN_0123ef40(param_1,9,&DAT_0123f6d0,dVar1);
    FUN_0123ef40(param_1,10,&DAT_0123f6e4,dVar2);
    FUN_0123ef40(param_1,10,&DAT_0123f5f4,dVar2);
    FUN_0123ef40(param_1,9,&DAT_0123f6f8,uVar8);
    FUN_0123ef40(param_1,9,&LAB_0123f70c,dVar3);
    FUN_0123dc00(param_1,param_2,local_70[0],1,0);
  }
  if (param_2 == 0) {
    *(undefined8 *)(param_1 + 0x9c) = *(undefined8 *)(param_1 + 0xa8);
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_1 + 0xb0);
  }
  FUN_00414480(&local_a8);
  FUN_00414560(&local_80,3);
  return;
}

