/* Ghidra address: 00f962d0 */
/* Ghidra symbol: FUN_00f962d0 */


undefined4 FUN_00f962d0(longlong param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 local_2c [3];
  
  local_2c[0] = 0;
  iVar2 = (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x6e8) + 0x4a0) + 0x28))();
  iVar3 = 0;
  if (-1 < iVar2 + -1) {
    do {
      cVar1 = FUN_00821920(*(undefined8 *)(param_1 + 0x6e8),iVar3);
      if (cVar1 != '\0') {
        FUN_00f60d70(local_2c,iVar3);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return local_2c[0];
}

