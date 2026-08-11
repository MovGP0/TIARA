/* Ghidra address: 017d8580 */
/* Ghidra symbol: FUN_017d8580 */


void FUN_017d8580(longlong param_1,undefined4 param_2,ulonglong param_3)

{
  undefined1 local_18 [16];
  
  if (*(char *)(param_1 + 0x94) == '\0') {
    FUN_017d99c0(param_1,param_3 & 0xffffffff,param_2);
    FUN_0040c850();
  }
  else {
    FUN_017d9a10(param_1,local_18,param_3,param_2);
    FUN_00c44590(local_18);
  }
  return;
}

