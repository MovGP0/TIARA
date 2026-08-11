/* Ghidra address: 008666b0 */
/* Ghidra symbol: FUN_008666b0 */


undefined4
FUN_008666b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  longlong *local_20 [2];
  
  local_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  local_20[0] = (longlong *)0x0;
  *param_4 = 0;
  FUN_0041b800(local_20);
  uVar1 = FUN_00866910(param_1,param_2,param_3,local_20);
  FUN_0041d630(uVar1);
  if (local_20[0] == (longlong *)0x0) {
    FUN_00414480(param_4);
  }
  else {
    uVar2 = FUN_00414480(&local_38);
    uVar1 = (**(code **)(*local_20[0] + 0x20))(local_20[0],uVar2);
    FUN_0041d630(uVar1);
    FUN_00468a10(&local_50,local_38);
    FUN_0046c3f0(param_4,&local_50);
  }
  local_30 = 0;
  FUN_00460ba0(&local_50);
  FUN_00414480(&local_38);
  FUN_0041b800(local_20);
  return local_30;
}

