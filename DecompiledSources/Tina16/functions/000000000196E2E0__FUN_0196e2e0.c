/* Ghidra address: 0196e2e0 */
/* Ghidra symbol: FUN_0196e2e0 */


void FUN_0196e2e0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  if (*(longlong *)(param_1 + 0x30) != 0) {
    lVar2 = FUN_01951400(*(longlong *)(param_1 + 0x30));
    iVar6 = *(int *)(lVar2 + 0x10);
    iVar5 = 0;
    if (-1 < iVar6 + -1) {
      do {
        uVar3 = FUN_004aeac0(lVar2,iVar5);
        cVar1 = FUN_004113d0(uVar3,&PTR_FUN_01925478);
        if (cVar1 != '\0') {
          lVar4 = FUN_004aeac0(lVar2,iVar5);
          lVar4 = FUN_0196dc70(param_1,*(undefined8 *)(lVar4 + 800));
          if (lVar4 == 0) {
            uVar3 = FUN_004aeac0(lVar2,iVar5);
            FUN_0195f970(uVar3,0);
          }
          else {
            uVar3 = FUN_004aeac0(lVar2,iVar5);
            lVar4 = FUN_004aeac0(lVar2,iVar5);
            FUN_0195f970(uVar3,*(undefined8 *)(lVar4 + 800));
          }
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
  }
  return;
}

