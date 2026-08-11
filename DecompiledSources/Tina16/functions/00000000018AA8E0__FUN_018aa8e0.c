/* Ghidra address: 018aa8e0 */
/* Ghidra symbol: FUN_018aa8e0 */


void FUN_018aa8e0(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  
  (**(code **)(**(longlong **)(param_1 + 0x60) + 0x268))(*(longlong **)(param_1 + 0x60));
  iVar2 = FUN_0196f500();
  iVar5 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x268))(*(longlong **)(param_1 + 0x60))
      ;
      uVar3 = FUN_0196f4e0(uVar3,iVar5);
      cVar1 = FUN_004113d0(uVar3,&PTR_FUN_01934910);
      if (cVar1 != '\0') {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x60) + 0x268))
                          (*(longlong **)(param_1 + 0x60));
        plVar4 = (longlong *)FUN_0196f4e0(uVar3,iVar5);
        FUN_0196b9e0(plVar4,*(undefined1 *)(*(longlong *)(param_1 + 0x38) + 0x1b1));
        (**(code **)(*plVar4 + 0x270))
                  (plVar4,*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x238));
        (**(code **)(*plVar4 + 0x268))
                  (plVar4,*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x228));
        (**(code **)(*plVar4 + 0x278))
                  (plVar4,*(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x230));
        plVar4[0x35] = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x1a8);
        plVar4[0x39] = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x1c8);
        plVar4[0x3c] = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x1e0);
        plVar4[0x2f] = *(longlong *)(*(longlong *)(param_1 + 0x38) + 0x178);
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return;
}

