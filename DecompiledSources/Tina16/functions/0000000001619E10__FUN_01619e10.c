/* Ghidra address: 01619e10 */
/* Ghidra symbol: FUN_01619e10 */


void FUN_01619e10(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_2c;
  
  local_2c = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x10);
  FUN_004b89e0(param_2,&local_2c,4);
  iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),iVar2);
      FUN_01619b00(uVar1,param_2);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_015f4610(param_2,*(undefined8 *)(param_1 + 0x18));
  return;
}

