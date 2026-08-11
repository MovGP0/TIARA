/* Ghidra address: 0072a690 */
/* Ghidra symbol: FUN_0072a690 */


longlong FUN_0072a690(undefined8 param_1,int param_2)

{
  char cVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_30;
  longlong local_28;
  longlong *local_20;
  
  local_40 = auStack_68;
  local_28 = 0;
  local_20 = (longlong *)FUN_0072a750(param_1);
  do {
    cVar1 = FUN_0072a570(local_20);
    if (cVar1 == '\0') {
      if (local_20 == (longlong *)0x0) {
        return local_28;
      }
      (**(code **)(*local_20 + -0x20))(local_20,1);
      return local_28;
    }
    local_30 = FUN_0072a550(local_20);
  } while (*(int *)(local_30 + 0x2c) != param_2);
  local_28 = local_30;
  FUN_0072a720(0,local_40);
  return local_28;
}

