/* Ghidra address: 015986f0 */
/* Ghidra symbol: FUN_015986f0 */


int FUN_015986f0(longlong param_1,int param_2,int param_3)

{
  longlong lVar1;
  int local_res10;
  int local_28;
  
  local_28 = 0;
  if ((param_1 == 0) || (*(longlong *)(param_1 + 0x28) == 0)) {
    local_28 = -2;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x28);
    local_res10 = param_2;
    if (param_2 == -1) {
      local_res10 = 6;
    }
    if ((((local_res10 < 0) || (9 < local_res10)) || (param_3 < 0)) || (4 < param_3)) {
      local_28 = -2;
    }
    else {
      if (((param_3 != *(int *)(lVar1 + 0xa1)) ||
          ((&PTR_FUN_01f68368)[(longlong)*(int *)(lVar1 + 0x9d) * 2] !=
           (&PTR_FUN_01f68368)[(longlong)local_res10 * 2])) && (*(int *)(param_1 + 0xc) != 0)) {
        local_28 = FUN_01596ad0(param_1,5);
        if ((local_28 == -5) && (*(int *)(lVar1 + 0x20) == 0)) {
          local_28 = 0;
        }
      }
      if (*(int *)(lVar1 + 0x9d) != local_res10) {
        *(int *)(lVar1 + 0x9d) = local_res10;
        *(uint *)(lVar1 + 0x99) = (uint)*(ushort *)(&DAT_01f68362 + (longlong)local_res10 * 0x10);
        *(uint *)(lVar1 + 0xa5) = (uint)*(ushort *)(&DAT_01f68360 + (longlong)local_res10 * 0x10);
        *(uint *)(lVar1 + 0xa9) = (uint)*(ushort *)(&DAT_01f68364 + (longlong)local_res10 * 0x10);
        *(uint *)(lVar1 + 0x95) = (uint)*(ushort *)(&DAT_01f68366 + (longlong)local_res10 * 0x10);
      }
      *(int *)(lVar1 + 0xa1) = param_3;
    }
  }
  return local_28;
}

