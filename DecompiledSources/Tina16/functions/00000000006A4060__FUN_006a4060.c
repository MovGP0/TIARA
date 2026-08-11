/* Ghidra address: 006a4060 */
/* Ghidra symbol: FUN_006a4060 */


void FUN_006a4060(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined8 uVar7;
  int iVar8;
  
  FUN_006a3470(param_1,param_2);
  lVar1 = *(longlong *)(param_1 + 0x48);
  if ((((lVar1 != 0) && (param_2 != 0)) && (*(char *)(lVar1 + 0x138) != '\0')) &&
     (*(char *)(lVar1 + 0x158) == '\0')) {
    iVar3 = FUN_004d4cf0();
    iVar8 = 0;
    if (-1 < iVar3 + -1) {
      do {
        lVar5 = FUN_004d4cc0(*(undefined8 *)(param_1 + 0x48),iVar8);
        lVar1 = *(longlong *)(lVar5 + 0x28);
        cVar2 = FUN_004113d0(lVar1,&PTR_FUN_006d1510);
        if (cVar2 == '\0') {
          cVar2 = FUN_004113d0(lVar1,&PTR_FUN_006c6e18);
          if (cVar2 != '\0') {
            uVar4 = FUN_004b1870(param_2);
            uVar7 = FUN_006efcb0(*(undefined8 *)(lVar1 + 0x4e0),uVar4);
            FUN_006ef050(uVar7,*(undefined8 *)(param_2 + 0x20));
            FUN_006ef370(uVar7,0,*(undefined4 *)(param_2 + 0x30));
            FUN_006ef160(uVar7,*(undefined8 *)(param_2 + 0x28));
          }
        }
        else {
          lVar1 = *(longlong *)(lVar5 + 0x28);
          uVar4 = FUN_004b1870(param_2);
          plVar6 = (longlong *)FUN_006a35d0(*(undefined8 *)(lVar1 + 0x588),uVar4);
          (**(code **)(*plVar6 + 0x48))(plVar6,*(undefined8 *)(param_2 + 0x20));
          (**(code **)(*plVar6 + 0x58))(plVar6,*(undefined4 *)(param_2 + 0x30));
          (**(code **)(*plVar6 + 0x50))(plVar6,*(undefined8 *)(param_2 + 0x28));
        }
        iVar8 = iVar8 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  return;
}

