/* Ghidra address: 00bc9db0 */
/* Ghidra symbol: FUN_00bc9db0 */


void FUN_00bc9db0(longlong param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 8 + (longlong)iVar1 * 8) = 0;
    *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x80 + (longlong)iVar1 * 8) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0xf);
  return;
}

