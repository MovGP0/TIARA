/* Ghidra address: 01be9090 */
/* Ghidra symbol: FUN_01be9090 */


longlong * FUN_01be9090(longlong param_1,undefined1 param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  plVar3 = (longlong *)FUN_00829530(&PTR_FUN_01bdeaf8,1,*(undefined8 *)(param_1 + 0x40));
  FUN_0064dbe0(plVar3,0);
  (**(code **)(*plVar3 + 0x130))(plVar3,*(undefined8 *)(param_1 + 0x40));
  FUN_0064cb90(plVar3,*(int *)(*(longlong *)(param_1 + 0x40) + 0x504) + 1);
  uVar2 = (**(code **)(*plVar3 + 0x1a0))(plVar3,0x36);
  FUN_0064cbf0(plVar3,uVar2);
  uVar2 = (**(code **)(*plVar3 + 0x1a0))(plVar3,0x37);
  FUN_0064cc50(plVar3,uVar2);
  *(undefined1 *)(plVar3 + 0x68) = param_2;
  uVar4 = FUN_006aa610(&PTR_FUN_01be0ce8,1,*(undefined8 *)(param_1 + 0x40));
  FUN_0064c270(plVar3,uVar4);
  cVar1 = *(char *)(*(longlong *)(param_1 + 0x40) + 0x4c3);
  if (cVar1 == '\0') {
    FUN_0064c1a0(plVar3,6);
    cVar1 = (char)plVar3[0x68];
    if (cVar1 == '\0') {
      FUN_0064cb30(plVar3,((*(int *)(*(longlong *)(param_1 + 0x40) + 0x98) + (int)plVar3[0x13] * -3)
                          - *(int *)(*(longlong *)(param_1 + 0x40) + 0x504)) + -1);
    }
    else if (cVar1 == '\x01') {
      FUN_0064cb30(plVar3,((*(int *)(*(longlong *)(param_1 + 0x40) + 0x98) + (int)plVar3[0x13] * -2)
                          - *(int *)(*(longlong *)(param_1 + 0x40) + 0x504)) + -1);
    }
    else if (cVar1 == '\x02') {
      FUN_0064cb30(plVar3,((*(int *)(*(longlong *)(param_1 + 0x40) + 0x98) - (int)plVar3[0x13]) -
                          *(int *)(*(longlong *)(param_1 + 0x40) + 0x504)) + -1);
    }
  }
  else if (cVar1 == '\x01') {
    cVar1 = (char)plVar3[0x68];
    if (cVar1 == '\0') {
      FUN_0064cb30(plVar3,(int)plVar3[0x13] * 2 + *(int *)(*(longlong *)(param_1 + 0x40) + 0x504) +
                          1);
    }
    else if (cVar1 == '\x01') {
      FUN_0064cb30(plVar3,(int)plVar3[0x13] + *(int *)(*(longlong *)(param_1 + 0x40) + 0x504) + 1);
    }
    else if (cVar1 == '\x02') {
      FUN_0064cb30(plVar3,*(int *)(*(longlong *)(param_1 + 0x40) + 0x504) + 1);
    }
  }
  uVar4 = (**(code **)(*plVar3 + 0xd0))(plVar3);
  lVar5 = FUN_004113f0(uVar4,&PTR_FUN_01be0ce8);
  cVar1 = (char)plVar3[0x68];
  if (cVar1 == '\0') {
    *(undefined1 *)(lVar5 + 0x150) = 3;
  }
  else if (cVar1 == '\x01') {
    *(undefined1 *)(lVar5 + 0x150) = 2;
  }
  else if (cVar1 == '\x02') {
    *(undefined1 *)(lVar5 + 0x150) = 1;
  }
  FUN_0064dbe0(*(undefined8 *)(param_1 + 0x40),1);
  return plVar3;
}

