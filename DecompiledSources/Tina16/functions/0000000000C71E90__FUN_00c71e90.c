/* Ghidra address: 00c71e90 */
/* Ghidra symbol: FUN_00c71e90 */


int FUN_00c71e90(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_004b0f60(*(undefined8 *)(param_1 + 0x108));
  if (*(int *)(*(longlong *)(param_1 + 0x108) + 8) <= iVar1) {
    iVar1 = FUN_007d59d0(param_1,0,0);
    FUN_004b0d60(*(undefined8 *)(param_1 + 0x108),iVar1 + 1);
  }
  FUN_004b0e80(*(undefined8 *)(param_1 + 0x108),iVar1,1);
  return iVar1;
}

