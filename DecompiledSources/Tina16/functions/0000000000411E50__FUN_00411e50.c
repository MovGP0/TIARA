/* Ghidra address: 00411e50 */
/* Ghidra symbol: FUN_00411e50 */


longlong * FUN_00411e50(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong *local_10;
  
  local_20 = auStack_48;
  FUN_00411b30(param_1 + 0x28);
  local_10 = *(longlong **)(param_1 + 0x20);
  if ((local_10 == (longlong *)0x0) || ((longlong *)*local_10 == local_10)) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    FUN_00411ee0(0,local_20);
  }
  else {
    local_10 = (longlong *)**(longlong **)(param_1 + 0x20);
    **(longlong **)(param_1 + 0x20) = *local_10;
    FUN_00411b70(param_1 + 0x28);
  }
  return local_10;
}

