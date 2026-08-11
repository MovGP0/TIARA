/* Ghidra address: 01ad0c80 */
/* Ghidra symbol: FUN_01ad0c80 */


undefined8 FUN_01ad0c80(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = 0;
  iVar8 = 0;
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))(*(longlong **)(param_1 + 0xd8));
  iVar6 = 1;
  if (0 < iVar1) {
    do {
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                        (*(longlong **)(param_1 + 0xd8),iVar6 + -1);
      lVar5 = FUN_004113f0(uVar4,&DAT_01cdd500);
      iVar8 = iVar8 + *(int *)(lVar5 + 0x94);
      iVar2 = (**(code **)(**(longlong **)(lVar5 + 0x80) + 0x28))(*(longlong **)(lVar5 + 0x80));
      iVar3 = 1;
      if (0 < iVar2) {
        do {
          if (iVar7 - iVar8 == param_2) {
            uVar4 = (**(code **)(**(longlong **)(lVar5 + 0x80) + 0x30))
                              (*(longlong **)(lVar5 + 0x80),iVar3 + -1);
            return uVar4;
          }
          iVar7 = iVar7 + 1;
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar6 = iVar6 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return 0;
}

