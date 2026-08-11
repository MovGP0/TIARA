/* Ghidra address: 00d7ce10 */
/* Ghidra symbol: FUN_00d7ce10 */


undefined8 FUN_00d7ce10(undefined8 param_1)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  
  uVar4 = 0;
  lVar6 = 0;
  if ((DAT_01ed0658 != 0) && (iVar5 = *(int *)(DAT_01ed0658 + 0x10) + -1, -1 < iVar5)) {
    do {
      puVar2 = (undefined8 *)FUN_004aeac0(DAT_01ed0658,iVar5);
      cVar1 = FUN_004113d0(param_1,*puVar2);
      if (cVar1 != '\0') {
        if (lVar6 == 0) {
          lVar6 = FUN_004aeac0(DAT_01ed0658,iVar5);
          uVar4 = *(undefined8 *)(lVar6 + 8);
          plVar3 = (longlong *)FUN_004aeac0(DAT_01ed0658,iVar5);
          lVar6 = *plVar3;
        }
        else {
          puVar2 = (undefined8 *)FUN_004aeac0(DAT_01ed0658,iVar5);
          cVar1 = FUN_00411580(*puVar2,lVar6);
          if (cVar1 != '\0') {
            lVar6 = FUN_004aeac0(DAT_01ed0658,iVar5);
            uVar4 = *(undefined8 *)(lVar6 + 8);
            plVar3 = (longlong *)FUN_004aeac0(DAT_01ed0658,iVar5);
            lVar6 = *plVar3;
          }
        }
      }
      iVar5 = iVar5 + -1;
    } while (iVar5 != -1);
  }
  return uVar4;
}

