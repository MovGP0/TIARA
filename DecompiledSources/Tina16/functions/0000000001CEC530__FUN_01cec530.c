/* Ghidra address: 01cec530 */
/* Ghidra symbol: FUN_01cec530 */


void FUN_01cec530(longlong param_1,undefined8 *param_2,undefined8 param_3,longlong *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x28))(*(longlong **)(param_1 + 0x10));
  iVar5 = 1;
  if (0 < iVar2) {
    do {
      iVar6 = iVar5 + -1;
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                        (*(longlong **)(param_1 + 0x10),iVar6);
      cVar1 = FUN_004113d0(uVar3,&DAT_013d1e58);
      if (cVar1 == '\0') {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                          (*(longlong **)(param_1 + 0x10),iVar6);
        FUN_00410f20(uVar3);
      }
      else {
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x10) + 0x30))
                          (*(longlong **)(param_1 + 0x10),iVar6);
        FUN_00410f20(uVar3);
      }
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414ad0(param_1 + 0x48,L"Noname");
  FUN_00416ba0(local_30,*(undefined8 *)(param_1 + 0x48),&LAB_01cec6d0);
  FUN_0064de00(param_3,local_30[0]);
  (**(code **)(**(longlong **)(param_1 + 0x10) + 0x90))(*(longlong **)(param_1 + 0x10));
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  if (param_4 != (longlong *)0x0) {
    plVar4 = (longlong *)FUN_006d6380(param_4);
    (**(code **)(*plVar4 + 0x90))(plVar4);
    (**(code **)(*param_4 + 0x278))(param_4,0xffffffff);
  }
  *param_2 = 0;
  FUN_00414480(local_30);
  return;
}

