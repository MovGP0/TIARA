/* Ghidra address: 018ad060 */
/* Ghidra symbol: FUN_018ad060 */


void FUN_018ad060(longlong *param_1,longlong param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  lVar5 = (**(code **)(*param_1 + 0x278))(param_1);
  if (lVar5 != 0) {
    plVar6 = (longlong *)(**(code **)(*param_1 + 0x278))(param_1);
    (**(code **)(*plVar6 + 0x88))(plVar6);
  }
  iVar3 = FUN_006d5120(param_1[0xad]);
  if (iVar3 != -1) {
    (**(code **)(*param_1 + 0x298))(param_1);
    uVar4 = FUN_006d5120(param_1[0xad]);
    FUN_018b0ae0(param_1[0xaf],uVar4);
    if (param_2 != 0) {
      cVar2 = FUN_004113d0(param_2,&PTR_FUN_0189f228);
      if (cVar2 != '\0') {
        (*(code *)param_1[0x9e])(param_1[0x9f],param_2,1);
      }
    }
    lVar5 = param_1[1];
    cVar2 = FUN_004113d0(lVar5,&PTR_FUN_018a1608);
    if ((cVar2 != '\0') && (*(char *)(*(longlong *)(lVar5 + 0x6f8) + 0x31a) != '\0')) {
      FUN_006fa3b0(*(undefined8 *)(lVar5 + 0x6f8),0);
      uVar1 = *(undefined8 *)(param_1[1] + 0x6f8);
      pcVar7 = (code *)FUN_00411550(uVar1,0xffea);
      (*pcVar7)(uVar1);
    }
    (**(code **)(*param_1 + 0x2a0))(param_1,1);
  }
  return;
}

