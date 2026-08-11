/* Ghidra address: 0184d200 */
/* Ghidra symbol: FUN_0184d200 */


undefined1 FUN_0184d200(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined1 local_11;
  longlong local_10;
  
  local_20 = auStack_48;
  local_11 = 0;
  FUN_00414480(param_1 + 0x88);
  local_10 = FUN_01834440(&DAT_01834038,1,param_1);
  FUN_018345d0(local_10,*(undefined8 *)(param_1 + 0x130));
  FUN_0181ed90(*(undefined8 *)(local_10 + 0x18),param_2);
  FUN_01836eb0(local_10);
  FUN_00410f20(local_10);
  if (*(longlong *)(param_1 + 0x88) == 0) {
    local_11 = 1;
    FUN_00414480(param_1 + 0x90);
  }
  return local_11;
}

