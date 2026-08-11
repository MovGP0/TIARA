/* Ghidra address: 0184ce90 */
/* Ghidra symbol: FUN_0184ce90 */


undefined1 FUN_0184ce90(longlong param_1)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_30;
  undefined1 local_21;
  undefined8 local_20;
  
  local_30 = auStack_58;
  local_38 = 0;
  local_21 = 0;
  FUN_00414480(param_1 + 0x88);
  local_20 = FUN_01834440(&DAT_01834038,1,param_1);
  FUN_018345d0(local_20,*(undefined8 *)(param_1 + 0x130));
  (**(code **)(**(longlong **)(param_1 + 0xb8) + 0x38))(*(longlong **)(param_1 + 0xb8),&local_38);
  cVar1 = FUN_01836a30(local_20,local_38);
  if (cVar1 != '\0') {
    FUN_01836eb0(local_20);
  }
  FUN_00410f20(local_20);
  if (*(longlong *)(param_1 + 0x88) == 0) {
    local_21 = 1;
    FUN_00414480(param_1 + 0x90);
  }
  FUN_00414480(&local_38);
  return local_21;
}

