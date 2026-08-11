/* Ghidra address: 006a3e50 */
/* Ghidra symbol: FUN_006a3e50 */


void FUN_006a3e50(longlong param_1,longlong param_2,char param_3)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  int iVar8;
  
  if (param_3 == '\x01') {
    if ((*(longlong *)(param_1 + 0x48) != 0) &&
       (*(char *)(*(longlong *)(param_1 + 0x48) + 0x138) != '\0')) {
      iVar2 = FUN_004d4cf0();
      iVar8 = 0;
      if (-1 < iVar2 + -1) {
        do {
          lVar4 = FUN_004d4cc0(*(undefined8 *)(param_1 + 0x48),iVar8);
          lVar7 = *(longlong *)(lVar4 + 0x28);
          cVar1 = FUN_004113d0(lVar7,&PTR_FUN_006d1510);
          if (cVar1 == '\0') {
            cVar1 = FUN_004113d0(lVar7,&PTR_FUN_006c6e18);
            if (cVar1 != '\0') {
              uVar6 = FUN_006efb70(*(undefined8 *)(lVar7 + 0x4e0));
              FUN_006ef050(uVar6,*(undefined8 *)(param_2 + 0x20));
              FUN_006ef370(uVar6,0,*(undefined4 *)(param_2 + 0x30));
              FUN_006ef160(uVar6,*(undefined8 *)(param_2 + 0x28));
            }
          }
          else {
            plVar5 = (longlong *)FUN_00703c70(*(undefined8 *)(*(longlong *)(lVar4 + 0x28) + 0x588));
            (**(code **)(*plVar5 + 0x48))(plVar5,*(undefined8 *)(param_2 + 0x20));
            (**(code **)(*plVar5 + 0x58))(plVar5,*(undefined4 *)(param_2 + 0x30));
            (**(code **)(*plVar5 + 0x50))(plVar5,*(undefined8 *)(param_2 + 0x28));
          }
          iVar8 = iVar8 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
    }
  }
  else if (((param_3 == '\x04') && (*(longlong *)(param_1 + 0x48) != 0)) &&
          (*(char *)(*(longlong *)(param_1 + 0x48) + 0x138) != '\0')) {
    iVar2 = FUN_004d4cf0();
    iVar8 = 0;
    if (-1 < iVar2 + -1) {
      do {
        lVar7 = FUN_004d4cc0(*(undefined8 *)(param_1 + 0x48),iVar8);
        lVar7 = *(longlong *)(lVar7 + 0x28);
        cVar1 = FUN_004113d0(lVar7,&PTR_FUN_006d1510);
        if (cVar1 == '\0') {
          cVar1 = FUN_004113d0(lVar7,&PTR_FUN_006c6e18);
          if (cVar1 != '\0') {
            uVar3 = FUN_004b1870(param_2);
            FUN_006f1440(*(undefined8 *)(lVar7 + 0x4e0),uVar3);
          }
        }
        else {
          uVar3 = FUN_004b1870(param_2);
          (**(code **)(**(longlong **)(lVar7 + 0x4f0) + 0x98))(*(longlong **)(lVar7 + 0x4f0),uVar3);
        }
        iVar8 = iVar8 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

