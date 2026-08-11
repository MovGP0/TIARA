/* Ghidra address: 0070cf10 */
/* Ghidra symbol: FUN_0070cf10 */


void FUN_0070cf10(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [32];
  int local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined1 *local_40;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_40 = auStack_88;
  puVar3 = auStack_88;
  if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x324) != 0) {
    uVar5 = FUN_005ffa40(param_2);
    local_1c = thunk_FUN_03b57162(uVar5);
    local_68 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x9c);
    FUN_004238d0(&local_38,0,0,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x98));
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x324) * -2;
    FUN_00423b10(&local_38,iVar2,iVar2);
    if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x490) & 1) != 0) {
      local_38 = local_38 + 2;
    }
    if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x490) & 2) != 0) {
      local_34 = local_34 + 2;
    }
    if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x490) & 4) != 0) {
      local_30 = local_30 + -2;
    }
    if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0x490) & 8) != 0) {
      local_2c = local_2c + -2;
    }
    uVar5 = FUN_005ffa40(param_2);
    local_68 = local_2c;
    thunk_FUN_041a27b3(uVar5,local_38,local_34,local_30);
    uVar5 = FUN_00777cd0();
    uVar4 = FUN_007793c0(uVar5,0xff00000f);
    FUN_005fdab0(param_2[0x10],uVar4);
    local_68 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x9c);
    FUN_004238d0(&local_38,0,0,*(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x98));
    (**(code **)(*param_2 + 0xa8))(param_2,&local_38);
    uVar5 = FUN_005ffa40(param_2);
    thunk_FUN_0402759f(uVar5,local_1c);
    puVar3 = local_40;
  }
  local_40 = puVar3;
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (*(char *)(lVar1 + 0x490) != '\0') {
    local_24 = 0;
    local_20 = 0;
    local_28[0] = 0x1a;
    local_68 = *(undefined4 *)(lVar1 + 0x9c);
    FUN_004238d0(&local_38,0,0,*(undefined4 *)(lVar1 + 0x98));
    uVar5 = FUN_00777cd0();
    uVar6 = FUN_005ffa40(param_2);
    local_68._0_1_ = 0x80;
    local_60 = 0x100;
    local_58 = 0;
    FUN_00778d10(uVar5,uVar6,local_28,&local_38);
    FUN_00423b10(&local_38,0xffffffff,0xffffffff);
    uVar5 = FUN_00777cd0();
    uVar6 = FUN_005ffa40(param_2);
    local_68 = CONCAT31(local_68._1_3_,0x40);
    local_60 = 0x100;
    local_58 = 0;
    FUN_00778d10(uVar5,uVar6,local_28,&local_38);
  }
  return;
}

