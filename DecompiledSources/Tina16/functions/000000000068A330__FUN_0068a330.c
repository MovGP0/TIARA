/* Ghidra address: 0068a330 */
/* Ghidra symbol: FUN_0068a330 */


void FUN_0068a330(longlong param_1)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x40) + 0x78) != 0) {
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x78);
    iVar3 = FUN_00654c00();
    iVar8 = 0;
    if (-1 < iVar3 + -1) {
      do {
        plVar4 = (longlong *)FUN_00654bc0(uVar1,iVar8);
        if ((plVar4 != *(longlong **)(param_1 + 0x40)) &&
           (cVar2 = FUN_004113d0(plVar4,&PTR_FUN_006757e8), cVar2 != '\0')) {
          lVar5 = (**(code **)(*plVar4 + 0xd0))(plVar4);
          if (lVar5 != 0) {
            uVar6 = (**(code **)(*plVar4 + 0xd0))(plVar4);
            cVar2 = FUN_004113d0(uVar6,&PTR_FUN_0061c2b8);
            if ((cVar2 != '\0') &&
               (lVar5 = (**(code **)(*plVar4 + 0xd0))(plVar4), *(char *)(lVar5 + 0xca) != '\0')) {
              plVar7 = (longlong *)(**(code **)(*plVar4 + 0xd0))(plVar4);
              (**(code **)(*plVar7 + 0xe0))(plVar7,0);
            }
          }
          (**(code **)(*plVar4 + 0x268))(plVar4,0);
        }
        iVar8 = iVar8 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

