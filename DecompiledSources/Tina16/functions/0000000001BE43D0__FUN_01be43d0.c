/* Ghidra address: 01be43d0 */
/* Ghidra symbol: FUN_01be43d0 */


void FUN_01be43d0(longlong *param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined1 local_21;
  longlong local_20;
  
  local_30 = auStack_58;
  if (*(char *)((longlong)param_1 + 0x592) != '\0') {
    return;
  }
  param_1[0xba] = (longlong)param_1;
  local_21 = 1;
  puVar1 = auStack_58;
  if (param_1[0xbf] != 0) {
    (*(code *)param_1[0xbf])(param_1[0xc0],param_1);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  local_20 = FUN_01be3560(&PTR_FUN_01be3360,1,param_1);
  (**(code **)(*param_1 + 0x3f8))(param_1);
  if (*(char *)(local_20 + 0x78) != '\0') goto code_r0x01be4523;
  if (param_1[0xcb] == 0) {
LAB_01be44b5:
    local_21 = 1;
  }
  else {
    if (param_1[0xcb] != 0) {
      uVar3 = FUN_01bfd980(param_1[0xcb]);
      cVar2 = FUN_004113d0(uVar3,&PTR_FUN_0061c2b8);
      if ((cVar2 != '\0') && (lVar4 = FUN_01bfd980(param_1[0xcb]), *(char *)(lVar4 + 0xd9) == '\0'))
      goto LAB_01be44b5;
    }
    local_21 = 0;
  }
  cVar2 = (**(code **)(*param_1 + 0x2c8))(param_1);
  if ((cVar2 == '\0') && (param_1[0xcb] != 0)) {
    FUN_01bfdd30(param_1[0xcb]);
    (**(code **)(*param_1 + 0x198))(param_1);
    uVar3 = FUN_01bfd980(param_1[0xcb]);
    (**(code **)(*param_1 + 0x3d0))(param_1,uVar3);
  }
code_r0x01be4523:
  if ((*(char *)(local_20 + 0x78) == '\0') && (param_1[0xc1] != 0)) {
    (*(code *)param_1[0xc1])(param_1[0xc2],param_1,local_21);
  }
  FUN_00410f20(local_20);
  return;
}

