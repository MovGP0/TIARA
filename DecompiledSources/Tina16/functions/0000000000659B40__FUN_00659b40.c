/* Ghidra address: 00659b40 */
/* Ghidra symbol: FUN_00659b40 */


undefined8 FUN_00659b40(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  
  if (*(char *)(param_2 + 0x391) != '\0') {
    iVar2 = FUN_00654c00();
    iVar5 = 0;
    if (-1 < iVar2 + -1) {
      do {
        plVar3 = (longlong *)FUN_00654bc0(param_2,iVar5);
        if (((*(char *)((longlong)plVar3 + 0xa9) != '\0') &&
            (cVar1 = (**(code **)(*plVar3 + 0xf0))(plVar3), cVar1 != '\0')) &&
           ((((*(uint *)(plVar3 + 0x14) & 0x10000) != 0 &&
             (lVar4 = FUN_0064fca0(plVar3,0x112,*(undefined8 *)(*(longlong *)(param_1 + 0x48) + 8),
                                   *(undefined8 *)(*(longlong *)(param_1 + 0x48) + 0x10)),
             lVar4 != 0)) ||
            ((cVar1 = FUN_004113d0(plVar3,&PTR_FUN_00640c18), cVar1 != '\0' &&
             (cVar1 = FUN_00659b40(param_1,plVar3), cVar1 != '\0')))))) {
          return 1;
        }
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return 0;
}

