/* Ghidra address: 007d5ad0 */
/* Ghidra symbol: FUN_007d5ad0 */


undefined4 FUN_007d5ad0(longlong *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined4 local_2c;
  undefined8 local_28;
  longlong *local_20;
  
  local_40 = auStack_68;
  local_28 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  if ((*(char *)((longlong)param_1 + 0xa9) == '\0') || (param_3 == -1)) {
    uVar1 = FUN_007d56e0(param_1);
    uVar2 = FUN_007d5700(param_1,param_2,local_28);
    local_2c = thunk_FUN_041ce44d(uVar1,uVar2,0);
  }
  else {
    local_20 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
    (**(code **)(*local_20 + 0x10))(local_20,param_2);
    FUN_0060be30(local_20,param_3);
    FUN_007d53c0(param_1);
    uVar1 = FUN_007d5700(param_1,param_2,local_28);
    uVar2 = (**(code **)(*local_20 + 0xf0))(local_20);
    uVar2 = FUN_007d56b0(param_1,uVar2);
    local_2c = thunk_FUN_041ce44d(param_1[0x14],uVar1,uVar2);
    FUN_00410f20(local_20);
  }
  FUN_00410f20(local_28);
  (**(code **)(*param_1 + 0x98))(param_1);
  return local_2c;
}

