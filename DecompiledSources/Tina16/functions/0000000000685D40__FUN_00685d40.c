/* Ghidra address: 00685d40 */
/* Ghidra symbol: FUN_00685d40 */


void FUN_00685d40(longlong *param_1,ushort *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  longlong *local_30;
  longlong *local_28;
  longlong *local_20;
  
  local_30 = (longlong *)0x0;
  local_28 = (longlong *)0x0;
  local_20 = (longlong *)0x0;
  iVar2 = (**(code **)(*param_1 + 0x260))(param_1);
  FUN_00659a30(param_1,param_2);
  plVar4 = (longlong *)(**(code **)(*param_1 + 0x48))(param_1);
  cVar1 = (**(code **)(*plVar4 + 0x28))(plVar4,1);
  if (cVar1 == '\0') goto LAB_00685ea9;
  if (0x1f < *param_2) {
    uVar5 = (**(code **)(*param_1 + 0x48))(param_1);
    FUN_004db130(&local_20,uVar5);
    cVar1 = (**(code **)(*local_20 + 0x68))(local_20,*param_2);
    if (cVar1 == '\0') {
      thunk_FUN_03f3ed6d(0);
      *param_2 = 0;
    }
  }
  uVar6 = (ulonglong)*param_2;
  if (uVar6 < 0x19) {
    if (((uVar6 != 0x18) && (uVar6 != 8)) && (uVar6 != 0x16)) goto LAB_00685ea9;
  }
  else {
    if (uVar6 == 0x1b) {
      uVar5 = (**(code **)(*param_1 + 0x48))(param_1);
      FUN_004db130(&local_30,uVar5);
      (**(code **)(*local_30 + 0x50))(local_30);
      (**(code **)(*param_1 + 0x2a8))(param_1);
      goto LAB_00685ea9;
    }
    if (0xffdf < uVar6 - 0x20) goto LAB_00685ea9;
  }
  uVar5 = (**(code **)(*param_1 + 0x48))(param_1);
  FUN_004db130(&local_28,uVar5);
  cVar1 = (**(code **)(*local_28 + 0x48))(local_28);
  if (cVar1 == '\0') {
    *param_2 = 0;
  }
LAB_00685ea9:
  if ((char)param_1[0xa7] != '\0') {
    FUN_006860b0(param_1,param_2);
    iVar3 = (**(code **)(*param_1 + 0x260))(param_1);
    if (iVar3 != iVar2) {
      uVar5 = (**(code **)(*param_1 + 0x48))(param_1);
      FUN_004db5e0(uVar5);
    }
  }
  FUN_00417840(&local_30,&DAT_00484dc8,3);
  return;
}

