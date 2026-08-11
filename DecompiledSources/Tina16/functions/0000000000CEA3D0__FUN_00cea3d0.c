/* Ghidra address: 00cea3d0 */
/* Ghidra symbol: FUN_00cea3d0 */


void FUN_00cea3d0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_20 = (longlong *)FUN_00ce8d80(param_1[0x15]);
  cVar1 = (**(code **)(*local_20 + 0x68))(local_20,param_2,param_3);
  if (((cVar1 != '\0') && (cVar1 = (**(code **)(*param_1 + 0xa0))(param_1,local_20), cVar1 != '\0'))
     && (cVar1 = FUN_00ce8d90(param_1[0x15],local_20,param_3,1), cVar1 != '\0')) {
    local_20 = (longlong *)0x0;
    FUN_00cea490(0,local_30);
    return;
  }
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x20))(local_20,0);
    FUN_00410f20(local_20);
  }
  return;
}

