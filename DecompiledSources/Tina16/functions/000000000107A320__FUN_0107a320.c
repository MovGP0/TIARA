/* Ghidra address: 0107a320 */
/* Ghidra symbol: FUN_0107a320 */


void FUN_0107a320(longlong param_1)

{
  char cVar1;
  undefined8 local_20 [2];
  
  if ((*(char *)(*(longlong *)(param_1 + 0xa78) + 0x5e0) != '\0') &&
     (*(longlong *)(param_1 + 0xab8) != 0)) {
    cVar1 = FUN_010b13a0(*(undefined8 *)(param_1 + 0xac8),
                         *(undefined8 *)(*(longlong *)(param_1 + 0xab8) + 0x10),local_20,0);
    if (cVar1 != '\0') {
      FUN_0107a2f0(param_1,local_20[0]);
      FUN_00c0dad0(*(undefined8 *)(param_1 + 0xa78),0);
      FUN_010b2830(*(undefined8 *)(param_1 + 0xac8),0);
    }
  }
  FUN_010b2860(*(undefined8 *)(param_1 + 0xac8));
  return;
}

