/* Ghidra address: 00895250 */
/* Ghidra symbol: FUN_00895250 */


void FUN_00895250(longlong *param_1,undefined8 param_2,undefined8 param_3,int param_4,
                 undefined4 param_5,undefined8 param_6,undefined2 param_7,char param_8)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined2 local_98;
  undefined2 local_96;
  undefined1 local_94 [4];
  undefined1 local_90 [128];
  
  local_a8 = 0;
  local_a0 = 0;
  FUN_0040d200(&local_98,0x80,0);
  if (param_8 == '\0') {
    local_98 = 2;
    FUN_00891ef0(param_1,param_6,local_94,0);
    local_96 = (**(code **)PTR_PTR_02002a88)(param_7);
    uVar3 = 0x10;
  }
  else if (param_8 == '\x01') {
    local_98 = 0x17;
    FUN_00891ef0(param_1,param_6,local_90,1);
    local_96 = (**(code **)PTR_PTR_02002a88)(param_7);
    uVar3 = 0x1c;
  }
  else {
    uVar3 = 0;
    FUN_0089bf30(param_1);
  }
  iVar1 = (**(code **)PTR_PTR_020027d8)(param_2,param_3,param_4,param_5,&local_98,uVar3);
  if (iVar1 == -1) {
    iVar1 = (**(code **)(*param_1 + 0x80))(param_1);
    if (iVar1 == 0x2738) {
      FUN_0041ddd0(&local_a0,PTR_PTR_020033d8);
      uVar2 = FUN_0086dfd0(&PTR_FUN_0086d8c0,1,local_a0);
      FUN_004134c0(uVar2);
    }
    else {
      FUN_0089ca80(param_1);
    }
  }
  else if (iVar1 != param_4) {
    FUN_0041ddd0(&local_a8,PTR_PTR_02004e88);
    uVar2 = FUN_0086dfd0(&PTR_FUN_0086da08,1,local_a8);
    FUN_004134c0(uVar2);
  }
  FUN_00414560(&local_a8,2);
  return;
}

