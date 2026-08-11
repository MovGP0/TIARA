/* Ghidra address: 01bdb160 */
/* Ghidra symbol: FUN_01bdb160 */


undefined4 FUN_01bdb160(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined4 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  local_90 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_40 = *param_2;
  uStack_38 = param_2[1];
  uStack_30 = param_2[2];
  FUN_0046bd60(&local_40);
  *param_3 = 0;
  FUN_004685b0(&local_60,0,1);
  cVar2 = FUN_0046f320(&local_40,&local_60);
  if (cVar2 == '\0') {
    lVar4 = FUN_01bfaa70(*(undefined8 *)(param_1 + 0x18));
    FUN_004685b0(&local_78,*(undefined4 *)(*(longlong *)(lVar4 + 0x10) + 0x10),0xfffffffffffffffc);
    cVar2 = FUN_0046f3b0(&local_40,&local_78);
    if (cVar2 == '\0') {
      uVar1 = *(undefined8 *)(param_1 + 0x18);
      uVar5 = FUN_01bfaa70(uVar1);
      FUN_00461840(&local_90,&local_40);
      FUN_004685b0(&local_a8,1,1);
      FUN_0046f1e0(&local_90,&local_a8);
      uVar3 = FUN_00462650(&local_90);
      uVar5 = FUN_01bfb960(uVar5,uVar3);
      lVar4 = FUN_01bd9c90(&LAB_01bd95e0,1,uVar1,uVar5);
      if (lVar4 == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = lVar4 + 0x28;
      }
      FUN_0041b840(param_3,lVar4);
      local_ac = 0;
    }
    else {
      FUN_0041b800(param_3);
      local_ac = 1;
    }
  }
  else {
    local_ac = 0x80070057;
  }
  FUN_00417840(&local_a8,&DAT_004013f0,4);
  FUN_00460ba0(&local_40);
  return local_ac;
}

