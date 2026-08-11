/* Ghidra address: 00c30d30 */
/* Ghidra symbol: FUN_00c30d30 */


undefined4 FUN_00c30d30(longlong param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_004af4a0(*(undefined8 *)(param_1 + 0x20),FUN_00c30980);
  iVar4 = *(int *)(param_1 + 0x10);
  iVar3 = 0;
  if (-1 < iVar4 + -1) {
    do {
      piVar1 = (int *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),iVar3);
      if (*piVar1 == 0) {
        iVar4 = *(int *)(param_1 + 0x10) + -1;
        if (iVar3 <= iVar4) {
          iVar5 = (iVar4 - iVar3) + 1;
          iVar4 = iVar3;
          do {
            puVar2 = (undefined4 *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x20),iVar4);
            *puVar2 = 0xffffffff;
            iVar4 = iVar4 + 1;
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
        }
        *(int *)(param_1 + 0x10) = iVar3;
        FUN_004aef90(*(undefined8 *)(param_1 + 0x20),iVar3);
        break;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return *(undefined4 *)(param_1 + 0x10);
}

