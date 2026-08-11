/* Ghidra address: 011423a0 */
/* Ghidra symbol: FUN_011423a0 */


void FUN_011423a0(longlong param_1,byte param_2,undefined1 param_3,int param_4,double *param_5)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 *local_160;
  double *local_158;
  undefined1 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_120 [200];
  double local_58;
  double local_50;
  
  local_1a0 = 0;
  local_198 = 0;
  local_190 = 0;
  local_188 = 0;
  local_168 = 0;
  local_170 = 0;
  local_178 = 0;
  local_180 = 0;
  local_140 = 0;
  local_148 = 0;
  local_160 = (double *)0x0;
  local_128 = 0;
  local_130 = 0;
  local_138 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x758),&local_160);
  local_158 = (double *)local_160;
  local_150 = 0x11;
  FUN_00442f70(&local_148,L"%40s",&local_158,0);
  FUN_00416cd0(&local_140,3,local_148,&DAT_011429f4,&DAT_011429f4);
  FUN_00442620(param_1 + 0x1007b4,local_140);
  FUN_01141480(param_3,&local_128,&local_130,&local_138,&PTR_DAT_01142a08);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x750),0,0,local_128);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x750),1,0,local_130);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x750),2,0,local_138);
  FUN_0084e320(*(undefined8 *)(param_1 + 0x750),&local_170,0,0);
  FUN_0084e320(*(undefined8 *)(param_1 + 0x750),&local_178,1,0);
  FUN_0084e320(*(undefined8 *)(param_1 + 0x750),&local_180,2,0);
  FUN_00416cd0(&local_168,5,local_170,local_178,local_180,&DAT_011429f4,&DAT_011429f4);
  FUN_00442620(local_120,local_168);
  FUN_00442690(param_1 + 0x1007b4,local_120);
  local_58 = *param_5 / (double)param_4;
  local_50 = param_5[1] / (double)param_4;
  local_158 = (double *)((ulonglong)local_158 & 0xffffffff00000000);
  local_150 = 0;
  FUN_00442f70(&local_188,L"%3d.",&local_158,0);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x750),0,1,local_188);
  FUN_011421b0(param_1,&local_58,param_3,1);
  local_58 = param_5[2] / (double)param_4;
  local_50 = param_5[3] / (double)param_4;
  dVar4 = (double)FUN_00c44590(&local_58);
  local_158 = (double *)CONCAT44(local_158._4_4_,1);
  local_150 = 0;
  FUN_00442f70(&local_190,L"%3d.",&local_158,0);
  FUN_0084e3e0(*(undefined8 *)(param_1 + 0x750),0,2,local_190);
  FUN_011421b0(param_1,&local_58,param_3,2);
  dVar6 = 0.0;
  iVar2 = 2;
  dVar5 = 0.0;
  if (1 < param_2) {
    iVar3 = param_2 - 1;
    do {
      local_58 = param_5[(longlong)iVar2 * 2] / (double)param_4;
      local_50 = param_5[(longlong)iVar2 * 2 + 1] / (double)param_4;
      dVar5 = (double)FUN_00c44590(&local_58);
      dVar6 = dVar6 + dVar5 * dVar5;
      local_158 = (double *)CONCAT44(local_158._4_4_,iVar2);
      local_150 = 0;
      FUN_00442f70(&local_198,L"%3d.",&local_158,0);
      FUN_0084e3e0(*(undefined8 *)(param_1 + 0x750),0,iVar2 + 1,local_198);
      FUN_011421b0(param_1,&local_58,param_3);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
      dVar5 = dVar6;
    } while (iVar3 != 0);
  }
  FUN_00848a70(*(undefined8 *)(param_1 + 0x750),param_2 + 2);
  if (dVar4 == 0.0) {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x768),&DAT_01142a5c);
  }
  else {
    dVar5 = (double)FUN_0040c760(dVar5);
    local_1a8 = (dVar5 * 100.0) / dVar4;
    local_158 = &local_1a8;
    local_150 = 3;
    FUN_00442f70(&local_1a0,L"%.5g",&local_158,0);
    FUN_00416ad0(&local_1a0,&DAT_01142a4c);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x768),local_1a0);
  }
  uVar1 = FUN_006a6030();
  FUN_006a57d0(uVar1,param_1 + 0x1007b4);
  FUN_00414560(&local_1a0,8);
  FUN_00414480(&local_160);
  FUN_00414560(&local_148,5);
  return;
}

