/* Ghidra address: 00c5c180 */
/* Ghidra symbol: FUN_00c5c180 */


void FUN_00c5c180(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),iVar2);
        FUN_004ae7e0(*(undefined8 *)(param_1 + 8),uVar1);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  else if (*(char *)(param_1 + 0x18) == '\x01') {
    iVar3 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        uVar1 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),iVar2);
        FUN_004af580(*(undefined8 *)(param_1 + 8),uVar1);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

