/* Ghidra address: 00558860 */
/* Ghidra symbol: FUN_00558860 */


undefined8 FUN_00558860(longlong *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_20 = 0;
  local_28 = 0;
  plVar2 = (longlong *)(**(code **)(*param_1 + 0x20))(param_1);
  if (plVar2 == (longlong *)0x0) {
    (**(code **)(*param_1 + 0x10))(param_1,&local_20);
    uVar1 = (**(code **)(*param_1 + 0x28))(param_1);
    FUN_0043fba0(&local_28,uVar1,2);
    FUN_00416cd0(param_2,3,local_20,&DAT_005589c8,local_28);
  }
  else {
    (**(code **)(*param_1 + 0x10))(param_1,&local_30);
    (**(code **)(*plVar2 + 0x10))(plVar2,&local_38);
    uVar1 = (**(code **)(*param_1 + 0x28))(param_1);
    FUN_0043fba0(&local_40,uVar1,2);
    FUN_00416cd0(param_2,5,local_30,&LAB_005589dc,local_38,&DAT_005589c8,local_40);
  }
  FUN_00414560(&local_40,5);
  return param_2;
}

