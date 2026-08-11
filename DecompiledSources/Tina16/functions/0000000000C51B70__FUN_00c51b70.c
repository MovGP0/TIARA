/* Ghidra address: 00c51b70 */
/* Ghidra symbol: FUN_00c51b70 */


void FUN_00c51b70(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_004aeba0(*(undefined8 *)(param_1 + 0x78),param_2);
  if (iVar1 == -1) {
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x78),param_2);
  }
  return;
}

