/* Ghidra address: 00ce9330 */
/* Ghidra symbol: FUN_00ce9330 */


longlong * FUN_00ce9330(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_28 = (longlong *)0x0;
  local_20 = (longlong *)FUN_00ce8d80(param_1);
  cVar1 = (**(code **)(*local_20 + 0x68))(local_20,param_2,param_3);
  if (cVar1 != '\0') {
    cVar1 = FUN_00ce8d90(param_1,local_20,param_3,1);
    if (cVar1 != '\0') {
      local_28 = local_20;
      local_20 = (longlong *)0x0;
    }
  }
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x20))(local_20,0);
    FUN_00410f20(local_20);
  }
  return local_28;
}

