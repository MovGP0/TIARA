/* Ghidra address: 013b4ab0 */
/* Ghidra symbol: FUN_013b4ab0 */


bool FUN_013b4ab0(longlong param_1,char param_2)

{
  undefined8 uVar1;
  int iVar2;
  bool bVar3;
  char local_2b8 [664];
  
  iVar2 = 0;
  bVar3 = false;
  if (0 < *(int *)(param_1 + 0x10)) {
    do {
      uVar1 = FUN_00b94e60(param_1,iVar2);
      FUN_013b49d0(param_1,uVar1,local_2b8);
      bVar3 = local_2b8[0] == param_2;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x10) && !bVar3);
  }
  return bVar3;
}

