/* Ghidra address: 019d6510 */
/* Ghidra symbol: FUN_019d6510 */


void FUN_019d6510(longlong param_1,undefined8 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))(*(longlong **)(param_1 + 0x720));
  if (iVar1 == 0) {
    *(undefined2 *)((longlong)param_2 + 0x1fa4) = 0x4c;
    uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6b8));
    *param_2 = uVar3;
    uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6c8));
    param_2[2] = uVar3;
    uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6d8));
    param_2[4] = uVar3;
    uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6e8));
    param_2[6] = uVar3;
  }
  else {
    iVar1 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))(*(longlong **)(param_1 + 0x720))
    ;
    if (iVar1 == 1) {
      *(undefined2 *)((longlong)param_2 + 0x1fa4) = 0x48;
      uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6c8));
      *param_2 = uVar3;
      uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6b8));
      param_2[2] = uVar3;
      uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6e8));
      param_2[4] = uVar3;
      uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6d8));
      param_2[6] = uVar3;
    }
    else {
      iVar1 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))
                        (*(longlong **)(param_1 + 0x720));
      if (iVar1 == 2) {
        uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6b8));
        uVar4 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6c8));
        uVar5 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6d8));
        uVar6 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6e8));
        uVar7 = FUN_00b90090(*(undefined8 *)(param_1 + 0x760));
        uVar8 = FUN_00b90090(*(undefined8 *)(param_1 + 0x770));
        *(undefined2 *)((longlong)param_2 + 0x1fa4) = 0x50;
        *param_2 = uVar4;
        param_2[2] = uVar3;
        param_2[3] = uVar3;
        param_2[4] = uVar6;
        param_2[5] = uVar7;
        param_2[6] = uVar5;
        param_2[7] = uVar8;
      }
      else {
        iVar1 = (**(code **)(**(longlong **)(param_1 + 0x720) + 0x260))
                          (*(longlong **)(param_1 + 0x720));
        if (iVar1 == 3) {
          uVar3 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6b8));
          uVar4 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6c8));
          uVar5 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6d8));
          uVar6 = FUN_00b90090(*(undefined8 *)(param_1 + 0x6e8));
          uVar7 = FUN_00b90090(*(undefined8 *)(param_1 + 0x760));
          uVar8 = FUN_00b90090(*(undefined8 *)(param_1 + 0x770));
          *(undefined2 *)((longlong)param_2 + 0x1fa4) = 0x53;
          *param_2 = uVar3;
          param_2[1] = uVar3;
          param_2[2] = uVar4;
          param_2[4] = uVar5;
          param_2[5] = uVar8;
          param_2[6] = uVar6;
          param_2[7] = uVar7;
        }
      }
    }
  }
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x740) + 0x260))(*(longlong **)(param_1 + 0x740));
  *(undefined4 *)((longlong)param_2 + 0x1fcc) = uVar2;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x750) + 0x260))(*(longlong **)(param_1 + 0x750));
  *(bool *)((longlong)param_2 + 0x1fc9) = iVar1 == 1;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x730) + 0x260))(*(longlong **)(param_1 + 0x730));
  *(bool *)(param_2 + 0x3f9) = iVar1 == 0;
  *(bool *)((longlong)param_2 + 0x1fca) = *(char *)((longlong)param_2 + 0x1fc9) == '\0';
  if (*(short *)((longlong)param_2 + 0x1fa4) != 0x4c) {
    *(undefined1 *)(param_2 + 0x3f9) = 1;
  }
  return;
}

