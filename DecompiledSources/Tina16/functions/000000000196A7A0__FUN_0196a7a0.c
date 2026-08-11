/* Ghidra address: 0196a7a0 */
/* Ghidra symbol: FUN_0196a7a0 */


void FUN_0196a7a0(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  
  FUN_0196a6a0(param_1,0);
  lVar2 = (**(code **)(*param_1 + 0x118))(param_1);
  if (lVar2 != 0) {
    uVar3 = (**(code **)(*param_1 + 0x118))(param_1);
    FUN_01973030(uVar3,param_2,param_1[0x31],1);
  }
  lVar2 = FUN_01951400();
  iVar5 = *(int *)(lVar2 + 0x10);
  iVar4 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar3 = FUN_01951400(param_1);
      uVar3 = FUN_004aeac0(uVar3,iVar4);
      cVar1 = FUN_004113d0(uVar3,&PTR_FUN_0191c328);
      if (cVar1 != '\0') {
        uVar3 = FUN_01951400(param_1);
        lVar2 = FUN_004aeac0(uVar3,iVar4);
        if (*(longlong *)(lVar2 + 0x1f8) != 0) {
          uVar3 = FUN_01951400(param_1);
          lVar2 = FUN_004aeac0(uVar3,iVar4);
          (**(code **)(lVar2 + 0x1f8))(*(undefined8 *)(lVar2 + 0x200),param_1);
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  FUN_0196a690(param_1);
  return;
}

