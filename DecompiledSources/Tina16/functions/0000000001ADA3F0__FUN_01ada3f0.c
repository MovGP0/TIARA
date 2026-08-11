/* Ghidra address: 01ada3f0 */
/* Ghidra symbol: FUN_01ada3f0 */


void FUN_01ada3f0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined8 local_res18 [2];
  
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  cVar1 = FUN_01ada080(param_1);
  if (cVar1 != '\0') {
    iVar2 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x28))(*(longlong **)(param_1 + 0xd8));
    iVar6 = 1;
    if (0 < iVar2) {
      do {
        lVar4 = (**(code **)(**(longlong **)(param_1 + 0xd8) + 0x30))
                          (*(longlong **)(param_1 + 0xd8),iVar6 + -1);
        iVar3 = (**(code **)(**(longlong **)(lVar4 + 0x80) + 0x28))(*(longlong **)(lVar4 + 0x80));
        iVar7 = 1;
        if (0 < iVar3) {
          do {
            iVar8 = iVar7 + -1;
            uVar5 = (**(code **)(**(longlong **)(lVar4 + 0x80) + 0x30))
                              (*(longlong **)(lVar4 + 0x80),iVar8);
            cVar1 = FUN_004113d0(uVar5,&PTR_FUN_01aae560);
            if (cVar1 == '\0') {
              uVar5 = (**(code **)(**(longlong **)(lVar4 + 0x80) + 0x30))
                                (*(longlong **)(lVar4 + 0x80),iVar8);
              FUN_01ab8f10(uVar5,local_res18[0]);
            }
            else {
              uVar5 = (**(code **)(**(longlong **)(lVar4 + 0x80) + 0x30))
                                (*(longlong **)(lVar4 + 0x80),iVar8);
              FUN_01ab4570(uVar5,local_res18[0]);
            }
            iVar7 = iVar7 + 1;
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        iVar6 = iVar6 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    FUN_01acfc60(param_1);
  }
  FUN_00414480(local_res18);
  return;
}

