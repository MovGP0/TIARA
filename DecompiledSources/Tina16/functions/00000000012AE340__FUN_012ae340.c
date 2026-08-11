/* Ghidra address: 012ae340 */
/* Ghidra symbol: FUN_012ae340 */


void FUN_012ae340(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = (uint)*(byte *)(param_1 + 0xd8a);
  iVar4 = 0;
  if (-1 < (int)(uVar5 - 1)) {
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x7d8) + 0x4f0);
      uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,iVar4);
      lVar3 = FUN_004113f0(uVar2,&PTR_FUN_01105a20);
      if (((*(char *)(lVar3 + 0x11) != '\0') && (*(longlong *)(lVar3 + 0x40) != 0)) &&
         (*(longlong *)(lVar3 + 0x70) != 0)) {
        uVar2 = FUN_004113f0(*(longlong *)(lVar3 + 0x70),&PTR_FUN_010fe770);
        FUN_011026e0(uVar2);
      }
      iVar4 = iVar4 + 1;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  return;
}

