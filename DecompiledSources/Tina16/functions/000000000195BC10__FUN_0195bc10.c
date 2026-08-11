/* Ghidra address: 0195bc10 */
/* Ghidra symbol: FUN_0195bc10 */


longlong FUN_0195bc10(longlong *param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  ulonglong local_60;
  undefined1 *local_50;
  double local_48;
  double local_40 [2];
  longlong *local_30;
  
  local_50 = auStack_88;
  lVar2 = FUN_01852b40(&LAB_01852038,1);
  param_1[0x54] = lVar2;
  local_30 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  FUN_0060bbf0(local_30,6);
  FUN_0195c0d0(param_1,local_40,&local_48);
  uVar3 = FUN_0040c770((double)param_1[0x15] * local_40[0]);
  uVar1 = FUN_00527010(1,uVar3);
  (**(code **)(*local_30 + 0x88))(local_30,uVar1);
  uVar3 = FUN_0040c770((double)param_1[0x16] * local_48);
  uVar1 = FUN_00527010(1,uVar3);
  (**(code **)(*local_30 + 0x70))(local_30,uVar1);
  uVar3 = FUN_00609e10(local_30);
  FUN_005fdf10(uVar3);
  uVar3 = FUN_00609e10(local_30);
  uVar4 = FUN_019508b0(param_1);
  local_60 = FUN_01950860(param_1);
  local_68 = uVar4 ^ 0x8000000000000000;
  local_60 = local_60 ^ 0x8000000000000000;
  (**(code **)(*param_1 + 0x2e8))(param_1,uVar3,0x3ff0000000000000,0x3ff0000000000000);
  uVar3 = FUN_00609e10(local_30);
  FUN_005fe090(uVar3);
  FUN_00410f20(local_30);
  lVar2 = param_1[0x54];
  param_1[0x54] = 0;
  return lVar2;
}

