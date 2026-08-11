/* Ghidra address: 00ee3b90 */
/* Ghidra symbol: FUN_00ee3b90 */


void FUN_00ee3b90(char param_1,undefined8 param_2,longlong param_3,char param_4,char param_5,
                 undefined8 param_6,longlong *param_7,longlong *param_8,char *param_9)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_1d8 [32];
  char local_1b8;
  undefined8 local_1b0;
  longlong *local_1a8;
  undefined1 local_1a0;
  undefined1 local_198;
  undefined1 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined1 *local_150;
  undefined1 local_39 [17];
  longlong local_28;
  undefined1 local_19;
  
  local_150 = auStack_1d8;
  local_188 = 0;
  local_180 = 0;
  local_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_158 = 0;
  if ((((param_1 == '\0') || (*param_9 != '\0')) || (param_4 != DAT_01ef7ce0)) ||
     (puVar1 = auStack_1d8, *(int *)(param_3 + 0x10) == 0)) {
    FUN_00b95290(param_3);
    FUN_019953b0(param_3);
    FUN_01d0f910(*(undefined8 *)(param_3 + 0x468),*(undefined8 *)(param_3 + 0x470),
                 *(undefined8 *)(param_3 + 0x478));
    *PTR_DAT_02002ce0 = 0;
    FUN_00410f20(*(undefined8 *)(param_3 + 0xe70));
    uVar3 = FUN_016b97f0(&DAT_016b45f0,1,0);
    *(undefined8 *)(param_3 + 0xe70) = uVar3;
    local_28 = *(longlong *)(param_3 + 0xe70);
    lVar4 = *(longlong *)(local_28 + 0x10);
    *(undefined1 *)(lVar4 + 0x231) = 0;
    *(char *)(lVar4 + 0x230) = param_1;
    FUN_00414ad0(lVar4 + 0x218,*(undefined8 *)(param_3 + 0x360));
    FUN_00414ad0(*(longlong *)(local_28 + 0x10) + 0x220,
                 *(undefined8 *)(*(longlong *)(local_28 + 0x10) + 0x218));
    *(longlong **)(*(longlong *)(local_28 + 0x10) + 0x228) = param_8;
    if (param_8 != (longlong *)0x0) {
      (**(code **)(*param_8 + 0x90))(param_8);
    }
    *(undefined1 *)(*(longlong *)(local_28 + 8) + 8) = 1;
    *(undefined1 *)(local_28 + 0x9a7) = 0;
    *(undefined1 *)(local_28 + 0x9a8) = 0;
    *(char *)(local_28 + 0x9a9) = param_5;
    if (*(char *)(*(longlong *)(local_28 + 0x10) + 0x230) == '\0') {
      if ((*(longlong *)PTR_DAT_02004208 != 0) &&
         (*(char *)(*(longlong *)PTR_DAT_02004208 + 0xa9) == '\0')) {
        uVar3 = FUN_00b89270();
        FUN_00b8e520(uVar3,&local_160,0x4e8);
        FUN_00c54370(*(undefined8 *)PTR_DAT_02004208,local_160);
        *(undefined1 *)(*(longlong *)PTR_DAT_02004208 + 0x6c1) = 0;
        FUN_008059a0(*(undefined8 *)PTR_DAT_02004208);
      }
    }
    else {
      uVar3 = FUN_00b89270();
      FUN_00b8e520(uVar3,&local_158,0x4e8);
      FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_020023c0 + 0x920),local_158);
    }
    FUN_016cff60(local_28,1,1,0);
    lVar4 = FUN_016b9cb0(local_28);
    *(undefined8 *)(lVar4 + 0x110) = 0x3ff0000000000000;
    FUN_016bb740(local_28,param_2);
    FUN_016bb340(local_28,&local_168,local_39);
    while( true ) {
      FUN_016b8f10(&local_170,*(undefined8 *)(local_28 + 0xd80));
      iVar2 = FUN_00415a60(local_170,&DAT_00ee432c);
      if (iVar2 == 0) break;
      local_1b8 = '\0';
      local_1b0 = 0;
      local_1a8 = (longlong *)0x0;
      local_1a0 = 0;
      local_198 = 1;
      local_190 = 1;
      FUN_00ee2730(*(undefined8 *)(local_28 + 8),0,param_3,0);
    }
    if (*(char *)(*(longlong *)(local_28 + 0x10) + 0x230) == '\0') {
      if (*(longlong *)PTR_DAT_02004208 != 0) {
        uVar3 = FUN_00b89270();
        FUN_00b8e520(uVar3,&local_180,0x4e9);
        FUN_00c54370(*(undefined8 *)PTR_DAT_02004208,local_180);
      }
    }
    else {
      uVar3 = FUN_00b89270();
      FUN_00b8e520(uVar3,&local_178,0x4e9);
      FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_020023c0 + 0x920),local_178);
    }
    *(undefined1 *)(*(longlong *)(local_28 + 0x10) + 0x231) = 1;
    if (param_3 != 0) {
      uVar3 = FUN_016b9cb0(local_28);
      FUN_00417c40(param_3 + 0x492,uVar3,&DAT_01d0d0b8);
      if (*(longlong *)(param_3 + 0x488) != 0) {
        lVar4 = *(longlong *)(param_3 + 0x488);
        uVar3 = FUN_016b9cb0(local_28);
        FUN_00417c40(lVar4 + 0x5d8,uVar3,&DAT_01d0d0b8);
        *(undefined1 *)(lVar4 + 0x884) = 0;
      }
    }
    local_1b0 = param_6;
    local_1a8 = param_7;
    local_1a0 = 1;
    local_198 = 1;
    local_1b8 = param_4;
    FUN_016cb2b0(local_28,0,param_3,param_3);
    if (param_3 != 0) {
      uVar3 = FUN_016b9cb0(local_28);
      FUN_00417c40(param_3 + 0x492,uVar3,&DAT_01d0d0b8);
      if (*(longlong *)(param_3 + 0x488) != 0) {
        uVar3 = FUN_016b9cb0(local_28);
        FUN_00417c40(*(longlong *)(param_3 + 0x488) + 0x5d8,uVar3,&DAT_01d0d0b8);
      }
    }
    if ((param_5 == '\0') && (param_7 != (longlong *)0x0)) {
      (**(code **)(*param_7 + 0x90))(param_7);
      (**(code **)(*param_7 + 0x10))(param_7,*(undefined8 *)(local_28 + 0xa50));
    }
    FUN_01995400(param_3);
    if (*(char *)(*(longlong *)(local_28 + 0x10) + 0x230) != '\0') {
      uVar3 = FUN_00b89270();
      FUN_00b8e520(uVar3,&local_188,0x4eb);
      FUN_0064de00(*(undefined8 *)(*(longlong *)PTR_DAT_020023c0 + 0x920),local_188);
    }
    *param_9 = '\0';
    local_19 = *(undefined1 *)(*(longlong *)(local_28 + 0x10) + 0x230);
    DAT_01ef7ce0 = param_4;
    puVar1 = local_150;
  }
  local_150 = puVar1;
  FUN_00414560(&local_188,3);
  FUN_00414590(&local_170,2);
  FUN_00414560(&local_160,2);
  return;
}

