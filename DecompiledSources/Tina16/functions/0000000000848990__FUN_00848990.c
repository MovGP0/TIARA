/* Ghidra address: 00848990 */
/* Ghidra symbol: FUN_00848990 */


void FUN_00848990(longlong *param_1,uint param_2)

{
  uint local_res10;
  
  if (*(uint *)((longlong)param_1 + 0x4d4) != param_2) {
    local_res10 = param_2;
    if ((param_2 & 0x1000) != 0) {
      local_res10 = param_2 & 0xffffdfff;
    }
    *(uint *)((longlong)param_1 + 0x4d4) = local_res10;
    if (*(char *)((longlong)param_1 + 0x525) == '\0') {
      if ((local_res10 & 0x2000) == 0) {
        FUN_0083f790(param_1);
      }
      else {
        FUN_0083f7b0(param_1);
      }
    }
    if ((local_res10 & 0x1000) != 0) {
      FUN_00844b60(param_1,(int)param_1[0x95],*(undefined4 *)((longlong)param_1 + 0x4ac),1,0);
    }
    (**(code **)(*param_1 + 0x180))(param_1);
  }
  return;
}

