/* Ghidra address: 0095dd80 */
/* Ghidra symbol: FUN_0095dd80 */


undefined8
FUN_0095dd80(longlong param_1,undefined8 param_2,undefined4 *param_3,char param_4,char *param_5)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 local_3c [3];
  
  *param_5 = '\0';
  uVar5 = 0;
  local_3c[0] = *param_3;
  cVar1 = '\0';
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x20))();
  iVar6 = 0;
  if (-1 < iVar2 + -1) {
    do {
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x30))
                        (*(longlong **)(param_1 + 0x38),iVar6);
      plVar4 = (longlong *)FUN_004113f0(uVar3,&PTR_FUN_00911b78);
      cVar1 = (**(code **)(*plVar4 + 0x20))(plVar4,param_2,local_3c,param_5);
      if (cVar1 == '\0') break;
      iVar6 = iVar6 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (param_4 == '\0') {
    if (cVar1 == '\0') {
      uVar5 = 0;
    }
    else {
      *param_3 = local_3c[0];
      uVar5 = 1;
    }
  }
  else if (param_4 == '\x01') {
    if (cVar1 != '\0') {
      *param_3 = local_3c[0];
    }
    uVar5 = 1;
  }
  if (*param_5 != '\0') {
    uVar5 = 0;
  }
  return uVar5;
}

