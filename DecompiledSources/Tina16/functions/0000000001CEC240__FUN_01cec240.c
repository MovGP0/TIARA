/* Ghidra address: 01cec240 */
/* Ghidra symbol: FUN_01cec240 */


void FUN_01cec240(longlong param_1,undefined4 param_2,undefined8 *param_3,undefined8 *param_4,
                 longlong *param_5)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  
  uVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                    (*(longlong **)(param_1 + 0x10),param_2);
  cVar1 = FUN_004113d0(uVar4,&DAT_013d1e58);
  if (cVar1 == '\0') {
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                      (*(longlong **)(param_1 + 0x10),param_2);
    FUN_00410f20(uVar4);
  }
  else {
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                      (*(longlong **)(param_1 + 0x10),param_2);
    FUN_00410f20(uVar4);
  }
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x98))(*(longlong **)(param_1 + 0x10),param_2);
  *param_3 = 0;
  *param_4 = 0;
  plVar5 = (longlong *)FUN_006d6380(param_5);
  (**(code **)(*plVar5 + 0x98))(plVar5,param_2);
  plVar5 = (longlong *)FUN_006d6380(param_5);
  iVar2 = (**(code **)(*plVar5 + 0x28))(plVar5);
  if (iVar2 == 0) {
    (**(code **)(*param_5 + 0x278))(param_5,0xffffffff);
  }
  else {
    plVar5 = (longlong *)FUN_006d6380(param_5);
    iVar2 = (**(code **)(*plVar5 + 0x28))(plVar5);
    uVar3 = FUN_00b905f0(param_2,iVar2 + -1);
    (**(code **)(*param_5 + 0x278))(param_5,uVar3);
    uVar3 = FUN_006d5120(param_5);
    uVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                      (*(longlong **)(param_1 + 0x10),uVar3);
    cVar1 = FUN_004113d0(uVar4,&DAT_013d1e58);
    if (cVar1 == '\0') {
      uVar3 = FUN_006d5120(param_5);
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                        (*(longlong **)(param_1 + 0x10),uVar3);
      *param_3 = uVar4;
    }
    else {
      uVar3 = FUN_006d5120(param_5);
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                        (*(longlong **)(param_1 + 0x10),uVar3);
      *param_4 = uVar4;
    }
  }
  uVar3 = FUN_006d5120(param_5);
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  FUN_01a7fc90(*(undefined8 *)PTR_DAT_02001e00);
  return;
}

