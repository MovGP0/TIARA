/* Ghidra address: 018ab130 */
/* Ghidra symbol: FUN_018ab130 */


void FUN_018ab130(longlong *param_1)

{
  char cVar1;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_30;
  longlong local_28;
  longlong *local_20;
  
  local_40 = auStack_68;
  if (*(char *)((longlong)param_1 + 0x531) == '\0') {
    local_20 = (longlong *)(**(code **)(*param_1 + 0x278))(param_1);
    if (local_20 != (longlong *)0x0) {
      (**(code **)(*param_1 + 0x298))(param_1);
      (**(code **)(*local_20 + 0x28))(local_20);
      (**(code **)(*param_1 + 0x2a0))(param_1,1);
      FUN_018a7610(param_1[0xaa]);
      FUN_018a7610(param_1[0xa8]);
      FUN_018abf10(param_1);
      FUN_018a9020(param_1,1);
      local_28 = param_1[0xaa];
      FUN_01893360(local_28,0);
      FUN_01893490(local_28,0);
      cVar1 = FUN_018a8e90(param_1);
      if (cVar1 != '\0') {
        local_30 = param_1[0xa8];
        FUN_01893360(local_30,0);
        FUN_01893490(local_30,0);
      }
    }
  }
  return;
}

