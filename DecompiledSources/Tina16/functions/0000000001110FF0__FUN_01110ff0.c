/* Ghidra address: 01110ff0 */
/* Ghidra symbol: FUN_01110ff0 */


void FUN_01110ff0(longlong param_1,uint param_2)

{
  undefined1 local_20 [8];
  
  FUN_00411a80(param_1,param_2);
  if (*(short *)(param_1 + 0x622) != 0) {
    thunk_FUN_0418b35e(*(short *)(param_1 + 0x622),0x804,2,local_20);
  }
  FUN_011112f0(param_1);
  FUN_00660360(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

