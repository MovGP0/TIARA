/* Ghidra address: 01511240 */
/* Ghidra symbol: FUN_01511240 */


void FUN_01511240(longlong param_1,byte *param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  int iVar6;
  byte *pbVar7;
  double dVar8;
  undefined8 uVar9;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  longlong local_398;
  undefined1 local_390 [759];
  undefined1 local_99;
  byte local_98 [120];
  
  local_3c0 = 0;
  local_3b8 = 0;
  local_3b0 = 0;
  local_3a0 = 0;
  local_3a8 = 0;
  uVar5 = (ulonglong)*param_2;
  if (0x4f < uVar5) {
    uVar5 = 0x50;
  }
  local_99 = (undefined1)uVar5;
  pbVar7 = local_98;
  for (; param_2 = param_2 + 1, uVar5 != 0; uVar5 = uVar5 - 1) {
    *pbVar7 = *param_2;
    pbVar7 = pbVar7 + 1;
  }
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0xee0) + 0xe8))(*(longlong **)(param_1 + 0xee0));
  (**(code **)(**(longlong **)(param_1 + 0xee0) + 0xf0))(*(longlong **)(param_1 + 0xee0),0x200);
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0xee0) + 0xe8))(*(longlong **)(param_1 + 0xee0));
  dVar8 = (double)(**(code **)(**(longlong **)(param_1 + 0xee0) + 0xc0))
                            (*(longlong **)(param_1 + 0xee0));
  (**(code **)(**(longlong **)(param_1 + 0xee0) + 200))
            (*(longlong **)(param_1 + 0xee0),((double)iVar2 / (double)iVar3) * dVar8);
  uVar9 = (**(code **)(**(longlong **)(param_1 + 0xee0) + 0xc0))(*(longlong **)(param_1 + 0xee0));
  FUN_004154b0(&local_3a0,&local_99,0);
  FUN_00416880(&local_3a8,local_3a0);
  FUN_0040cf10(local_390,local_3a8,0);
  FUN_00409900();
  FUN_0040ca00(local_390);
  FUN_00409900();
  uVar4 = FUN_0040f200(local_390,L"@ Digital Signal Generator file");
  FUN_0040f590(uVar4);
  FUN_00409900();
  FUN_0040f590(local_390);
  FUN_00409900();
  uVar4 = FUN_0040f200(local_390,L".# Period");
  FUN_0040f590(uVar4);
  FUN_00409900();
  FUN_00b8fd60(&local_3b0,uVar9,2,0,1);
  uVar4 = FUN_0040f200(local_390,local_3b0);
  FUN_0040f590(uVar4);
  FUN_00409900();
  uVar4 = FUN_0040f200(local_390,L".# Length");
  FUN_0040f590(uVar4);
  FUN_00409900();
  FUN_0043f750(&local_3b8,iVar3);
  uVar4 = FUN_0040f200(local_390,local_3b8);
  FUN_0040f590(uVar4);
  FUN_00409900();
  FUN_0040f590(local_390);
  FUN_00409900();
  uVar4 = FUN_0040f200(local_390,L".# Data");
  FUN_0040f590(uVar4);
  FUN_00409900();
  FUN_015040f0(*(undefined8 *)(param_1 + 0xee0),&local_398);
  iVar6 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_015111f0(*(undefined4 *)(local_398 + (longlong)iVar6 * 4));
      FUN_0043fba0(&local_3c0,uVar1,2);
      FUN_00416ad0(&local_3c0,&DAT_01511690);
      uVar4 = FUN_0040f200(local_390,local_3c0);
      FUN_0040d060(uVar4);
      FUN_00409900();
      iVar6 = iVar6 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_0040f590(local_390);
  FUN_00409900();
  FUN_004095f0(local_398);
  uVar4 = FUN_0040f200(local_390,L".@ end of file");
  FUN_0040f590(uVar4);
  FUN_00409900();
  FUN_0040d150(local_390);
  FUN_00409900();
  (**(code **)(**(longlong **)(param_1 + 0xee0) + 200))(*(longlong **)(param_1 + 0xee0),dVar8);
  (**(code **)(**(longlong **)(param_1 + 0xee0) + 0xf0))(*(longlong **)(param_1 + 0xee0),iVar2);
  FUN_00414560(&local_3c0,4);
  FUN_004144d0(&local_3a0);
  return;
}

