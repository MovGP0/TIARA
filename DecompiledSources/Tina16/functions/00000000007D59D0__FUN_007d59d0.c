/* Ghidra address: 007d59d0 */
/* Ghidra symbol: FUN_007d59d0 */


undefined4 FUN_007d59d0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined4 local_2c;
  undefined8 local_28;
  undefined8 local_20;
  
  local_40 = auStack_68;
  local_28 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  local_20 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  FUN_007d53c0(param_1);
  uVar1 = FUN_007d5700(param_1,param_2,local_28);
  uVar2 = FUN_007d5700(param_1,param_3,local_20);
  local_2c = thunk_FUN_041ce44d(param_1[0x14],uVar1,uVar2);
  FUN_00410f20(local_20);
  FUN_00410f20(local_28);
  (**(code **)(*param_1 + 0x98))(param_1);
  return local_2c;
}

