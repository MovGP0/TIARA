/* Ghidra address: 01b38f90 */
/* Ghidra symbol: FUN_01b38f90 */


void FUN_01b38f90(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 0x10);
  iVar4 = 0;
  if (-1 < iVar6 + -1) {
    do {
      puVar2 = (undefined8 *)FUN_004aeac0(param_1,iVar4);
      if (puVar2[10] != 0) {
        iVar1 = FUN_004170c0(&DAT_01b390d8,*puVar2,1);
        if (iVar1 != 0) {
          FUN_00416dc0(puVar2,*puVar2,1,iVar1 + -1);
        }
        uVar3 = FUN_0040f200(param_2,*puVar2);
        FUN_0040d060(uVar3);
        FUN_00409900();
        lVar5 = puVar2[10];
        iVar1 = *(int *)((longlong)puVar2 + 0x34);
        if (0 < iVar1) {
          do {
            uVar3 = FUN_0040eee0(param_2,*(undefined4 *)(lVar5 + 4),5);
            FUN_0040d060(uVar3);
            FUN_00409900();
            lVar5 = *(longlong *)(lVar5 + 0x18);
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
        uVar3 = FUN_0040f200(param_2,&DAT_01b390e8);
        uVar3 = FUN_0040f200(uVar3,puVar2[1]);
        FUN_0040f590(uVar3);
        FUN_00409900();
      }
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  FUN_0040f590(param_2);
  FUN_00409900();
  return;
}

