/* Ghidra address: 015b4110 */
/* Ghidra symbol: FUN_015b4110 */


undefined8
FUN_015b4110(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
            undefined8 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_20 = (longlong *)FUN_015a9d60(param_1,1,param_5);
  (**(code **)(*local_20 + 0x40))(local_20);
  (**(code **)(*local_20 + 0x48))(local_20,param_3,param_4);
  (**(code **)(*local_20 + 0x50))(local_20);
  uVar2 = (**(code **)(*local_20 + 0x58))(local_20);
  uVar1 = (**(code **)(*local_20 + 0x60))(*local_20);
  FUN_015ab6d0(param_2,uVar2,uVar1,param_6);
  FUN_00410f20(local_20);
  return param_2;
}

