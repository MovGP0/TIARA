/* Ghidra address: 0164c6c0 */
/* Ghidra symbol: FUN_0164c6c0 */


void FUN_0164c6c0(undefined8 param_1,longlong param_2)

{
  double dVar1;
  longlong local_30 [2];
  
  FUN_016ee260(param_1,local_30,0xd0,0);
  dVar1 = (double)FUN_016ee810(param_1,*(undefined8 *)(param_2 + 0x118),
                               *(undefined1 *)(*(longlong *)(local_30[0] + 0x18) + 1),
                               *(undefined1 *)(*(longlong *)(local_30[0] + 0x18) + 2),0);
  *(double *)(local_30[0] + 0x88) = dVar1 * *(double *)(local_30[0] + 0x90);
  return;
}

