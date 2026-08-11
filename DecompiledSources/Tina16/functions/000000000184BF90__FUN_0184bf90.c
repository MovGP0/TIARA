/* Ghidra address: 0184bf90 */
/* Ghidra symbol: FUN_0184bf90 */


void FUN_0184bf90(longlong param_1)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = auStack_48;
  if (*(longlong *)(param_1 + 0xb0) != 0) {
    local_10 = FUN_01834440(&DAT_01834038,1,*(undefined8 *)(param_1 + 0x98));
    local_18 = FUN_01838880(local_10,*(undefined8 *)(param_1 + 0xb0),*(undefined8 *)(param_1 + 0x98)
                            ,0);
    FUN_0184b6d0(param_1,local_18);
    FUN_00410f20(local_18);
    FUN_00410f20(local_10);
    FUN_00410f20(*(undefined8 *)(param_1 + 0xb0));
    *(undefined8 *)(param_1 + 0xb0) = 0;
  }
  return;
}

