/* Ghidra address: 01bda6e0 */
/* Ghidra symbol: FUN_01bda6e0 */


undefined4 FUN_01bda6e0(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
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
  
  local_98 = 0;
  local_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  uStack_c0 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  local_68 = 0;
  local_70 = 0;
  local_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_40 = *param_2;
  uStack_38 = param_2[1];
  uStack_30 = param_2[2];
  FUN_0046bd60(&local_40);
  *param_3 = 0;
  local_d4 = 0;
  FUN_004685b0(&local_60,0,1);
  cVar1 = FUN_0046f320(&local_40,&local_60);
  if (cVar1 == '\0') {
    lVar3 = FUN_01bfaa70(*(undefined8 *)(param_1 + 0x18));
    FUN_004685b0(&local_90,*(undefined4 *)(*(longlong *)(lVar3 + 0x10) + 0x10),0xfffffffffffffffc);
    cVar1 = FUN_0046f3b0(&local_40,&local_90);
    if (cVar1 == '\0') {
      uVar4 = FUN_01bfaa70(*(undefined8 *)(param_1 + 0x18));
      FUN_00461840(&local_b8,&local_40);
      FUN_004685b0(&local_d0,1,1);
      FUN_0046f1e0(&local_b8,&local_d0);
      uVar2 = FUN_00462650(&local_b8);
      uVar4 = FUN_01bfb960(uVar4,uVar2);
      FUN_01bfd990(uVar4,&local_a0);
      FUN_007e8d80(&local_98,local_a0);
      FUN_004168e0(param_3,local_98);
    }
    else {
      local_d4 = 1;
    }
  }
  else {
    lVar3 = *(longlong *)(param_1 + 0x18);
    cVar1 = FUN_004113d0(lVar3,&PTR_FUN_01bf1690);
    if (cVar1 == '\0') {
      cVar1 = FUN_004113d0(lVar3,&PTR_FUN_01bee940);
      if (cVar1 != '\0') {
        FUN_0064dd90(*(undefined8 *)(lVar3 + 0x18),&local_78);
      }
    }
    else {
      FUN_01bfd990(lVar3,&local_70);
      FUN_007e8d80(&local_68,local_70);
      FUN_004168e0(param_3,local_68);
    }
  }
  FUN_00417840(&local_d0,&DAT_004013f0,2);
  FUN_00414560(&local_a0,2);
  FUN_00460ba0(&local_90);
  FUN_00414480(&local_78);
  FUN_00414560(&local_70,2);
  FUN_00460ba0(&local_60);
  FUN_00460ba0(&local_40);
  return local_d4;
}

