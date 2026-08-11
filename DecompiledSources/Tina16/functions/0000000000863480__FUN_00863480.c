/* Ghidra address: 00863480 */
/* Ghidra symbol: FUN_00863480 */


undefined2 FUN_00863480(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined2 local_52;
  undefined8 local_50;
  undefined8 local_48;
  longlong *local_40;
  longlong *local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined2 local_20 [8];
  
  local_38 = (longlong *)0x0;
  local_48 = 0;
  local_50 = 0;
  local_40 = (longlong *)0x0;
  local_28 = 0;
  local_30 = 0;
  if (*(longlong *)(param_1 + 0x18) == 0) {
    (**(code **)(PTR_PTR_01e1bf88 + 0x10))(PTR_PTR_01e1bf88,&local_40);
    uVar2 = FUN_0041b800(&local_38);
    uVar1 = (**(code **)(*local_40 + 0x160))(local_40,uVar2);
    FUN_0041d630(uVar1);
    FUN_004168e0(&local_48,param_2);
    FUN_004168e0(&local_50,param_3);
    uVar1 = (**(code **)(*local_38 + 0x38))(local_38,local_48,local_50,local_20);
    FUN_0041d630(uVar1);
    local_52 = local_20[0];
  }
  else {
    FUN_004168e0(&local_28,param_2);
    FUN_004168e0(&local_30,param_3);
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x38))
                      (*(longlong **)(param_1 + 0x18),local_28,local_30,local_20);
    FUN_0041d630(uVar1);
    local_52 = local_20[0];
  }
  FUN_004145c0(&local_50,2);
  FUN_0041b800(&local_40);
  FUN_0041b800(&local_38);
  FUN_004145c0(&local_30,2);
  return local_52;
}

