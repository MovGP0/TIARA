/* Ghidra address: 01bda020 */
/* Ghidra symbol: FUN_01bda020 */


bool FUN_01bda020(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_40 = *param_2;
  uStack_38 = param_2[1];
  uStack_30 = param_2[2];
  FUN_0046bd60(&local_40);
  *param_3 = 0;
  FUN_004685b0(&local_60,0,1);
  cVar1 = FUN_0046f320(&local_40,&local_60);
  if (cVar1 == '\0') {
    uVar4 = FUN_01bfaa70(*(undefined8 *)(param_1 + 0x18));
    FUN_00461840(&local_90,&local_40);
    FUN_004685b0(&local_a8,1,1);
    FUN_0046f1e0(&local_90,&local_a8);
    uVar2 = FUN_00462650(&local_90);
    uVar4 = FUN_01bfb960(uVar4,uVar2);
    lVar5 = FUN_01bfd980(uVar4);
    FUN_00648780(&local_78,*(undefined8 *)(lVar5 + 0xf8));
    FUN_004168e0(param_3,local_78);
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x18);
    cVar1 = FUN_004113d0(lVar5,&PTR_FUN_01bee940);
    if (cVar1 == '\0') {
      FUN_00648780(&local_70,*(undefined8 *)(*(longlong *)(lVar5 + 0x80) + 0xf0));
      FUN_004168e0(param_3,local_70);
    }
    else {
      FUN_00648780(&local_68,*(undefined8 *)(*(longlong *)(lVar5 + 0x18) + 0xf0));
      FUN_004168e0(param_3,local_68);
    }
  }
  uVar3 = 0;
  if (*param_3 != 0) {
    uVar3 = *(uint *)(*param_3 + -4) >> 1;
  }
  FUN_00417840(&local_a8,&DAT_004013f0,2);
  FUN_00414560(&local_78,3);
  FUN_00460ba0(&local_60);
  FUN_00460ba0(&local_40);
  return uVar3 == 0;
}

