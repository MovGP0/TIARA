/* Ghidra address: 010ee5b0 */
/* Ghidra symbol: FUN_010ee5b0 */


void FUN_010ee5b0(longlong param_1)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar6 = *(longlong *)(param_1 + 0x78);
  if ((*(longlong *)(param_1 + 0x80) == 0) &&
     (iVar3 = (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x28))(*(longlong **)(lVar6 + 0xd8)),
     iVar3 == 1)) {
    uVar4 = (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x30))(*(longlong **)(lVar6 + 0xd8),0);
    cVar2 = FUN_004113d0(uVar4,&DAT_01cdd500);
    if (cVar2 != '\0') {
      lVar5 = (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x30))(*(longlong **)(lVar6 + 0xd8),0);
      iVar3 = (**(code **)(**(longlong **)(lVar5 + 0x70) + 0x28))(*(longlong **)(lVar5 + 0x70));
      if (iVar3 == 1) {
        lVar5 = (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x30))(*(longlong **)(lVar6 + 0xd8),0);
        iVar3 = (**(code **)(**(longlong **)(lVar5 + 0x78) + 0x28))(*(longlong **)(lVar5 + 0x78));
        if (iVar3 == 1) {
          lVar5 = (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x30))
                            (*(longlong **)(lVar6 + 0xd8),0);
          uVar4 = (**(code **)(**(longlong **)(lVar5 + 0x70) + 0x30))
                            (*(longlong **)(lVar5 + 0x70),0);
          uVar4 = FUN_01cd62b0(uVar4,*(undefined4 *)(param_1 + 0x68));
          *(undefined8 *)(param_1 + 0x48) = uVar4;
          lVar5 = (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x30))
                            (*(longlong **)(lVar6 + 0xd8),0);
          uVar4 = (**(code **)(**(longlong **)(lVar5 + 0x78) + 0x30))
                            (*(longlong **)(lVar5 + 0x78),0);
          uVar4 = FUN_01cd62b0(uVar4,*(undefined4 *)(param_1 + 0x6c));
          *(undefined8 *)(param_1 + 0x50) = uVar4;
          lVar5 = (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x30))
                            (*(longlong **)(lVar6 + 0xd8),0);
          uVar4 = (**(code **)(**(longlong **)(lVar5 + 0x70) + 0x30))
                            (*(longlong **)(lVar5 + 0x70),0);
          uVar4 = FUN_01cd62b0(uVar4,*(undefined4 *)(param_1 + 0x70));
          *(undefined8 *)(param_1 + 0x58) = uVar4;
          lVar6 = (**(code **)(**(longlong **)(lVar6 + 0xd8) + 0x30))
                            (*(longlong **)(lVar6 + 0xd8),0);
          uVar4 = (**(code **)(**(longlong **)(lVar6 + 0x78) + 0x30))
                            (*(longlong **)(lVar6 + 0x78),0);
          uVar4 = FUN_01cd62b0(uVar4,*(undefined4 *)(param_1 + 0x74));
          *(undefined8 *)(param_1 + 0x60) = uVar4;
          return;
        }
      }
    }
  }
  plVar1 = *(longlong **)(param_1 + 0x80);
  if (plVar1 == (longlong *)0x0) {
    *(double *)(param_1 + 0x48) =
         (double)(*(int *)(param_1 + 0x68) - *(int *)(lVar6 + 0x14)) /
         (double)(*(int *)(lVar6 + 0x1c) - *(int *)(lVar6 + 0x14));
    *(double *)(param_1 + 0x50) =
         (double)(*(int *)(param_1 + 0x6c) - *(int *)(lVar6 + 0x18)) /
         (double)(*(int *)(lVar6 + 0x20) - *(int *)(lVar6 + 0x18));
    *(double *)(param_1 + 0x58) =
         (double)(*(int *)(param_1 + 0x70) - *(int *)(lVar6 + 0x14)) /
         (double)(*(int *)(lVar6 + 0x1c) - *(int *)(lVar6 + 0x14));
    *(double *)(param_1 + 0x60) =
         (double)(*(int *)(param_1 + 0x74) - *(int *)(lVar6 + 0x18)) /
         (double)(*(int *)(lVar6 + 0x20) - *(int *)(lVar6 + 0x18));
  }
  else {
    (**(code **)(*plVar1 + 0xf8))
              (plVar1,*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c),param_1 + 0x48
               ,param_1 + 0x50);
    (**(code **)(**(longlong **)(param_1 + 0x80) + 0xf8))
              (*(longlong **)(param_1 + 0x80),*(undefined4 *)(param_1 + 0x70),
               *(undefined4 *)(param_1 + 0x74),param_1 + 0x58,param_1 + 0x60);
  }
  return;
}

