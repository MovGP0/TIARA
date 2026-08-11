/* Ghidra address: 018aacb0 */
/* Ghidra symbol: FUN_018aacb0 */


void FUN_018aacb0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined8 uVar7;
  
  lVar2 = FUN_01951400(*(undefined8 *)(param_1 + 0x48));
  iVar4 = 0;
  iVar5 = *(int *)(lVar2 + 0x10);
  if (-1 < iVar5 + -1) {
    do {
      plVar3 = (longlong *)FUN_004aeac0(lVar2,iVar4);
      cVar1 = FUN_004113d0(plVar3,&PTR_FUN_01921f40);
      if (cVar1 != '\0') {
        FUN_00414480(plVar3 + 0x35);
        FUN_0195a600(plVar3,0);
        *(undefined1 *)((longlong)plVar3 + 0xc3) = 0;
      }
      if ((plVar3[0x1e] != *(longlong *)(param_1 + 0x48)) &&
         (cVar1 = FUN_004113d0(plVar3[0x1e],&PTR_FUN_0192c3a0), cVar1 != '\0')) {
        uVar7 = FUN_019508b0(plVar3);
        (**(code **)(*plVar3 + 200))(plVar3,uVar7);
        uVar7 = FUN_01950860(plVar3);
        (**(code **)(*plVar3 + 0xd0))(plVar3,uVar7);
        (**(code **)(*plVar3 + 0xf0))(plVar3,0);
        (**(code **)(*plVar3 + 0xc0))(plVar3,*(undefined8 *)(param_1 + 0x48));
        uVar7 = FUN_004113d0(plVar3,&PTR_FUN_01921f40);
        if ((char)uVar7 != '\0') {
          if (*(byte *)(plVar3 + 0x34) < 8) {
            bVar6 = ((int)CONCAT71((int7)((ulonglong)uVar7 >> 8),1) <<
                     (*(byte *)(plVar3 + 0x34) & 0x1f) & 0x60U) != 0;
          }
          else {
            bVar6 = false;
          }
          if (bVar6) {
            *(undefined1 *)(plVar3 + 0x34) = 0;
          }
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = *(int *)(lVar2 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar7 = FUN_004aeac0(lVar2,iVar4);
      cVar1 = FUN_004113d0(uVar7,&PTR_FUN_0192c3a0);
      if (cVar1 != '\0') {
        FUN_00410f20(uVar7);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

