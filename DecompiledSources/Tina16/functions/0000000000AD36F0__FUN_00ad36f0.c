/* Ghidra address: 00ad36f0 */
/* Ghidra symbol: FUN_00ad36f0 */


undefined1 FUN_00ad36f0(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  short sVar1;
  undefined4 uVar2;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  int local_34;
  int local_30;
  int local_2c;
  double local_28;
  int local_20;
  int local_1c;
  short *local_18;
  undefined1 local_9;
  
  local_40 = auStack_68;
  local_18 = (short *)0x0;
  local_9 = 0;
  FUN_0043ea00(&local_18,param_2);
  local_2c = 0;
  if (local_18 != (short *)0x0) {
    local_2c = *(int *)(local_18 + -2);
  }
  local_1c = local_2c;
  if (0 < local_2c) {
    if (local_18[(longlong)local_2c + -1] == 0x25) {
      local_30 = 0;
      if (local_18 != (short *)0x0) {
        local_30 = *(int *)(local_18 + -2);
      }
      FUN_004169f0(&local_18,local_30 + -1);
      local_1c = local_1c + -1;
    }
    else if (local_18[(longlong)local_2c + -1] == 0x2a) {
      local_34 = 0;
      if (local_18 != (short *)0x0) {
        local_34 = *(int *)(local_18 + -2);
      }
      FUN_004169f0(&local_18,local_34 + -1);
      local_1c = local_1c + -1;
      if (local_1c == 0) {
        *param_3 = 1;
      }
    }
    if ((0 < local_1c) &&
       (((sVar1 = *local_18, sVar1 == 0x2b || ((ushort)(sVar1 - 0x2dU) < 2)) ||
        ((ushort)(sVar1 - 0x30U) < 10)))) {
      local_28 = (double)FUN_00410100(local_18,&local_20);
      if (local_20 == 0) {
        if (-2147483647.0 <= local_28) {
          if (local_28 <= 2147483647.0) {
            uVar2 = FUN_0040c770(local_28);
            *param_3 = uVar2;
          }
          else {
            *param_3 = 0x7fffffff;
          }
        }
        else {
          *param_3 = 0x80000001;
        }
      }
      local_9 = 1;
    }
  }
  FUN_00414480(&local_18);
  return local_9;
}

