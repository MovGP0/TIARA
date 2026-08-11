/* Ghidra address: 00d753e0 */
/* Ghidra symbol: FUN_00d753e0 */


undefined8 FUN_00d753e0(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  iVar3 = 0;
  iVar4 = *(int *)(DAT_0202da28 + 0x10);
  if (-1 < iVar4 + -1) {
    do {
      uVar2 = FUN_004aeac0(DAT_0202da28,iVar3);
      FUN_00410ae0(uVar2,&local_20);
      iVar1 = FUN_00416db0(local_20,param_1);
      if (iVar1 == 0) {
        local_28 = FUN_004aeac0(DAT_0202da28,iVar3);
        goto LAB_00d75462;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  local_28 = 0;
LAB_00d75462:
  FUN_00414480(&local_20);
  return local_28;
}

