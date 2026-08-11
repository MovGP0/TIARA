/* Ghidra address: 00651370 */
/* Ghidra symbol: FUN_00651370 */


void FUN_00651370(longlong param_1,longlong param_2)

{
  undefined1 auStack_28 [32];
  
  if (*(char *)(param_1 + 0xac) != '\0') {
    if (*(longlong *)(param_2 + 8) == 0) {
      FUN_00651320(auStack_28,*(undefined4 *)(*(longlong *)(param_1 + 0x78) + 200));
    }
    else {
      FUN_00651320(auStack_28,*(undefined4 *)(param_2 + 0x10));
    }
    *(undefined1 *)(param_1 + 0xac) = 1;
  }
  return;
}

