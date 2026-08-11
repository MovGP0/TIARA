/* Ghidra address: 01c02c20 */
/* Ghidra symbol: FUN_01c02c20 */


void FUN_01c02c20(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  FUN_0065dd90(param_1,param_2);
  cVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
  if ((cVar1 == '\0') && (param_1[0x93] != 0)) {
    lVar2 = FUN_01bfa9d0(param_1[0x93]);
    if (0 < *(int *)(*(longlong *)(lVar2 + 0x10) + 0x10)) {
      lVar2 = FUN_01c03e30(param_1);
      uVar3 = (**(code **)(lVar2 + 0x78))(lVar2,1,param_1[1]);
      plVar4 = (longlong *)FUN_004113f0(uVar3,&PTR_FUN_01bdd620);
      *(undefined1 *)((longlong)plVar4 + 0x524) = 1;
      FUN_00655f80(plVar4,*(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0x2d0));
      (**(code **)(*plVar4 + 0x130))(plVar4,param_1);
      (**(code **)(*plVar4 + 0x308))(plVar4,param_1[0x93]);
      FUN_01be60b0(plVar4,(longlong)*(short *)(param_2 + 0x10),(longlong)*(short *)(param_2 + 0x12))
      ;
      FUN_00410f20(plVar4);
    }
  }
  return;
}

