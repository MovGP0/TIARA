/* Ghidra address: 00681b60 */
/* Ghidra symbol: FUN_00681b60 */


void FUN_00681b60(longlong *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *local_38;
  longlong *local_30;
  undefined1 local_28 [16];
  
  local_38 = (longlong *)0x0;
  local_30 = (longlong *)0x0;
  iVar2 = *param_2;
  if (iVar2 < 0x302) {
    if (iVar2 == 7) {
      iVar2 = FUN_0044f060();
      if ((iVar2 == 1) && (iVar2 = thunk_FUN_041de4d6(*(undefined8 *)(param_2 + 2)), iVar2 == 0)) {
        param_2[2] = 0;
        param_2[3] = 0;
      }
    }
    else if (iVar2 == 0x300) goto LAB_00681ca9;
  }
  else if (iVar2 - 0x302U < 3) {
LAB_00681ca9:
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x48))(param_1);
    cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3,1);
    if (cVar1 != '\0') {
      uVar4 = (**(code **)(*param_1 + 0x48))(param_1);
      FUN_004db130(&local_30,uVar4);
      cVar1 = (**(code **)(*local_30 + 0x48))(local_30);
      if (cVar1 == '\0') goto LAB_00681d5c;
      uVar4 = (**(code **)(*param_1 + 0x48))(param_1);
      FUN_004db130(&local_38,uVar4);
      (**(code **)(*local_38 + 0x58))(local_38);
    }
    plVar3 = (longlong *)(**(code **)(*param_1 + 0x48))(param_1);
    cVar1 = (**(code **)(*plVar3 + 0x28))(plVar3,4);
    if (cVar1 != '\0') {
      uVar4 = (**(code **)(*param_1 + 0x48))(param_1);
      FUN_004db850(uVar4);
    }
  }
  else if (iVar2 == 0xb04d) {
    if (*(char *)((longlong)param_1 + 0x4a4) != '\0') {
      uVar4 = FUN_0065b870(param_1);
      (**(code **)(*param_1 + 0xe0))(param_1,local_28);
      FUN_00648850(uVar4,local_28);
      *(undefined1 *)((longlong)param_1 + 0x4a4) = 0;
    }
  }
  else if (((iVar2 == 0xbd33) && ((*(uint *)((longlong)param_1 + 0xa4) & 0x8000) != 0)) &&
          (*(char *)((longlong)param_1 + 0x4a4) == '\0')) {
    *(undefined1 *)((longlong)param_1 + 0x4a4) = 1;
    uVar4 = FUN_0065b870();
    thunk_FUN_0413e052(uVar4,0xb04d,0,0);
  }
  FUN_00656f10(param_1,param_2);
LAB_00681d5c:
  FUN_00417840(&local_38,&DAT_00484dc8,2);
  return;
}

