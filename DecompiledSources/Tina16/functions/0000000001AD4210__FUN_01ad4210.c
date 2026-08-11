/* Ghidra address: 01ad4210 */
/* Ghidra symbol: FUN_01ad4210 */


void FUN_01ad4210(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))();
  iVar6 = 0;
  if (-1 < iVar1 + -1) {
    do {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                        (*(longlong **)(param_1 + 0xd8),iVar6);
      lVar4 = FUN_004113f0(uVar3,&DAT_01cdd500);
      iVar2 = (**(code **)(**(longlong **)(lVar4 + 0x70) + 0x28))();
      iVar7 = 0;
      if (-1 < iVar2 + -1) {
        do {
          lVar5 = (**(code **)(**(longlong **)(lVar4 + 0x70) + 0x30))
                            (*(longlong **)(lVar4 + 0x70),iVar7);
          if (lVar5 != param_2) {
            uVar3 = (**(code **)(**(longlong **)(lVar4 + 0x70) + 0x30))
                              (*(longlong **)(lVar4 + 0x70),iVar7);
            FUN_01ccdc70(uVar3,param_2,0);
          }
          iVar7 = iVar7 + 1;
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar6 = iVar6 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}

