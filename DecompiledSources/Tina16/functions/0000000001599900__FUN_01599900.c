/* Ghidra address: 01599900 */
/* Ghidra symbol: FUN_01599900 */


undefined8 FUN_01599900(longlong *param_1,int param_2)

{
  uint uVar1;
  int local_38;
  longlong local_30;
  longlong local_28;
  longlong local_20;
  longlong local_18;
  
  local_38 = 0xffff;
  if (*(int *)((longlong)param_1 + 0x14) - 5U < 0xffff) {
    local_38 = *(int *)((longlong)param_1 + 0x14) + -5;
  }
  do {
    if (*(uint *)((longlong)param_1 + 0x8d) < 2) {
      FUN_01599370(param_1);
      if ((*(int *)((longlong)param_1 + 0x8d) == 0) && (param_2 == 0)) {
        return 0;
      }
      if (*(int *)((longlong)param_1 + 0x8d) == 0) {
        *(undefined4 *)((longlong)param_1 + 0x16ea) = 0;
        if (param_2 == 4) {
          if (*(int *)((longlong)param_1 + 0x75) < 0) {
            local_20 = 0;
          }
          else {
            local_20 = *(longlong *)((longlong)param_1 + 0x45) +
                       (ulonglong)*(uint *)((longlong)param_1 + 0x75);
          }
          FUN_015a1bd0(param_1,local_20,
                       *(int *)((longlong)param_1 + 0x85) - *(int *)((longlong)param_1 + 0x75),1);
          *(undefined4 *)((longlong)param_1 + 0x75) = *(undefined4 *)((longlong)param_1 + 0x85);
          FUN_0159c110(*param_1);
          if (*(int *)(*param_1 + 0x18) == 0) {
            return 2;
          }
          return 3;
        }
        if (*(int *)((longlong)param_1 + 0x75) < *(int *)((longlong)param_1 + 0x85)) {
          if (*(int *)((longlong)param_1 + 0x75) < 0) {
            local_18 = 0;
          }
          else {
            local_18 = *(longlong *)((longlong)param_1 + 0x45) +
                       (ulonglong)*(uint *)((longlong)param_1 + 0x75);
          }
          FUN_015a1bd0(param_1,local_18,
                       *(int *)((longlong)param_1 + 0x85) - *(int *)((longlong)param_1 + 0x75),0);
          *(undefined4 *)((longlong)param_1 + 0x75) = *(undefined4 *)((longlong)param_1 + 0x85);
          FUN_0159c110(*param_1);
          if (*(int *)(*param_1 + 0x18) == 0) {
            return 0;
          }
        }
        return 1;
      }
    }
    *(int *)((longlong)param_1 + 0x85) =
         *(int *)((longlong)param_1 + 0x85) + *(int *)((longlong)param_1 + 0x8d);
    *(undefined4 *)((longlong)param_1 + 0x8d) = 0;
    uVar1 = *(int *)((longlong)param_1 + 0x75) + local_38;
    if ((*(int *)((longlong)param_1 + 0x85) == 0) || (uVar1 <= *(uint *)((longlong)param_1 + 0x85)))
    {
      *(uint *)((longlong)param_1 + 0x8d) = *(int *)((longlong)param_1 + 0x85) - uVar1;
      *(uint *)((longlong)param_1 + 0x85) = uVar1;
      if (*(int *)((longlong)param_1 + 0x75) < 0) {
        local_30 = 0;
      }
      else {
        local_30 = *(longlong *)((longlong)param_1 + 0x45) +
                   (ulonglong)*(uint *)((longlong)param_1 + 0x75);
      }
      FUN_015a1bd0(param_1,local_30,
                   *(int *)((longlong)param_1 + 0x85) - *(int *)((longlong)param_1 + 0x75),0);
      *(undefined4 *)((longlong)param_1 + 0x75) = *(undefined4 *)((longlong)param_1 + 0x85);
      FUN_0159c110(*param_1);
      if (*(int *)(*param_1 + 0x18) == 0) {
        return 0;
      }
    }
    if (*(int *)((longlong)param_1 + 0x39) - 0x106U <=
        (uint)(*(int *)((longlong)param_1 + 0x85) - *(int *)((longlong)param_1 + 0x75))) {
      if (*(int *)((longlong)param_1 + 0x75) < 0) {
        local_28 = 0;
      }
      else {
        local_28 = *(longlong *)((longlong)param_1 + 0x45) +
                   (ulonglong)*(uint *)((longlong)param_1 + 0x75);
      }
      FUN_015a1bd0(param_1,local_28,
                   *(int *)((longlong)param_1 + 0x85) - *(int *)((longlong)param_1 + 0x75),0);
      *(undefined4 *)((longlong)param_1 + 0x75) = *(undefined4 *)((longlong)param_1 + 0x85);
      FUN_0159c110(*param_1);
      if (*(int *)(*param_1 + 0x18) == 0) {
        return 0;
      }
    }
  } while( true );
}

