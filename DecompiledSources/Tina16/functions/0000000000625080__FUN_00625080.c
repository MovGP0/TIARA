/* Ghidra address: 00625080 */
/* Ghidra symbol: FUN_00625080 */


undefined8 FUN_00625080(undefined8 param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong *local_10;
  
  local_48 = 0;
  local_50 = 0;
  local_58 = 0;
  local_40[0] = 0;
  local_10 = (longlong *)0x0;
  local_18 = 0;
  local_20 = 0;
  local_28 = 0;
  local_2c = 0;
  uVar2 = FUN_0041b800(&local_10);
  iVar1 = thunk_FUN_03a188bc(0,uVar2);
  if (iVar1 == 0) {
    uVar2 = FUN_00414520(&local_18);
    (**(code **)(*local_10 + 0x20))(local_10,uVar2);
    uVar2 = FUN_00414520(&local_20);
    (**(code **)(*local_10 + 0x28))(local_10,uVar2);
    uVar2 = FUN_00414520(&local_28);
    (**(code **)(*local_10 + 0x30))(local_10,uVar2);
    (**(code **)(*local_10 + 0x38))(local_10,&local_2c);
  }
  if (param_2 == -0x5fffbffc) {
    FUN_004168b0(local_40,local_20);
    local_60 = FUN_0044d9f0(&PTR_FUN_00434b98,1,local_40[0],local_2c);
  }
  else {
    FUN_004168b0(&local_48,local_20);
    FUN_004168b0(&local_50,local_18);
    FUN_004168b0(&local_58,local_28);
    local_60 = FUN_00624440(&PTR_FUN_00620bb8,1,local_48,param_2,local_50,local_58,local_2c);
  }
  FUN_00414560(&local_58,4);
  FUN_004145c0(&local_28,3);
  FUN_0041b800(&local_10);
  return local_60;
}

