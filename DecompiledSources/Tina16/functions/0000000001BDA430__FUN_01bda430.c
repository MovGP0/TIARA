/* Ghidra address: 01bda430 */
/* Ghidra symbol: FUN_01bda430 */


undefined4 FUN_01bda430(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  uStack_a0 = 0;
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
  local_b4 = 1;
  FUN_004685b0(&local_60,0,1);
  cVar1 = FUN_0046f320(&local_40,&local_60);
  if (cVar1 == '\0') {
    uVar5 = FUN_01bfaa70(*(undefined8 *)(param_1 + 0x18));
    FUN_00461840(&local_98,&local_40);
    FUN_004685b0(&local_b0,1,1);
    FUN_0046f1e0(&local_98,&local_b0);
    uVar3 = FUN_00462650(&local_98);
    uVar5 = FUN_01bfb960(uVar5,uVar3);
    lVar4 = FUN_01bfd980(uVar5);
    FUN_007dc700(&local_80,*(undefined2 *)(lVar4 + 0x102));
    FUN_004168e0(param_3,local_80);
    uVar2 = 0;
    if (*param_3 != 0) {
      uVar2 = *(uint *)(*param_3 + -4) >> 1;
    }
    if (uVar2 != 0) {
      local_b4 = 0;
    }
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    cVar1 = FUN_004113d0(uVar5,&PTR_FUN_01bee940);
    if (cVar1 == '\0') {
      lVar4 = FUN_01bfd980(uVar5);
      if (lVar4 == 0) {
        FUN_01bfd990(*(undefined8 *)(param_1 + 0x18),&local_70);
        FUN_007e8e80(&local_68,local_70);
        FUN_004168e0(param_3,local_68);
      }
      else {
        lVar4 = FUN_01bfd980(*(undefined8 *)(param_1 + 0x18));
        FUN_007dc700(&local_78,*(undefined2 *)(lVar4 + 0x102));
        FUN_004168e0(param_3,local_78);
      }
      uVar2 = 0;
      if (*param_3 != 0) {
        uVar2 = *(uint *)(*param_3 + -4) >> 1;
      }
      if (uVar2 != 0) {
        local_b4 = 0;
      }
    }
    else {
      FUN_00414520(param_3);
    }
  }
  FUN_00417840(&local_b0,&DAT_004013f0,2);
  FUN_00414560(&local_80,4);
  FUN_00460ba0(&local_60);
  FUN_00460ba0(&local_40);
  return local_b4;
}

