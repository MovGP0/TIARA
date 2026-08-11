/* Ghidra address: 00808df0 */
/* Ghidra symbol: FUN_00808df0 */


bool FUN_00808df0(undefined8 param_1,longlong param_2,longlong param_3,char param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = false;
  if (param_4 == '\x01') {
    iVar2 = FUN_007fd800(param_2);
    iVar3 = FUN_007fd800(param_3);
    bVar1 = iVar2 < iVar3;
  }
  else if (param_4 == '\x02') {
    iVar2 = FUN_007fd800(param_2);
    iVar3 = FUN_007fd800(param_3);
    bVar1 = iVar3 + *(int *)(param_3 + 0x9c) < iVar2 + *(int *)(param_2 + 0x9c);
  }
  else if (param_4 == '\x03') {
    iVar2 = FUN_007fd7d0(param_2);
    iVar3 = FUN_007fd7d0(param_3);
    bVar1 = iVar2 < iVar3;
  }
  else if (param_4 == '\x04') {
    iVar2 = FUN_007fd7d0(param_2);
    iVar3 = FUN_007fd7d0(param_3);
    bVar1 = iVar3 + *(int *)(param_3 + 0x98) < iVar2 + *(int *)(param_2 + 0x98);
  }
  return bVar1;
}

