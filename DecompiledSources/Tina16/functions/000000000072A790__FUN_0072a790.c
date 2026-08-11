/* Ghidra address: 0072a790 */
/* Ghidra symbol: FUN_0072a790 */


void FUN_0072a790(undefined8 param_1)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_20 = (longlong *)FUN_0072a750(param_1);
  while( true ) {
    cVar1 = FUN_0072a570(local_20);
    if (cVar1 == '\0') break;
    local_28 = (longlong *)FUN_0072a550(local_20);
    (**(code **)(*local_28 + 0x60))(local_28);
  }
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + -0x20))(local_20,1);
  }
  return;
}

