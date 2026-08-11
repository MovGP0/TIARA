/* Ghidra address: 01ce2600 */
/* Ghidra symbol: FUN_01ce2600 */


void FUN_01ce2600(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x28))(*(longlong **)(param_1 + 0x70));
  iVar5 = 1;
  if (0 < iVar1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x30))
                        (*(longlong **)(param_1 + 0x70),iVar5 + -1);
      plVar3 = (longlong *)FUN_004113f0(uVar2,&DAT_01ccbf00);
      if ((char)plVar3[2] != '\0') {
        (**(code **)(*plVar3 + 0xa0))(plVar3,param_2);
        *param_3 = 0;
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x28))(*(longlong **)(param_1 + 0x78));
  iVar5 = 1;
  if (0 < iVar1) {
    do {
      iVar6 = iVar5 + -1;
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                        (*(longlong **)(param_1 + 0x78),iVar6);
      plVar3 = (longlong *)FUN_004113f0(uVar2,&DAT_01ccbf00);
      if ((char)plVar3[2] != '\0') {
        (**(code **)(*plVar3 + 0xa0))(plVar3,param_2);
        *param_3 = 0;
      }
      lVar4 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                        (*(longlong **)(param_1 + 0x78),iVar6);
      if (*(longlong *)(lVar4 + 0x118) != 0) {
        lVar4 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x30))
                          (*(longlong **)(param_1 + 0x78),iVar6);
        plVar3 = *(longlong **)(lVar4 + 0x118);
        if ((char)plVar3[2] != '\0') {
          (**(code **)(*plVar3 + 0xa0))(plVar3,param_2);
          *param_3 = 0;
        }
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x28))(*(longlong **)(param_1 + 0x80));
  iVar5 = 1;
  if (0 < iVar1) {
    do {
      uVar2 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                        (*(longlong **)(param_1 + 0x80),iVar5 + -1);
      plVar3 = (longlong *)FUN_004113f0(uVar2,&PTR_FUN_01d282a8);
      if ((char)plVar3[2] != '\0') {
        (**(code **)(*plVar3 + 0xa0))(plVar3,param_2);
        *param_3 = 0;
      }
      iVar5 = iVar5 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

