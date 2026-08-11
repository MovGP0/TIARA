/* Ghidra address: 00d0d580 */
/* Ghidra symbol: FUN_00d0d580 */


undefined8
FUN_00d0d580(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_24;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_20 = (longlong *)FUN_00cd6090(param_1,1,param_4);
  (**(code **)(*local_20 + 0x40))(local_20);
  local_24 = 0;
  if (param_3 != 0) {
    local_24 = *(undefined4 *)(param_3 + -4);
  }
  uVar2 = FUN_00415ab0(param_3);
  (**(code **)(*local_20 + 0x48))(local_20,uVar2,local_24);
  (**(code **)(*local_20 + 0x50))(local_20);
  uVar2 = (**(code **)(*local_20 + 0x58))(local_20);
  uVar1 = (**(code **)(*local_20 + 0x60))(*local_20);
  FUN_00cd7480(param_2,uVar2,uVar1,param_5);
  FUN_00410f20(local_20);
  return param_2;
}

