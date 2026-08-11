/* Ghidra address: 00441710 */
/* Ghidra symbol: FUN_00441710 */


undefined8 FUN_00441710(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong local_res10 [3];
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  int local_14;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_10 = 0;
  local_res10[0] = param_2;
  local_14 = FUN_00456870(local_res10,&LAB_00441814);
  if ((0 < local_14) && (*(short *)(local_res10[0] + (longlong)local_14 * 2) == 0x5c)) {
    cVar1 = FUN_00456790(local_res10,&LAB_00441814,local_14 + -1);
    if (cVar1 == '\0') {
      local_14 = local_14 + -1;
    }
  }
  FUN_00414480(&local_10);
  FUN_00416dc0(&local_10,local_res10[0],1,local_14 + 1);
  FUN_00414ad0(param_1,local_10);
  FUN_00414480(&local_10);
  FUN_00414480(&local_10);
  return param_1;
}

