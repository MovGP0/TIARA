/* Ghidra address: 0164c730 */
/* Ghidra symbol: FUN_0164c730 */


void FUN_0164c730(longlong param_1,longlong param_2)

{
  longlong lVar1;
  double dVar2;
  int *local_30 [2];
  
  FUN_016ee260(param_1,local_30,0xd0,0);
  if (*(char *)(param_1 + 4) == '\x01') {
    dVar2 = (double)FUN_016ee520(param_1,*(undefined8 *)(param_2 + 0x118),
                                 (char)*local_30[0] + '\x01',1,0);
    *(double *)(local_30[0] + 0x22) = dVar2 * *(double *)(local_30[0] + 0x24);
  }
  else {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x40) + -8 + (longlong)(*local_30[0] + 2) * 8);
    dVar2 = (double)FUN_016ee520(param_1,*(undefined8 *)(param_2 + 0x118),
                                 **(undefined1 **)(lVar1 + 0x50),1,**(undefined8 **)(lVar1 + 0x40));
    *(double *)(local_30[0] + 0x22) = dVar2 * *(double *)(local_30[0] + 0x24);
  }
  return;
}

