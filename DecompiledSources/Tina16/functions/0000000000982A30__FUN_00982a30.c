/* Ghidra address: 00982a30 */
/* Ghidra symbol: FUN_00982a30 */


undefined1 FUN_00982a30(longlong *param_1,longlong *param_2)

{
  undefined1 *puVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 *local_30;
  undefined1 local_19;
  
  local_30 = auStack_68;
  puVar1 = auStack_68;
  if (param_2 == (longlong *)0x0) {
    uVar4 = FUN_0044d490(&PTR_FUN_004361b8,1,L"Source node not specified.");
    FUN_004134c0(uVar4);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  local_19 = 1;
  cVar2 = (**(code **)(*param_2 + 0x168))(param_2);
  if (cVar2 == '\b') {
    param_1[0x12] = (longlong)param_2;
    lVar5 = FUN_004113f0(param_2,&PTR_FUN_0090df78);
    local_48 = *(undefined1 *)(lVar5 + 200);
    (**(code **)(*param_1 + 0x118))
              (param_1,*(undefined8 *)(lVar5 + 0xa8),*(undefined8 *)(lVar5 + 0xd0),
               *(undefined8 *)(lVar5 + 0xc0));
    (**(code **)(*param_1 + 0x108))(param_1,&LAB_00982c28,0);
  }
  else {
    param_1[0x12] = 0;
    lVar5 = (**(code **)(*param_2 + 0x188))(param_2);
    iVar3 = FUN_00416420(*(undefined8 *)(lVar5 + 0xc0),0);
    if (iVar3 == 0) {
      lVar5 = (**(code **)(*param_2 + 0x188))(param_2);
      (**(code **)(*param_1 + 0x120))(param_1,*(undefined8 *)(lVar5 + 0xa8));
    }
    else {
      lVar5 = (**(code **)(*param_2 + 0x188))(param_2);
      (**(code **)(*param_1 + 0x120))(param_1,*(undefined8 *)(lVar5 + 0xc0));
    }
  }
  (**(code **)(*param_1 + 0xb8))(param_1,param_2);
  (**(code **)(*param_1 + 0x100))(param_1);
  return local_19;
}

