/* Ghidra address: 006fe000 */
/* Ghidra symbol: FUN_006fe000 */


void FUN_006fe000(longlong param_1)

{
  undefined4 local_20;
  undefined4 local_1c [3];
  
  FUN_006586f0(param_1);
  if (*(char *)(param_1 + 0xae) == '\0') {
    local_1c[0] = *(undefined4 *)(param_1 + 0x98);
    local_20 = *(undefined4 *)(param_1 + 0x9c);
    FUN_006fea10(param_1,local_1c,&local_20);
  }
  return;
}

