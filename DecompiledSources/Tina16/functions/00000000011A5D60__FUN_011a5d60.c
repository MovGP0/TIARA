/* Ghidra address: 011a5d60 */
/* Ghidra symbol: FUN_011a5d60 */


void FUN_011a5d60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764) < 7) {
    (**(code **)(*DAT_020c6568 + 200))(DAT_020c6568,param_1,param_2);
    (**(code **)(*DAT_020c6568 + 0xc0))(DAT_020c6568,param_3,param_4);
  }
  return;
}

