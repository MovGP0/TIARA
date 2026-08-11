/* Ghidra address: 00ace980 */
/* Ghidra symbol: FUN_00ace980 */


void FUN_00ace980(longlong *param_1,longlong param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_a8 [32];
  longlong local_88;
  longlong local_80;
  undefined1 local_78;
  undefined1 local_70;
  undefined4 local_68;
  undefined1 local_60;
  undefined1 local_50 [16];
  undefined1 *local_40;
  undefined4 local_34;
  undefined1 local_2d;
  undefined4 local_2c;
  longlong local_28;
  char local_1d;
  int local_1c;
  
  local_40 = auStack_a8;
  FUN_00a99cd0(param_1,param_2,param_3,param_4);
  cVar1 = (**(code **)(*param_1 + 0x30))(param_1);
  if (cVar1 == '\0') {
    return;
  }
  local_28 = param_1[0x29];
  if (*(char *)(param_1[3] + 0xb2) != '\0') {
    uVar3 = FUN_005ffa40(param_2);
    iVar2 = thunk_FUN_03e5bd07(uVar3,0xc);
    if (iVar2 == 1) {
      uVar3 = FUN_005ffa40(param_2);
      iVar2 = thunk_FUN_03e5bd07(uVar3,0xe);
      if (iVar2 == 1) {
        local_1d = '\x01';
        goto LAB_00acea54;
      }
    }
  }
  local_1d = '\0';
LAB_00acea54:
  if (local_1d != '\0') {
    FUN_005fdcb0(*(undefined8 *)(param_2 + 0x80),1);
    FUN_005ff880(param_2,*(undefined8 *)(local_28 + 0xb8));
    local_2c = *(undefined4 *)(*(longlong *)(local_28 + 0xb8) + 0x28);
    local_2d = (*(byte *)(param_1[3] + 0x90) & 1) != 0;
    if (((bool)local_2d) && (cVar1 = FUN_00781870(), cVar1 != '\0')) {
      uVar3 = FUN_00781840();
      local_34 = FUN_007793c0(uVar3,local_2c);
    }
    else {
      local_34 = local_2c;
    }
    local_34 = FUN_005fbf20(local_34);
    FUN_005fc860(*(undefined8 *)(param_2 + 0x70),local_34);
    local_88._0_4_ = param_4 + *(int *)(local_28 + 0x9c);
    local_80 = CONCAT71(local_80._1_7_,1);
    local_78 = *(undefined1 *)(param_1[3] + 0xb2);
    local_70 = 0;
    local_68 = 0xffffff;
    local_60 = *(undefined1 *)(param_1[3] + 0x90);
    FUN_00a71ed0(param_2,param_3,param_4,param_3 + *(int *)(local_28 + 0x98));
    local_1c = FUN_005fdfd0(param_2,&DAT_00aceddc);
    uVar3 = FUN_005ffa40(param_2);
    thunk_FUN_041afa90(uVar3,6);
    local_88 = CONCAT44(local_88._4_4_,param_4 + *(int *)(local_28 + 0x9c));
    FUN_00498350(local_50,param_3,param_4,param_3 + *(int *)(local_28 + 0x98));
    local_88 = param_1[0x1c];
    FUN_009ec490(param_2,local_50,param_3 + *(int *)(local_28 + 0x98) / 2,
                 param_4 + (*(int *)(local_28 + 0x9c) - local_1c) / 2);
    return;
  }
  if (param_1[0x1e] == 0) {
    plVar4 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
    param_1[0x1e] = (longlong)plVar4;
    (**(code **)(*plVar4 + 0x88))(plVar4,*(undefined4 *)(local_28 + 0x98));
    (**(code **)(*(longlong *)param_1[0x1e] + 0x70))
              ((longlong *)param_1[0x1e],*(undefined4 *)(local_28 + 0x9c));
    uVar3 = FUN_00609e10(param_1[0x1e]);
    FUN_005fdf10(uVar3);
    uVar3 = FUN_00609e10(param_1[0x1e]);
    uVar3 = FUN_005ffa40(uVar3);
    FUN_006579d0(local_28,uVar3,0,0);
    uVar3 = FUN_00609e10(param_1[0x1e]);
    FUN_005fe090(uVar3);
  }
  local_88 = CONCAT44(local_88._4_4_,*(undefined4 *)(local_28 + 0x9c));
  local_80 = param_1[0x1e];
  FUN_00a46490(param_2,param_3,param_4,*(undefined4 *)(local_28 + 0x98));
  return;
}

