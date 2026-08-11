/* Ghidra address: 00d7c1d0 */
/* Ghidra symbol: FUN_00d7c1d0 */


void FUN_00d7c1d0(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined4 local_14;
  longlong local_10;
  
  local_20 = auStack_48;
  if ((0 < *(int *)((longlong)param_1 + 0x84)) && (0 < (int)param_1[0x11])) {
    if ((*(char *)((longlong)param_1 + 0x99) == '\a') ||
       (*(char *)((longlong)param_1 + 0x99) == '\x05')) {
      local_20 = auStack_48;
      local_10 = (**(code **)(*param_1 + 0x88))(param_1);
      local_14 = *(undefined4 *)((longlong)param_1 + 0x114);
      *(int *)((longlong)param_1 + 0x114) = (int)param_1[0x24];
      param_1[0x23] = param_1[0x25];
      FUN_00d76910(param_1,param_2,param_3);
      param_1[0x23] = local_10;
      *(undefined4 *)((longlong)param_1 + 0x114) = local_14;
    }
    else {
      FUN_00d76910(param_1,param_2,param_3);
    }
  }
  return;
}

