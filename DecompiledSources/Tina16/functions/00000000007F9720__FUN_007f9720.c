/* Ghidra address: 007f9720 */
/* Ghidra symbol: FUN_007f9720 */


undefined8 FUN_007f9720(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xffffffff;
  if (*param_2 == param_1) {
    uVar1 = 0;
    *(undefined1 *)(param_2 + 1) = 1;
  }
  return uVar1;
}

