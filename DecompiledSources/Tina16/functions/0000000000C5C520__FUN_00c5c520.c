/* Ghidra address: 00c5c520 */
/* Ghidra symbol: FUN_00c5c520 */


void FUN_00c5c520(longlong param_1,undefined4 param_2)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  
  cVar1 = *(char *)(param_1 + 0x18);
  if (cVar1 == '\0') {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),iVar3);
        FUN_004ae7e0(*(undefined8 *)(param_1 + 8),uVar2);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  else if (cVar1 == '\x01') {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),iVar3);
        FUN_004af580(*(undefined8 *)(param_1 + 8),uVar2);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  else if (cVar1 == '\x02') {
    iVar4 = *(int *)(*(longlong *)(param_1 + 0x10) + 0x10);
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        uVar2 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x10),iVar3);
        FUN_017b0190(uVar2,param_2);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  return;
}

