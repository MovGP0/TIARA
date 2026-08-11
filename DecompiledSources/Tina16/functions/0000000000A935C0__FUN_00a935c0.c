/* Ghidra address: 00a935c0 */
/* Ghidra symbol: FUN_00a935c0 */


undefined8 FUN_00a935c0(longlong param_1,undefined8 param_2,byte param_3)

{
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  local_40 = auStack_68;
  local_30 = 0;
  uStack_28 = 0;
  uStack_20 = 0;
  if (*(longlong *)(param_1 + 0x38) == 0) {
    FUN_00460ba0(&local_30);
    FUN_00460b80(&local_30);
    FUN_00461840(param_2,&local_30);
    FUN_00460ba0(&local_30);
  }
  else {
    local_40 = auStack_68;
    FUN_00461840(param_2,*(longlong *)(param_1 + 0x38) + 0x78 + (ulonglong)param_3 * 0x18);
  }
  FUN_00460ba0(&local_30);
  return param_2;
}

