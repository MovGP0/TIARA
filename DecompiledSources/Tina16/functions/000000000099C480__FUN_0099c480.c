/* Ghidra address: 0099c480 */
/* Ghidra symbol: FUN_0099c480 */


longlong * FUN_0099c480(longlong param_1,longlong *param_2,char param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined8 local_20;
  
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_20 = 0;
  if (param_2 == (longlong *)0x0) {
    uVar4 = FUN_0044d490(&PTR_FUN_00901f50,1,L"XPath type error.");
    FUN_004134c0(uVar4);
  }
  iVar2 = FUN_00416420(*(undefined8 *)(param_1 + 0x28),&DAT_0099c814);
  if (iVar2 == 0) {
    iVar2 = (**(code **)(*param_2 + 0x118))(param_2);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      plVar5 = (longlong *)(**(code **)(*param_2 + 0x110))(param_2,iVar2);
      cVar1 = (**(code **)(*plVar5 + 0x168))(plVar5);
      if (cVar1 != param_3) {
        (**(code **)(*param_2 + 0x158))(param_2,iVar2);
      }
    }
  }
  else {
    iVar2 = FUN_00416420(*(undefined8 *)(param_1 + 0x30),0);
    if (iVar2 == 0) {
      FUN_00414520(&local_20);
    }
    else {
      FUN_00995210(param_1,&local_20,*(undefined8 *)(param_1 + 0x30));
      iVar2 = FUN_00416420(local_20,0);
      if (iVar2 == 0) {
        FUN_00410f20(param_2);
        local_38 = *(undefined8 *)(param_1 + 0x30);
        local_30 = 0xf;
        uVar4 = FUN_0044d530(&PTR_FUN_00901770,1,L"Namespace URI of prefix \'%S\' not found.",
                             &local_38,0);
        FUN_004134c0(uVar4);
      }
    }
    iVar2 = FUN_00416420(*(undefined8 *)(param_1 + 0x38),&DAT_0099c814);
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*param_2 + 0x118))(param_2);
joined_r0x0099c61c:
      iVar2 = iVar2 + -1;
      if (-1 < iVar2) {
        plVar5 = (longlong *)(**(code **)(*param_2 + 0x110))(param_2,iVar2);
        cVar1 = (**(code **)(*plVar5 + 0x168))(plVar5);
        if (cVar1 == param_3) goto code_r0x0099c646;
        goto LAB_0099c67d;
      }
    }
    else {
      iVar2 = (**(code **)(*param_2 + 0x118))(param_2);
      while (iVar2 = iVar2 + -1, -1 < iVar2) {
        plVar5 = (longlong *)(**(code **)(*param_2 + 0x110))(param_2,iVar2);
        cVar1 = (**(code **)(*plVar5 + 0x168))(plVar5);
        if (cVar1 != param_3) goto LAB_0099c751;
        plVar5 = (longlong *)(**(code **)(*param_2 + 0x110))(param_2,iVar2);
        (**(code **)(*plVar5 + 0x150))(plVar5,&local_48);
        iVar3 = FUN_00416420(local_48,local_20);
        if (iVar3 != 0) goto LAB_0099c751;
        plVar5 = (longlong *)(**(code **)(*param_2 + 0x110))(param_2,iVar2);
        (**(code **)(*plVar5 + 0x148))(plVar5,&local_50);
        iVar3 = FUN_00416420(local_50,*(undefined8 *)(param_1 + 0x38));
        if (iVar3 != 0) {
LAB_0099c751:
          (**(code **)(*param_2 + 0x158))(param_2,iVar2);
        }
      }
    }
  }
  FUN_004145c0(&local_50,3);
  FUN_00414520(&local_20);
  return param_2;
code_r0x0099c646:
  plVar5 = (longlong *)(**(code **)(*param_2 + 0x110))(param_2,iVar2);
  (**(code **)(*plVar5 + 0x150))(plVar5,&local_40);
  iVar3 = FUN_00416420(local_40,local_20);
  if (iVar3 != 0) {
LAB_0099c67d:
    (**(code **)(*param_2 + 0x158))(param_2,iVar2);
  }
  goto joined_r0x0099c61c;
}

