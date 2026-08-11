/* Ghidra address: 00ac5160 */
/* Ghidra symbol: FUN_00ac5160 */


undefined8 FUN_00ac5160(longlong param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_2 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_004aeac0(param_2,iVar3);
      **(undefined8 **)(param_1 + 0xd0) = uVar2;
      iVar1 = FUN_00416db0(*(undefined8 *)(**(longlong **)(param_1 + 0xd0) + 0x10),param_3);
      if (iVar1 == 0) {
        return 1;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return 0;
}

