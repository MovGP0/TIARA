/* Ghidra address: 00602be0 */
/* Ghidra symbol: FUN_00602be0 */


void FUN_00602be0(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  FUN_00411a80(param_1,param_2);
  iVar3 = *(int *)(param_1 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_004aeac0(param_1,iVar2);
      FUN_00418590(uVar1,&DAT_006023f8);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_004ae7a0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

