/* Ghidra address: 01795510 */
/* Ghidra symbol: FUN_01795510 */


longlong FUN_01795510(longlong param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  
  lVar4 = 0;
  iVar6 = *(int *)(*(longlong *)(param_1 + 0xd10) + 0x10) + -1;
  if (-1 < iVar6) {
    do {
      plVar3 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar6);
      iVar2 = (**(code **)(*plVar3 + 0x80))(plVar3,param_2,param_3);
      if (-1 < iVar2) {
        lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar6);
        return lVar4;
      }
      plVar3 = (longlong *)FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar6);
      cVar1 = (**(code **)(*plVar3 + 0x58))(plVar3,param_2,param_3);
      if (cVar1 != '\0') {
        if (lVar4 != 0) {
          uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar6);
          cVar1 = FUN_004113d0(uVar5,&PTR_FUN_017aad48);
          if (((cVar1 == '\0') || (*(char *)(*(longlong *)(param_1 + 0x9a8) + 0x328) == '\0')) ||
             (cVar1 = FUN_004113d0(lVar4,&PTR_FUN_017aad48), cVar1 != '\0')) {
            uVar5 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar6);
            cVar1 = FUN_004113d0(uVar5,&PTR_FUN_017a79c0);
            if (cVar1 == '\0') goto LAB_01795645;
          }
        }
        lVar4 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xd10),iVar6);
      }
LAB_01795645:
      iVar6 = iVar6 + -1;
    } while (iVar6 != -1);
  }
  return lVar4;
}

