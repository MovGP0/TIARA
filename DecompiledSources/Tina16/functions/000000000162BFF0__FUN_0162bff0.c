/* Ghidra address: 0162bff0 */
/* Ghidra symbol: FUN_0162bff0 */


void FUN_0162bff0(undefined8 param_1,int param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_2 == 0x3f3) {
    iVar1 = *(int *)(param_3 + 0x10);
    if (iVar1 == 1) {
      uVar2 = FUN_01612560(&DAT_01611548,1);
      FUN_01615be0(uVar2,0);
      FUN_004ae7e0(param_3,uVar2);
      iVar1 = *(int *)(param_3 + 0x10);
    }
    if (iVar1 == 2) {
      uVar2 = FUN_01612560(&DAT_01611548,1);
      FUN_01615be0(uVar2,0);
      FUN_004ae7e0(param_3,uVar2);
      uVar2 = FUN_01612560(&DAT_01611548,1);
      FUN_01615be0(uVar2,0);
      FUN_004ae7e0(param_3,uVar2);
      iVar1 = *(int *)(param_3 + 0x10);
    }
    if (iVar1 == 3) {
      uVar2 = FUN_004aeac0(param_3,2);
      uVar2 = FUN_01612740(uVar2);
      FUN_004ae7e0(param_3,uVar2);
    }
  }
  return;
}

