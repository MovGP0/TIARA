/* Ghidra address: 01251b40 */
/* Ghidra symbol: FUN_01251b40 */


void FUN_01251b40(longlong param_1,undefined8 param_2,int param_3,int param_4,undefined8 param_5,
                 longlong *param_6,longlong *param_7,char param_8,undefined8 param_9,char param_10)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined8 in_stack_fffffffffffffcf8;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  longlong *local_268;
  ulonglong local_260;
  undefined8 local_258;
  undefined8 local_250;
  longlong *local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  longlong *local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a4;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_17b;
  undefined4 uStack_173;
  undefined4 local_16f;
  undefined4 uStack_16b;
  undefined4 local_167;
  undefined4 uStack_163;
  undefined8 local_15f;
  undefined8 local_53;
  undefined8 local_4b;
  short local_43;
  undefined1 local_41;
  longlong local_40;
  longlong *local_38;
  longlong *local_30 [2];
  
  uVar8 = (undefined4)((ulonglong)in_stack_fffffffffffffcf8 >> 0x20);
  local_2b8 = 0;
  local_2c0 = 0;
  local_2c8 = 0;
  local_2a0 = 0;
  local_2a8 = 0;
  local_2b0 = 0;
  local_290 = 0;
  local_298 = 0;
  local_280 = 0;
  local_288 = 0;
  local_278 = 0;
  local_268 = (longlong *)0x0;
  local_270 = 0;
  local_260 = 0;
  local_258 = 0;
  local_248 = (longlong *)0x0;
  local_250 = 0;
  local_238 = 0;
  local_240 = 0;
  local_228 = 0;
  local_230 = 0;
  local_218 = 0;
  local_220 = 0;
  local_208 = (longlong *)0x0;
  local_210 = 0;
  local_1f8 = 0;
  local_200 = 0;
  local_1e0 = 0;
  local_1e8 = 0;
  local_1f0 = 0;
  local_1c8 = 0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1b8 = 0;
  local_1c0 = 0;
  local_1b0 = 0;
  local_30[0] = (longlong *)0x0;
  local_38 = (longlong *)0x0;
  local_188 = 0;
  local_190 = 0;
  local_198 = 0;
  local_1a0 = 0;
  FUN_00414610(param_9);
  cVar1 = FUN_01d080f0(param_2,param_1,1,param_3 + 1,CONCAT44(uVar8,param_4 + 1),&local_1a4);
  if (cVar1 == '\0') {
    puVar2 = (undefined8 *)(PTR_DAT_02001120 + 0x431);
    puVar4 = &local_15f;
    for (lVar3 = 0x24; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = *(undefined4 *)puVar2;
    *(undefined2 *)((longlong)puVar4 + 4) = *(undefined2 *)((longlong)puVar2 + 4);
    *(undefined1 *)((longlong)puVar4 + 6) = *(undefined1 *)((longlong)puVar2 + 6);
    FUN_014384c0(&local_15f,param_5);
  }
  else {
    puVar2 = (undefined8 *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x470),local_1a4);
    puVar4 = &local_15f;
    for (lVar3 = 0x24; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)puVar4 = *(undefined4 *)puVar2;
    *(undefined2 *)((longlong)puVar4 + 4) = *(undefined2 *)((longlong)puVar2 + 4);
    *(undefined1 *)((longlong)puVar4 + 6) = *(undefined1 *)((longlong)puVar2 + 6);
  }
  (**(code **)(*param_6 + 0x148))(param_6,local_30,L"detail");
  (**(code **)(*param_7 + 0x98))(param_7,&local_1b0,local_30[0]);
  FUN_00de8b50(&local_1b8,L"TAnalModeDlg",L"GroupBox2",param_9,L"Caption");
  FUN_004168b0(&local_1c0,local_1b8);
  (**(code **)(*local_30[0] + 0x108))(local_30[0],L"type",local_1c0);
  (**(code **)(*local_30[0] + 0x108))(local_30[0],&DAT_01252ae8,&DAT_01252afc);
  FUN_0041ddd0(&local_1d0,&PTR_PTR_01241f70);
  FUN_00de8a20(&local_1c8,L"TSCXMLConverter",L"sSteppedParameter",param_9,local_1d0);
  FUN_004168b0(&local_1d8,local_1c8);
  FUN_01250950(param_6,local_30[0],param_8,local_1d8,&DAT_01252b68,cVar1);
  uVar8 = 0;
  FUN_00de8fd0(&local_1a0,L"TSteppingParametersFrame",L"ParamScaleRG",L"Items",param_9,&DAT_01252bf8
               ,1,0);
  FUN_00de8b50(&local_1e0,L"TSteppingParametersFrame",L"ParamScaleRG",param_9,L"Caption");
  FUN_004168b0(&local_1e8,local_1e0);
  FUN_004168b0(&local_1f0,local_1a0);
  uVar9 = CONCAT31((int3)((uint)uVar8 >> 8),local_41);
  FUN_01250bc0(&local_38,param_6,local_30[0],param_8,local_1e8,&DAT_01252c08,local_1f0,uVar9);
  bVar5 = param_8 == '\0';
  if (bVar5) {
    (**(code **)(*local_38 + 0x108))(local_38,L"redraw",&DAT_01252afc);
  }
  FUN_00b8fd60(&local_190,local_53,6,0,1);
  FUN_00de8b50(&local_1f8,L"TSteppingParametersFrame",L"ParamStartLabel",param_9,L"Caption");
  FUN_004168b0(&local_200,local_1f8);
  FUN_01250720(&local_38,param_6,local_30[0],param_8,local_200,&DAT_01252afc,local_190);
  if (bVar5) {
    FUN_0043f750(&local_210,2);
    FUN_00416ba0(&local_208,&DAT_01252c7c,local_210);
    (**(code **)(*local_38 + 0x108))(local_38,L"visible",local_208);
  }
  FUN_00b8fd60(&local_198,local_4b,6,0,1);
  FUN_00de8b50(&local_218,L"TSteppingParametersFrame",L"ParamEndLabel",param_9,L"Caption");
  FUN_004168b0(&local_220,local_218);
  uVar7 = local_198;
  FUN_01250720(&local_38,param_6,local_30[0],param_8,local_220,&DAT_01252cb8,local_198);
  uVar8 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (bVar5) {
    FUN_0043f750(&local_230,2);
    FUN_00416ba0(&local_228,&DAT_01252c7c,local_230);
    (**(code **)(*local_38 + 0x108))(local_38,L"visible",local_228);
  }
  FUN_00de8b50(&local_238,L"TSteppingParametersFrame",L"ParamPointsLabel",param_9,L"Caption");
  FUN_004168b0(&local_240,local_238);
  FUN_012505f0(&local_38,param_6,local_30[0],param_8,local_240,&DAT_01252cf8,
               CONCAT44(uVar8,(int)local_43));
  if (bVar5) {
    FUN_0043f750(&local_250,2);
    FUN_00416ba0(&local_248,&DAT_01252c7c,local_250);
    (**(code **)(*local_38 + 0x108))(local_38,L"visible",local_248);
  }
  if ((cVar1 == '\0') || (local_40 == 0)) {
    FUN_00b8fd60(&local_258,param_5,6,0,1);
    FUN_00416cd0(&local_188,5,local_190,&DAT_01252d08,local_258,&DAT_01252d08,local_198);
  }
  else {
    FUN_01d0f2a0(local_40,&local_188);
  }
  FUN_0041ddd0(&local_260,&PTR_PTR_01242030);
  uVar9 = uVar9 & 0xffffff00;
  uVar6 = local_260;
  FUN_01250ce0(&local_38,param_6,local_30[0],param_8,local_260,&DAT_01252d1c,local_188,uVar9);
  if (param_8 == '\0') {
    FUN_0043f750(&local_270,2);
    FUN_00416ba0(&local_268,&DAT_01252d2c,local_270);
    (**(code **)(*local_38 + 0x108))(local_38,L"visible",local_268);
  }
  if (param_10 != '\0') {
    cVar1 = FUN_01d080f0(param_2,param_1,2,param_3 + 1,uVar6 & 0xffffffff00000000,&local_1a4);
    if (cVar1 == '\0') {
      local_17b = *(undefined8 *)(PTR_DAT_02001120 + 0x57f);
      uStack_173 = (undefined4)*(undefined8 *)(PTR_DAT_02001120 + 0x587);
      local_16f = (undefined4)((ulonglong)*(undefined8 *)(PTR_DAT_02001120 + 0x587) >> 0x20);
      uStack_16b = (undefined4)*(undefined8 *)(PTR_DAT_02001120 + 0x58f);
      local_167 = (undefined4)((ulonglong)*(undefined8 *)(PTR_DAT_02001120 + 0x58f) >> 0x20);
      uStack_163 = *(undefined4 *)(PTR_DAT_02001120 + 0x597);
      FUN_013ec800(&local_17b,param_5);
    }
    else {
      puVar2 = (undefined8 *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x468),local_1a4);
      local_17b = *puVar2;
      uStack_173 = (undefined4)puVar2[1];
      local_16f = (undefined4)((ulonglong)puVar2[1] >> 0x20);
      uStack_16b = (undefined4)puVar2[2];
      local_167 = (undefined4)((ulonglong)puVar2[2] >> 0x20);
      uStack_163 = *(undefined4 *)(puVar2 + 3);
    }
    (**(code **)(*param_6 + 0x148))(param_6,local_30,L"detail");
    (**(code **)(*param_7 + 0x98))(param_7,&local_278,local_30[0]);
    FUN_00de8b50(&local_280,L"TAnalModeRangeDlg",L"GroupBox2",param_9,L"Caption");
    FUN_004168b0(&local_288,local_280);
    (**(code **)(*local_30[0] + 0x108))(local_30[0],L"type",local_288);
    (**(code **)(*local_30[0] + 0x108))(local_30[0],&DAT_01252ae8,&DAT_01252cb8);
    FUN_00de8b50(&local_290,L"TAnalModeRangeDlg",L"GroupBox2",param_9,L"Caption");
    FUN_004168b0(&local_298,local_290);
    FUN_01250950(param_6,local_30[0],param_8,local_298,&DAT_01252b68,cVar1);
    FUN_00de8b50(&local_2a8,L"TAnalModeRangeDlg",L"OptStartLabel",param_9,L"Caption");
    FUN_004168b0(&local_2b0,local_2a8);
    uVar9 = uVar9 & 0xffffff00;
    FUN_01250840(&local_2a0,param_6,local_30[0],param_8,local_2b0,&DAT_01252afc,
                 CONCAT44(uStack_16b,local_16f),uVar9);
    FUN_00de8b50(&local_2c0,L"TAnalModeRangeDlg",L"OptEndLabel",param_9,L"Caption");
    FUN_004168b0(&local_2c8,local_2c0);
    FUN_01250840(&local_2b8,param_6,local_30[0],param_8,local_2c8,&DAT_01252cb8,
                 CONCAT44(uStack_163,local_167),uVar9 & 0xffffff00);
  }
  FUN_00414480(&local_2c8);
  FUN_00414520(&local_2c0);
  FUN_0041b800(&local_2b8);
  FUN_00414480(&local_2b0);
  FUN_00414520(&local_2a8);
  FUN_0041b800(&local_2a0);
  FUN_00414480(&local_298);
  FUN_00414520(&local_290);
  FUN_00414480(&local_288);
  FUN_00414520(&local_280);
  FUN_0041b800(&local_278);
  FUN_00414560(&local_270,7);
  FUN_00414520(&local_238);
  FUN_00414560(&local_230,3);
  FUN_00414520(&local_218);
  FUN_00414560(&local_210,3);
  FUN_00414520(&local_1f8);
  FUN_00414560(&local_1f0,2);
  FUN_00414520(&local_1e0);
  FUN_00414560(&local_1d8,2);
  FUN_00414520(&local_1c8);
  FUN_00414480(&local_1c0);
  FUN_00414520(&local_1b8);
  FUN_0041b800(&local_1b0);
  FUN_00414520(&local_1a0);
  FUN_00414560(&local_198,3);
  FUN_00417840(&local_38,&LAB_00b9fca0,2);
  FUN_00414480(&param_9);
  return;
}

