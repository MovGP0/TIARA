/* Ghidra address: 006df3d0 */
/* Ghidra symbol: FUN_006df3d0 */


void FUN_006df3d0(undefined8 param_1,undefined4 *param_2,longlong param_3)

{
  *(undefined1 *)(param_3 + 0x39) = 1;
  *param_2 = 0x27;
  *(longlong *)(param_2 + 0xc) = param_3;
  *(undefined8 *)(param_2 + 6) = 0xffffffffffffffff;
  param_2[9] = 0xffffffff;
  param_2[10] = 0xffffffff;
  return;
}

