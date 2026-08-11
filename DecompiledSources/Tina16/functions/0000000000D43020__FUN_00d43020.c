/* Ghidra address: 00d43020 */
/* Ghidra symbol: FUN_00d43020 */


void FUN_00d43020(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_98 [32];
  undefined4 *local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined1 *local_50;
  undefined1 local_48 [12];
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c [2];
  int local_24;
  undefined4 local_1c;
  
  local_50 = auStack_98;
  local_58 = 0;
  FUN_00d42670(param_1,&local_3c,param_2);
  FUN_00d424f0(param_1,local_2c);
  cVar1 = FUN_00787c60(*(undefined8 *)(param_1 + 0x18));
  if (cVar1 == '\0') {
    plVar3 = (longlong *)FUN_00781840();
    (**(code **)(*plVar3 + 200))(plVar3,local_48,0x25);
  }
  else {
    plVar3 = (longlong *)FUN_00781840();
    (**(code **)(*plVar3 + 200))(plVar3,local_48,0x24);
  }
  uVar4 = FUN_005ffa40(param_2);
  FUN_00d42f90(auStack_98,uVar4,&local_3c);
  uVar4 = FUN_005ffa40(param_2);
  iVar2 = FUN_004230c0(&local_3c);
  local_78._0_4_ = FUN_004230c0(local_2c);
  local_78._0_4_ = (int)local_78 + -2;
  thunk_FUN_041a27b3(uVar4,local_2c[0] + 4,iVar2 + 2,local_24 + -4);
  uVar4 = FUN_005ffa40(param_2);
  FUN_00d42f90(auStack_98,uVar4,local_2c);
  uVar4 = FUN_005ffa40(param_2);
  local_1c = thunk_FUN_03b57162(uVar4);
  uVar4 = FUN_005ffa40(param_2);
  local_78 = (undefined4 *)CONCAT44(local_78._4_4_,local_30);
  thunk_FUN_041a27b3(uVar4,local_3c,local_38,local_34);
  uVar4 = FUN_00781840();
  uVar5 = FUN_005ffa40(param_2);
  local_78 = (undefined4 *)0x0;
  local_70 = 0;
  FUN_00778dc0(uVar4,uVar5,local_48,local_2c);
  uVar4 = FUN_005ffa40(param_2);
  thunk_FUN_0402759f(uVar4,local_1c);
  local_38 = local_38 + 3;
  uVar4 = FUN_00781840();
  uVar5 = FUN_005ffa40(param_2);
  FUN_00787f40(*(undefined8 *)(param_1 + 0x18),&local_58);
  local_78 = &local_3c;
  local_70 = 0x54100;
  local_68 = 0x1fffffff;
  local_60 = 0;
  FUN_00778f70(uVar4,uVar5,local_48,local_58);
  FUN_00414480(&local_58);
  return;
}

