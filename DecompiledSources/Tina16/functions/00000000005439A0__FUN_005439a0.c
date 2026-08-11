/* Ghidra address: 005439a0 */
/* Ghidra symbol: FUN_005439a0 */


undefined8 FUN_005439a0(undefined8 param_1,ulonglong param_2)

{
  ushort uVar1;
  ulonglong local_res10 [3];
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined4 local_34;
  longlong local_30;
  ulonglong local_28;
  int local_1c;
  longlong local_18;
  longlong local_10;
  
  local_50 = auStack_78;
  local_res10[0] = param_2;
  uVar1 = FUN_0053c4f0(local_res10);
  local_1c = uVar1 - 2;
  if (local_1c == 0) {
    FUN_00419430(param_1,&DAT_0052f588);
  }
  else {
    local_28 = local_res10[0] + (longlong)local_1c;
    local_10 = FUN_00564e30(&PTR_FUN_00544518,1);
    if (local_res10[0] < local_28) {
      do {
        local_18 = FUN_005437d0(auStack_78,local_res10);
        if (local_18 != 0) {
          local_30 = local_18;
          local_34 = FUN_00597e50(local_10 + 8,&local_30);
        }
      } while (local_res10[0] < local_28);
    }
    FUN_00565cf0(&DAT_00534c70,param_1,local_10);
    FUN_00410f20(local_10);
  }
  return param_1;
}

