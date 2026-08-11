/* Ghidra address: 011a5e60 */
/* Ghidra symbol: FUN_011a5e60 */


void FUN_011a5e60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  if (*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764) < 7) {
    (**(code **)(*DAT_020c6568 + 0x60))
              (DAT_020c6568,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  return;
}

