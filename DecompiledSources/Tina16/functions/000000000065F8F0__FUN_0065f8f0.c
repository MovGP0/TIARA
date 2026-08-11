/* Ghidra address: 0065f8f0 */
/* Ghidra symbol: FUN_0065f8f0 */


void FUN_0065f8f0(longlong *param_1,ulonglong *param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  int extraout_var;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined4 local_88;
  undefined1 *local_70;
  bool local_59;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  byte local_3d;
  int local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  
  local_70 = auStack_b8;
  local_38 = *param_2;
  uStack_30 = param_2[1];
  *(undefined1 *)(param_1 + 0x93) = 1;
  FUN_0064de00(param_1,param_3);
  uStack_30 = CONCAT44(uStack_30._4_4_ + 4,(undefined4)uStack_30);
  FUN_0064fe10(param_1,&local_38);
  local_4c = local_38._4_4_;
  local_54 = (int)local_38;
  local_50 = local_38._4_4_;
  local_48 = FUN_00809b30(*(undefined8 *)PTR_DAT_02005950,&local_54,0);
  iVar1 = FUN_008077f0(local_48);
  if (iVar1 < (int)param_1[0x13]) {
    uVar2 = FUN_008077f0(local_48);
    FUN_0064cbf0(param_1,uVar2);
  }
  iVar1 = FUN_008077b0(local_48);
  if (iVar1 < *(int *)((longlong)param_1 + 0x9c)) {
    uVar2 = FUN_008077b0(local_48);
    FUN_0064cc50(param_1,uVar2);
  }
  iVar1 = FUN_008077d0(local_48);
  iVar3 = FUN_008077b0(local_48);
  if (iVar1 + iVar3 < local_38._4_4_ + *(int *)((longlong)param_1 + 0x9c)) {
    iVar1 = FUN_008077d0(local_48);
    iVar3 = FUN_008077b0(local_48);
    local_38 = CONCAT44((iVar1 + iVar3) - *(int *)((longlong)param_1 + 0x9c),(int)local_38);
  }
  iVar1 = FUN_00807790(local_48);
  iVar3 = FUN_008077f0(local_48);
  if (iVar1 + iVar3 < (int)local_38 + (int)param_1[0x13]) {
    iVar1 = FUN_00807790(local_48);
    iVar3 = FUN_008077f0(local_48);
    local_38 = CONCAT44(local_38._4_4_,(iVar1 + iVar3) - (int)param_1[0x13]);
  }
  iVar1 = FUN_00807790(local_48);
  if ((int)local_38 < iVar1) {
    uVar2 = FUN_00807790(local_48);
    local_38 = CONCAT44(local_38._4_4_,uVar2);
  }
  iVar1 = FUN_008077d0(local_48);
  if (uStack_30._4_4_ < iVar1) {
    uVar2 = FUN_008077d0(local_48);
    local_38 = CONCAT44(uVar2,(int)local_38);
  }
  FUN_00655f80(param_1,*(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0x2d0));
  uVar4 = FUN_0065b870(param_1);
  local_98 = (undefined4)param_1[0x13];
  local_90 = *(undefined4 *)((longlong)param_1 + 0x9c);
  local_88 = 0x210;
  thunk_FUN_041cc6e2(uVar4,0xffffffffffffffff,local_38 & 0xffffffff,local_38._4_4_);
  iVar1 = FUN_00427dd0();
  if ((uint)(iVar1 - *(int *)((longlong)param_1 + 0x49c)) < 0xfb) {
    local_59 = false;
  }
  else {
    local_58 = 0;
    if (param_3 != 0) {
      local_58 = *(int *)(param_3 + -4);
    }
    local_59 = local_58 < 100;
  }
  if ((local_59 != false) && (DAT_01df5b10 != (code *)0x0)) {
    thunk_FUN_03e0f7b4(0x1016,0,&local_3c,0);
    if (local_3c != 0) {
      thunk_FUN_03e0f7b4(0x1018,0,&local_3c,0);
      if (local_3c == 0) {
        FUN_00664d10(DAT_020122b8);
        if (local_38._4_4_ < extraout_var) {
          local_3d = 0;
        }
        else {
          local_3d = 1;
        }
      }
      else {
        local_3d = 2;
      }
      uVar4 = FUN_0065b870(param_1);
      (*DAT_01df5b10)(uVar4,100,*(uint *)(&DAT_01df7468 + (ulonglong)local_3d * 4) | 0x40000);
    }
  }
  uVar4 = FUN_0065b870(param_1);
  thunk_FUN_03ab0e43(uVar4,4);
  (**(code **)(*param_1 + 0x180))(param_1);
  uVar2 = FUN_00427dd0();
  *(undefined4 *)((longlong)param_1 + 0x49c) = uVar2;
  *(undefined1 *)(param_1 + 0x93) = 0;
  return;
}

