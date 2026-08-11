/* Ghidra address: 00ce70a0 */
/* Ghidra symbol: FUN_00ce70a0 */


void FUN_00ce70a0(longlong param_1,byte param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 8) != 0) {
    local_10 = FUN_00ce9860(*(longlong *)(param_1 + 8),1);
    FUN_004aee50(local_10,param_1,0);
    FUN_00ce98a0(*(undefined8 *)(param_1 + 8),1);
  }
  FUN_004b17c0(param_1,param_2 & 0xfc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

