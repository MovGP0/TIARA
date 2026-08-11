/* Ghidra address: 00c0faf0 */
/* Ghidra symbol: FUN_00c0faf0 */


int FUN_00c0faf0(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 local_20;
  
  cVar1 = FUN_00bf2c80(param_1);
  if (cVar1 == '\0') {
    iVar2 = 0;
  }
  else {
    local_20 = FUN_00bf2b90(param_1);
    iVar2 = FUN_00c0fa70(param_1,&local_20);
    local_20 = FUN_00bf2b30(param_1);
    iVar3 = FUN_00c0fa70(param_1,&local_20);
    iVar2 = iVar2 - iVar3;
  }
  return iVar2;
}

