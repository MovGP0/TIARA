/* Ghidra address: 010d32f0 */
/* Ghidra symbol: FUN_010d32f0 */


void FUN_010d32f0(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 local_20;
  
  local_20 = 0;
  iVar2 = 0;
  do {
    cVar1 = FUN_010d2ff0(param_1,iVar2,&local_20);
    if (cVar1 != '\0') {
      iVar3 = 0;
      do {
        cVar1 = FUN_010d3160(param_1,iVar3,local_20);
        if (cVar1 != '\0') {
          FUN_010d3240(param_1,iVar3,iVar2);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x10));
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < *(int *)(param_1 + 0x10));
  FUN_00414480(&local_20);
  return;
}

