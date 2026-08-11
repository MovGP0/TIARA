/* Ghidra address: 00d37bb0 */
/* Ghidra symbol: FUN_00d37bb0 */


void FUN_00d37bb0(longlong param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  HDC pHVar7;
  undefined1 auStackY_c8 [32];
  undefined1 local_60 [16];
  undefined1 *local_50;
  int local_48;
  int local_44;
  int local_38;
  int local_34;
  undefined1 local_2d;
  undefined1 local_2c [12];
  longlong *local_20;
  
  local_50 = auStackY_c8;
  FUN_004238d0(&local_48,0,0,0);
  local_2d = 0x21;
  if ((*(byte *)(param_1 + 0x1c8) & 2) != 0) {
    local_2d = 0x22;
  }
  plVar3 = (longlong *)FUN_00781840();
  (**(code **)(*plVar3 + 0x158))(plVar3,local_2c,local_2d);
  uVar4 = FUN_00781840();
  FUN_00779290(uVar4,*(undefined8 *)(param_1 + 0x168),local_2c,1);
  cVar1 = FUN_00d39440(*(undefined8 *)(param_1 + 0x1a0));
  if (cVar1 == '\0') {
    iVar2 = FUN_004230c0(param_2);
    FUN_004230c0(param_2);
    FUN_004238d0(&local_48,param_2[2] - local_38,param_2[1] + (iVar2 - local_34) / 2 + -4,param_2[2]
                );
  }
  else {
    FUN_004238d0(&local_48,*param_2 + 4,param_2[1],*param_2 + 4 + local_38);
  }
  local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
  (**(code **)(*local_20 + 0xe0))(local_20,local_38,local_34);
  lVar5 = FUN_00609e10(local_20);
  FUN_005fdab0(*(undefined8 *)(lVar5 + 0x80),&DAT_00ff00ff);
  plVar3 = (longlong *)FUN_00609e10(local_20);
  FUN_004238d0(local_60,0,0,local_38);
  (**(code **)(*plVar3 + 0xa8))(plVar3,local_60);
  uVar4 = FUN_00781840();
  uVar6 = FUN_00609e10(local_20);
  uVar6 = FUN_005ffa40(uVar6);
  FUN_004238d0(local_60,0,0,local_38);
  FUN_00778dc0(uVar4,uVar6,local_2c,local_60);
  cVar1 = FUN_00d39440(*(undefined8 *)(param_1 + 0x1a0));
  if (cVar1 == '\0') {
    cVar1 = FUN_00787a60(*(undefined8 *)(*(longlong *)(param_1 + 0x1a0) + 0x18));
    if (cVar1 != '\x01') {
      local_48 = local_48 + -4;
      goto LAB_00d37edf;
    }
  }
  FUN_00d371b0(local_20,0x40490fdb,0,&DAT_00ff00ff);
  iVar2 = (**(code **)(*local_20 + 0x48))(local_20);
  local_44 = local_44 + iVar2 / 2 + -2;
LAB_00d37edf:
  plVar3 = (longlong *)FUN_007810f0();
  cVar1 = (**(code **)(*plVar3 + 0x98))(plVar3);
  if (cVar1 == '\0') {
    uVar4 = FUN_00609e10(local_20);
    pHVar7 = (HDC)FUN_005ffa40(uVar4);
    TransparentBlt(*(HDC *)(param_1 + 0x168),local_48,local_44 + -3,local_38,local_34,pHVar7,0,0,
                   local_38,local_34,0xff00ff);
  }
  else {
    uVar4 = FUN_00609e10(local_20);
    pHVar7 = (HDC)FUN_005ffa40(uVar4);
    TransparentBlt(*(HDC *)(param_1 + 0x168),local_48,local_44,local_38,local_34,pHVar7,0,0,local_38
                   ,local_34,0xff00ff);
  }
  FUN_00410f20(local_20);
  iVar2 = FUN_004230a0(&local_48);
  *(int *)(param_1 + 0x160) = *(int *)(param_1 + 0x160) - iVar2;
  return;
}

