/* Ghidra address: 01857e30 */
/* Ghidra symbol: FUN_01857e30 */


longlong *
FUN_01857e30(undefined8 param_1,int param_2,int param_3,undefined1 param_4,undefined8 param_5,
            undefined1 param_6)

{
  undefined4 uVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_20 = (longlong *)FUN_00a09e20(&PTR_FUN_00a09250,1);
  uVar1 = FUN_018580c0(param_1,param_4);
  FUN_00a0bcb0(local_20,uVar1);
  *(undefined1 *)(local_20 + 0xe) = param_6;
  if ((param_2 != 0) && (param_3 != 0)) {
    local_28 = (longlong *)FUN_00608c80(&PTR_FUN_005f92e8,1);
    (**(code **)(*local_28 + 0x88))(local_28,param_2);
    (**(code **)(*local_28 + 0x70))(local_28,param_3);
    (**(code **)(*local_20 + 0x10))(local_20,local_28);
    FUN_00410f20(local_28);
  }
  return local_20;
}

