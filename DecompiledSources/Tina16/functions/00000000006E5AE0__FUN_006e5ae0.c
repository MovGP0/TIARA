/* Ghidra address: 006e5ae0 */
/* Ghidra symbol: FUN_006e5ae0 */


void FUN_006e5ae0(longlong *param_1,longlong *param_2,int param_3)

{
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong *local_30;
  undefined4 local_24;
  undefined8 local_20;
  
  local_40 = auStack_68;
  local_20 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  local_24 = 0;
  if (-1 < param_3) {
    param_3 = param_3 + 1;
    local_30 = param_2;
    do {
      if (*(char *)(*local_30 + 0x38) == '\0') {
        FUN_004ae7e0(local_20,*local_30);
      }
      local_30 = local_30 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  (**(code **)(*param_1 + 0x2a8))(param_1,local_20);
  FUN_00410f20(local_20);
  return;
}

