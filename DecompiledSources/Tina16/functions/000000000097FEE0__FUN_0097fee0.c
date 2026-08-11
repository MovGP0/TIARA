/* Ghidra address: 0097fee0 */
/* Ghidra symbol: FUN_0097fee0 */


void FUN_0097fee0(longlong param_1,longlong *param_2)

{
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_20;
  
  local_30 = auStack_58;
  if ((param_2 != (longlong *)0x0) && (*(longlong *)(param_1 + 0x80) != 0)) {
    local_20 = (**(code **)(*param_2 + 0x88))(param_2,param_1);
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0x90))(*(longlong **)(param_1 + 0x80),local_20);
    FUN_00410f20(local_20);
  }
  return;
}

