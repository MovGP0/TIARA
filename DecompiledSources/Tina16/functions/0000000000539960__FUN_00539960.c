/* Ghidra address: 00539960 */
/* Ghidra symbol: FUN_00539960 */


undefined1 FUN_00539960(longlong param_1,byte *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  undefined1 local_1a9;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 local_158 [256];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_1a0 = 0;
  uStack_198 = 0;
  uStack_190 = 0;
  uStack_188 = 0;
  local_1a8 = 0;
  local_178 = 0;
  uStack_170 = 0;
  uStack_168 = 0;
  uStack_160 = 0;
  local_180 = 0;
  local_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  local_58 = 0;
  local_30[0] = 0;
  local_20 = 0;
  FUN_00417580(param_3,&DAT_00527bf8);
  uVar2 = *(undefined2 *)(param_1 + 0x10);
  bVar1 = *param_2;
  if (bVar1 < 0xb) {
    if (bVar1 == 10) {
      FUN_00416780(local_30,uVar2);
      uVar3 = FUN_00416740(local_30[0]);
      puVar4 = (undefined2 *)FUN_00587f10(param_2);
      FUN_004173c0(&local_20,uVar3,1,*puVar4);
      uVar3 = FUN_00417740(param_3,&DAT_00527bf8);
      FUN_00538080(&local_20,param_2,uVar3);
    }
    else if (bVar1 == 5) {
      FUN_00416780(&local_58,uVar2);
      FUN_00416910(local_158,local_58,0xff);
      FUN_005607a0(&local_50,local_158);
      FUN_00417c40(param_3,&local_50,&DAT_00527bf8);
    }
    else {
      if (bVar1 != 9) goto LAB_00539b7f;
      uVar3 = FUN_00417740(param_3,&DAT_00527bf8);
      FUN_00538170(uVar2,param_2,uVar3);
    }
  }
  else if (bVar1 == 0xb) {
    FUN_00415e60(&local_180,uVar2);
    FUN_00560800(&local_178,local_180);
    FUN_00417c40(param_3,&local_178,&DAT_00527bf8);
  }
  else {
    if (bVar1 != 0x12) {
LAB_00539b7f:
      local_1a9 = 0;
      goto LAB_00539b8c;
    }
    FUN_00416780(&local_1a8,uVar2);
    FUN_00560840(&local_1a0,local_1a8);
    FUN_00417c40(param_3,&local_1a0,&DAT_00527bf8);
  }
  local_1a9 = 1;
LAB_00539b8c:
  FUN_00414480(&local_1a8);
  FUN_00417740(&local_1a0,&DAT_00527bf8);
  FUN_00414520(&local_180);
  FUN_00417740(&local_178,&DAT_00527bf8);
  FUN_00414480(&local_58);
  FUN_00417740(&local_50,&DAT_00527bf8);
  FUN_00414480(local_30);
  FUN_004144d0(&local_20);
  return local_1a9;
}

