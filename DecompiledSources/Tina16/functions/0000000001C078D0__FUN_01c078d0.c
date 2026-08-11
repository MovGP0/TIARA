/* Ghidra address: 01c078d0 */
/* Ghidra symbol: FUN_01c078d0 */


void FUN_01c078d0(longlong param_1,longlong param_2)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_28;
  longlong *local_20;
  
  local_30 = auStack_58;
  FUN_00652190(param_1,param_2);
  plVar2 = (longlong *)FUN_01c07120(param_1);
  cVar1 = (**(code **)(*plVar2 + 0x2c8))(plVar2);
  if ((cVar1 == '\0') && (*(longlong *)(param_1 + 800) != 0)) {
    local_28 = FUN_01bfa9d0(*(longlong *)(param_1 + 800));
    if (0 < *(int *)(*(longlong *)(local_28 + 0x10) + 0x10)) {
      uVar3 = FUN_01c07120(param_1);
      lVar4 = FUN_01c03e30(uVar3);
      uVar3 = (**(code **)(lVar4 + 0x78))(lVar4,1,*(undefined8 *)(param_1 + 8));
      local_20 = (longlong *)FUN_004113f0(uVar3,&PTR_FUN_01bdd620);
      *(undefined1 *)((longlong)local_20 + 0x524) = 1;
      (**(code **)(*local_20 + 0x130))(local_20,*(undefined8 *)(param_1 + 0x78));
      (**(code **)(*local_20 + 0x308))(local_20,*(undefined8 *)(param_1 + 800));
      FUN_01be60b0(local_20,(longlong)*(short *)(param_2 + 0x10),
                   (longlong)*(short *)(param_2 + 0x12));
      FUN_00410f20(local_20);
    }
  }
  return;
}

