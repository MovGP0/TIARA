/* Ghidra address: 01ce63e0 */
/* Ghidra symbol: FUN_01ce63e0 */


bool FUN_01ce63e0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_01ce3400(param_1);
  bVar1 = *(int *)(param_1 + 0x94) + *(int *)(param_1 + 0x98) < iVar2;
  if (bVar1) {
    *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
    FUN_01ce4cd0(param_1,param_2,param_3);
    FUN_01ce0100(param_1,param_2,1);
  }
  return bVar1;
}

