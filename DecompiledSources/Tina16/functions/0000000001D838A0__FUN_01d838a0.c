/* Ghidra address: 01d838a0 */
/* Ghidra symbol: FUN_01d838a0 */


void FUN_01d838a0(longlong param_1)

{
  (**(code **)(**(longlong **)(param_1 + 0xa88) + 0x80))
            (*(longlong **)(param_1 + 0xa88),*(undefined1 *)(*(longlong *)(param_1 + 0xae0) + 0x2a))
  ;
  if ((*(char *)(param_1 + 0xaa0) != '\0') &&
     (*(longlong *)(param_1 + 0xae0) == *(longlong *)(param_1 + 0xaa8))) {
    FUN_01d80d00(param_1,1,0);
  }
  FUN_01d80da0(param_1,6,1,0);
  return;
}

