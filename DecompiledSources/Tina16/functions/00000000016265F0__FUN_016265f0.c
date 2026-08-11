/* Ghidra address: 016265f0 */
/* Ghidra symbol: FUN_016265f0 */


void FUN_016265f0(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  undefined8 local_20 [2];
  
  FUN_016ee260(param_1,local_20,0xd0,0);
  uVar1 = FUN_0164e750(local_20[0],*(undefined8 *)(param_2 + 0x38),
                       *(undefined1 *)(param_2 + 0x139b8));
  *(undefined1 *)(param_2 + 0x139e4) = uVar1;
  return;
}

