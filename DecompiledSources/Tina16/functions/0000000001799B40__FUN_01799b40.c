/* Ghidra address: 01799b40 */
/* Ghidra symbol: FUN_01799b40 */


undefined4 FUN_01799b40(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 0xcfc);
  if (*(char *)(param_1 + 0xc94) == '\0') {
    uVar1 = 0xfffffffe;
  }
  return uVar1;
}

