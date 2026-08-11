/* Ghidra address: 00539680 */
/* Ghidra symbol: FUN_00539680 */


undefined1 FUN_00539680(longlong param_1,byte *param_2,undefined8 param_3)

{
  byte bVar1;
  undefined8 uVar2;
  undefined2 *puVar3;
  undefined1 local_a9;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined2 local_58 [4];
  undefined2 local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined1 local_19 [9];
  
  local_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 0;
  local_a8 = 0;
  local_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  local_80 = 0;
  local_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  FUN_00417580(param_3,&DAT_00527bf8);
  local_19[0] = *(undefined1 *)(param_1 + 0x10);
  bVar1 = *param_2;
  if (bVar1 < 0xb) {
    if (bVar1 == 10) {
      puVar3 = (undefined2 *)FUN_00587f10(param_2);
      FUN_004173b0(&local_28,local_19,1,*puVar3);
      uVar2 = FUN_00417740(param_3,&DAT_00527bf8);
      FUN_00538080(&local_28,param_2,uVar2);
    }
    else if (bVar1 == 2) {
      uVar2 = FUN_00417740(param_3,&DAT_00527bf8);
      FUN_00538170(local_19[0],param_2,uVar2);
    }
    else {
      if (bVar1 != 5) goto LAB_00539881;
      local_50 = CONCAT11(local_19[0],1);
      local_58[0] = local_50;
      FUN_005607a0(&local_48,local_58);
      FUN_00417c40(param_3,&local_48,&DAT_00527bf8);
    }
  }
  else if (bVar1 == 0xb) {
    FUN_00415e30(&local_80,local_19[0]);
    FUN_00560800(&local_78,local_80);
    FUN_00417c40(param_3,&local_78,&DAT_00527bf8);
  }
  else {
    if (bVar1 != 0x12) {
LAB_00539881:
      local_a9 = 0;
      goto LAB_0053988e;
    }
    FUN_00416760(&local_a8,local_19[0]);
    FUN_00560840(&local_a0,local_a8);
    FUN_00417c40(param_3,&local_a0,&DAT_00527bf8);
  }
  local_a9 = 1;
LAB_0053988e:
  FUN_00414480(&local_a8);
  FUN_00417740(&local_a0,&DAT_00527bf8);
  FUN_00414520(&local_80);
  FUN_00417740(&local_78,&DAT_00527bf8);
  FUN_00417740(&local_48,&DAT_00527bf8);
  FUN_004144d0(&local_28);
  return local_a9;
}

