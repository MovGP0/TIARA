/* Ghidra address: 00b3d540 */
/* Ghidra symbol: FUN_00b3d540 */


void FUN_00b3d540(longlong param_1)

{
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_30;
  int local_24;
  undefined8 local_20;
  int local_14;
  longlong local_10;
  
  local_40 = auStack_68;
  local_10 = 0;
  FUN_00414c70(&local_10,"<html>\r\n");
  local_20 = FUN_00414df0(&local_10);
  local_14 = 0;
  if (local_10 != 0) {
    local_14 = *(int *)(local_10 + -4);
  }
  FUN_004b89e0(*(undefined8 *)(param_1 + 0x10),local_20,(longlong)local_14);
  FUN_00b3c620(param_1);
  FUN_00b3c3a0(param_1);
  FUN_00b3c930(param_1);
  FUN_00b3c7a0(param_1);
  FUN_00414c70(&local_10,"</html>");
  local_30 = FUN_00414df0(&local_10);
  local_24 = 0;
  if (local_10 != 0) {
    local_24 = *(int *)(local_10 + -4);
  }
  FUN_004b89e0(*(undefined8 *)(param_1 + 0x10),local_30,(longlong)local_24);
  FUN_004144d0(&local_10);
  return;
}

