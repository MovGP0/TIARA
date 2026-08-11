/* Ghidra address: 00bcf8a0 */
/* Ghidra symbol: FUN_00bcf8a0 */


undefined4 FUN_00bcf8a0(longlong param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 < *(uint *)(param_1 + 0x40)) {
    if (*(char *)(param_1 + 0x70) == '\0') {
      FUN_00bcf820(param_1);
    }
    uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x1c + (longlong)(int)param_2 * 0x28);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

