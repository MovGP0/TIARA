/* Ghidra address: 008f8040 */
/* Ghidra symbol: FUN_008f8040 */


void FUN_008f8040(longlong *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int local_30 [2];
  undefined1 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  if (param_2 < 0xd800) {
    (**(code **)(*param_1 + 0x18))(param_1,param_2);
  }
  else if (param_2 < 0xe000) {
    FUN_0041ddd0(&local_20,PTR_DAT_02001420);
    local_28 = 0;
    local_30[0] = param_2;
    uVar3 = FUN_0044d530(&PTR_FUN_00436080,1,local_20,local_30,0);
    FUN_004134c0(uVar3);
  }
  else if (param_2 < 0x10000) {
    (**(code **)(*param_1 + 0x18))(param_1,param_2);
  }
  else {
    uVar1 = FUN_008f75e0(param_2);
    uVar2 = FUN_008f75f0(param_2);
    (**(code **)(*param_1 + 0x18))(param_1,uVar1);
    (**(code **)(*param_1 + 0x18))(param_1,uVar2);
  }
  FUN_00414480(&local_20);
  return;
}

