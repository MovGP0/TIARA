/* Ghidra address: 00ce9000 */
/* Ghidra symbol: FUN_00ce9000 */


longlong * FUN_00ce9000(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_28 = (longlong *)0x0;
  local_20 = (longlong *)FUN_00ce8d80(param_1);
  cVar1 = (**(code **)(*local_20 + 0x60))(local_20,param_2);
  if (cVar1 != '\0') {
    FUN_00ce9860(param_1,1);
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x30),local_20);
    local_28 = local_20;
    local_20 = (longlong *)0x0;
    FUN_00ce98a0(param_1,1);
  }
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + 0x20))(local_20,0);
    FUN_00410f20(local_20);
  }
  return local_28;
}

