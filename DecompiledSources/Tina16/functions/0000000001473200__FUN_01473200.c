/* Ghidra address: 01473200 */
/* Ghidra symbol: FUN_01473200 */


void FUN_01473200(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 local_60 [2];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_30 [16];
  undefined8 local_20;
  
  local_48 = 0;
  local_50 = 0;
  lVar1 = *(longlong *)(param_1 + 0x6b0);
  if (*(int *)(lVar1 + 0x4a8) == 1) {
    FUN_0084e320(lVar1,&local_48,0,*(undefined4 *)(lVar1 + 0x4ac));
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0xb8))
                      (*(longlong **)(param_1 + 0x738),local_48);
    if (-1 < iVar2) {
      FUN_004b5390(*(undefined8 *)(param_1 + 0x738),&local_50,iVar2);
      uVar6 = FUN_007ffaf0(param_1);
      uVar3 = FUN_008077f0(uVar6);
      (**(code **)(**(longlong **)(param_1 + 0x718) + 0x290))
                (*(longlong **)(param_1 + 0x718),local_30,uVar3,local_50,0);
      FUN_0064e030(*(undefined8 *)(param_1 + 0x718),0xff000018);
      lVar1 = *(longlong *)(param_1 + 0x6b0);
      FUN_00849e90(lVar1,&local_40,*(undefined4 *)(lVar1 + 0x4a8),*(undefined4 *)(lVar1 + 0x4ac));
      local_60[0] = FUN_00498310(local_40,local_3c);
      local_20 = FUN_0064d1f0(param_1,local_60);
      iVar2 = FUN_004230a0(&local_40);
      iVar4 = FUN_004230a0(local_30);
      iVar5 = FUN_004230c0(local_30);
      FUN_00429ca0(local_30,(int)local_20 + (iVar2 - iVar4) / 2,(local_20._4_4_ - iVar5) + -10);
      (**(code **)(**(longlong **)(param_1 + 0x718) + 0x270))
                (*(longlong **)(param_1 + 0x718),local_30,local_50);
      FUN_00742eb0(*(undefined8 *)(param_1 + 0x710),1);
    }
  }
  FUN_00414560(&local_50,2);
  return;
}

