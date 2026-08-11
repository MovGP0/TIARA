/* Ghidra address: 00cd73f0 */
/* Ghidra symbol: FUN_00cd73f0 */


undefined8 FUN_00cd73f0(int param_1)

{
  int iVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  if (param_1 == -1) {
    param_1 = FUN_00cd55c0();
  }
  if (DAT_01eaf040 != 0) {
    iVar5 = *(int *)(DAT_01eaf040 + 0x10);
    iVar4 = 0;
    if (-1 < iVar5 + -1) {
      do {
        lVar2 = FUN_004aeac0(DAT_01eaf040,iVar4);
        iVar1 = (**(code **)(lVar2 + 0x18))(lVar2);
        if (iVar1 == param_1) {
          uVar3 = FUN_004aeac0(DAT_01eaf040,iVar4);
          return uVar3;
        }
        iVar4 = iVar4 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  return 0;
}

