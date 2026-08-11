/* Ghidra address: 007ff990 */
/* Ghidra symbol: FUN_007ff990 */


undefined8 FUN_007ff990(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if ((*(char *)(param_1 + 0x4d6) == '\x02') && (*(longlong *)(param_1 + 0x698) != 0)) {
    uVar1 = thunk_FUN_041b2403(*(undefined8 *)(param_1 + 0x698),0x229,0,0);
    uVar1 = FUN_006485b0(uVar1);
  }
  return uVar1;
}

