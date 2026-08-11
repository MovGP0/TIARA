/* Ghidra address: 018cfb90 */
/* Ghidra symbol: FUN_018cfb90 */


void FUN_018cfb90(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_004aeba0(*(undefined8 *)(param_1 + 8),param_2);
  if (iVar1 != -1) {
    FUN_004ae7e0(*(undefined8 *)(param_1 + 0x10),param_2);
    FUN_004aedb0(*(undefined8 *)(param_1 + 8),iVar1,0);
  }
  return;
}

