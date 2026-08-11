/* Ghidra address: 01ac3d30 */
/* Ghidra symbol: FUN_01ac3d30 */


void FUN_01ac3d30(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  
  if (*(longlong *)(param_1 + 0x58) == 0) {
    if (*(longlong *)(param_1 + 0x50) != 0) {
      plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x50) + 0x70);
      uVar5 = (**(code **)(*plVar4 + 0x30))(plVar4,0);
      uVar2 = FUN_01cd60f0(uVar5,*(undefined8 *)(param_1 + 0x78));
      *(undefined4 *)(param_1 + 100) = uVar2;
    }
    goto LAB_01ac3e6e;
  }
  lVar3 = FUN_01abdb20(*(undefined8 *)(param_1 + 0x58));
  if (*(longlong *)PTR_DAT_02005620 == lVar3) {
    lVar3 = FUN_01abda80(*(undefined8 *)(param_1 + 0x58));
    if (*(longlong *)PTR_DAT_020041f8 != lVar3) goto LAB_01ac3d6e;
  }
  else {
LAB_01ac3d6e:
    plVar4 = (longlong *)FUN_01abda80(*(undefined8 *)(param_1 + 0x58));
    uVar5 = FUN_01abdb20(*(undefined8 *)(param_1 + 0x58));
    (**(code **)(*plVar4 + 0x10))(plVar4,uVar5,1);
    uVar5 = FUN_01abdb20(*(undefined8 *)(param_1 + 0x58));
    *(undefined8 *)PTR_DAT_02005620 = uVar5;
    uVar5 = FUN_01abda80(*(undefined8 *)(param_1 + 0x58));
    *(undefined8 *)PTR_DAT_020041f8 = uVar5;
  }
  uVar5 = FUN_01abda80(*(undefined8 *)(param_1 + 0x58));
  cVar1 = FUN_004113d0(uVar5,&PTR_FUN_01cb9c30);
  if (cVar1 == '\0') {
    plVar4 = (longlong *)FUN_01abda80(*(undefined8 *)(param_1 + 0x58));
    uVar5 = (**(code **)(*plVar4 + 0x48))(plVar4,*(undefined8 *)(param_1 + 0x78));
    *(undefined8 *)(param_1 + 0x80) = uVar5;
  }
  else {
    plVar4 = (longlong *)FUN_01abda80(*(undefined8 *)(param_1 + 0x58));
    (**(code **)(*plVar4 + 0x90))
              (plVar4,*(undefined8 *)(param_1 + 0x70),param_1 + 0x78,param_1 + 0x80);
  }
  (**(code **)(**(longlong **)(param_1 + 0x58) + 0xf0))
            (*(longlong **)(param_1 + 0x58),*(undefined8 *)(param_1 + 0x78),
             *(undefined8 *)(param_1 + 0x80),param_1 + 100,param_1 + 0x68);
LAB_01ac3e6e:
  FUN_01ac31e0(param_1);
  return;
}

