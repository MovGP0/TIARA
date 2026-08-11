/* Ghidra address: 00952380 */
/* Ghidra symbol: FUN_00952380 */


void FUN_00952380(longlong *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  int iVar7;
  longlong *local_48;
  undefined8 local_40 [2];
  
  local_40[0] = 0;
  local_48 = (longlong *)0x0;
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x110))(param_1);
  iVar2 = (**(code **)*puVar3)(puVar3);
  while (plVar6 = local_48, 0 < iVar2) {
    iVar2 = iVar2 + -1;
    plVar4 = (longlong *)(**(code **)(*param_1 + 0x110))(param_1);
    local_48 = (longlong *)(**(code **)(*plVar4 + 0x10))(plVar4,iVar2);
    cVar1 = (**(code **)(*local_48 + 0x168))(local_48);
    if (cVar1 == '\x03') {
      if ((plVar6 != (longlong *)0x0) &&
         (cVar1 = (**(code **)(*plVar6 + 0x168))(plVar6), cVar1 == '\x03')) {
        plVar4 = (longlong *)FUN_004113f0(local_48,&PTR_FUN_0090b468);
        plVar5 = (longlong *)FUN_004113f0(plVar6,&PTR_FUN_0090b468);
        (**(code **)(*plVar5 + 0x2b8))(plVar5,local_40);
        (**(code **)(*plVar4 + 0x2e0))(plVar4,local_40[0]);
        if ((char)plVar5[0x10] != '\0') {
          *(undefined1 *)(plVar4 + 0x10) = 1;
        }
        FUN_00410f20(plVar6);
      }
    }
    else {
      (**(code **)(*local_48 + 0x298))(local_48);
    }
  }
  puVar3 = (undefined8 *)(**(code **)(*param_1 + 0x100))(param_1);
  iVar2 = (**(code **)*puVar3)();
  iVar7 = 0;
  if (-1 < iVar2 + -1) {
    do {
      plVar6 = (longlong *)(**(code **)(*param_1 + 0x100))(param_1);
      plVar6 = (longlong *)(**(code **)(*plVar6 + 0x10))(plVar6,iVar7);
      (**(code **)(*plVar6 + 0x298))(plVar6);
      iVar7 = iVar7 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414520(local_40);
  return;
}

