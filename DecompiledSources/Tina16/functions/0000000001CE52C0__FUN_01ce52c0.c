/* Ghidra address: 01ce52c0 */
/* Ghidra symbol: FUN_01ce52c0 */


void FUN_01ce52c0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if (*(byte *)(param_1 + 0x58) < 8) {
    bVar6 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) << (*(byte *)(param_1 + 0x58) & 0x1f)
            & 3U) != 0;
  }
  else {
    bVar6 = false;
  }
  if (bVar6) {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x28))(*(longlong **)(param_1 + 0x80));
    iVar4 = 1;
    if (0 < iVar2) {
      do {
        iVar5 = iVar4 + -1;
        uVar3 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                          (*(longlong **)(param_1 + 0x80),iVar5);
        cVar1 = FUN_004113d0(uVar3,&PTR_FUN_01aae560);
        if (cVar1 == '\0') {
          uVar3 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                            (*(longlong **)(param_1 + 0x80),iVar5);
          cVar1 = FUN_004113d0(uVar3,&PTR_FUN_01aaff18);
          if (cVar1 != '\0') {
            uVar3 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                              (*(longlong **)(param_1 + 0x80),iVar5);
            uVar3 = FUN_004113f0(uVar3,&PTR_FUN_01aaff18);
            FUN_01ab84c0(uVar3,param_2,param_3,param_4);
          }
        }
        else {
          uVar3 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                            (*(longlong **)(param_1 + 0x80),iVar5);
          uVar3 = FUN_004113f0(uVar3,&PTR_FUN_01aae560);
          FUN_01ab3990(uVar3,param_2,param_3,param_4);
        }
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return;
}

