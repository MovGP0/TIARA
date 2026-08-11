/* Ghidra address: 004ba060 */
/* Ghidra symbol: FUN_004ba060 */


longlong FUN_004ba060(longlong param_1,uint *param_2)

{
  undefined8 uVar1;
  longlong local_10;
  
  if ((0 < (int)*param_2) && ((longlong)(int)*param_2 != *(longlong *)(param_1 + 0x10))) {
    *param_2 = *param_2 + 0x1fff & 0xffffe000;
  }
  local_10 = *(longlong *)(param_1 + 8);
  if ((longlong)(int)*param_2 != *(longlong *)(param_1 + 0x20)) {
    if (*param_2 == 0) {
      FUN_004095f0(*(undefined8 *)(param_1 + 8));
      local_10 = 0;
    }
    else {
      if (*(longlong *)(param_1 + 0x20) == 0) {
        local_10 = FUN_004095c0((longlong)(int)*param_2);
      }
      else {
        FUN_00409620(&local_10,(longlong)(int)*param_2);
      }
      if (local_10 == 0) {
        uVar1 = FUN_0044d710(&PTR_FUN_00471608,1,PTR_PTR_020053d0);
        FUN_004134c0(uVar1);
      }
    }
  }
  return local_10;
}

