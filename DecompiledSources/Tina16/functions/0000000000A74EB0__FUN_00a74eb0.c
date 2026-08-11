/* Ghidra address: 00a74eb0 */
/* Ghidra symbol: FUN_00a74eb0 */


undefined4 FUN_00a74eb0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_28;
  undefined4 local_20 [4];
  
  local_30 = auStack_58;
  local_20[0] = 0xffffffff;
  cVar1 = (**(code **)(*param_1 + 0x140))(param_1,param_2,local_20);
  if (cVar1 != '\0') {
    local_28 = (longlong *)FUN_00a75120(param_1,local_20[0]);
    cVar1 = (**(code **)(*local_28 + 8))(local_28);
    if (cVar1 != '\0') {
      FUN_00410f20(local_28);
    }
    (**(code **)(*param_1 + 0x98))(param_1,local_20[0]);
  }
  uVar2 = FUN_004b5850(param_1,param_2,param_3);
  return uVar2;
}

