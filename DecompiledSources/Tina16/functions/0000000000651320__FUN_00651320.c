/* Ghidra address: 00651320 */
/* Ghidra symbol: FUN_00651320 */


void FUN_00651320(longlong param_1,int param_2)

{
  if (*(int *)(*(longlong *)(param_1 + 0x30) + 200) != param_2) {
    *(int *)(*(longlong *)(param_1 + 0x30) + 200) = param_2;
    *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 0xac) = 0;
    FUN_0064fca0(*(undefined8 *)(param_1 + 0x30),0xb00d,0,0);
  }
  return;
}

