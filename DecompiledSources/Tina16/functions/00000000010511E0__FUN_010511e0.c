/* Ghidra address: 010511e0 */
/* Ghidra symbol: FUN_010511e0 */


void FUN_010511e0(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  
  plVar2 = (longlong *)FUN_007fc180(&PTR_FUN_00fcdaf8,1,*(undefined8 *)PTR_DAT_02004030);
  param_2[0x6d] = (longlong)(1.0 / *(double *)(param_1 + 0x9b8));
  param_2[0xb7] = *(longlong *)(param_1 + 0x9b8);
  FUN_00fce590(plVar2,param_2,*(undefined8 *)(param_1 + 0x9b8),*(undefined4 *)(param_1 + 0x9a0),
               *(undefined8 *)(param_1 + 0x9b0));
  FUN_00fd5be0(plVar2,*(undefined8 *)(param_1 + 0x970));
  *(undefined4 *)(plVar2 + 0xfc) = *(undefined4 *)(param_1 + 0x9a0);
  FUN_00414ad0(plVar2 + 0xfd,*(undefined8 *)(param_1 + 0x9b0));
  iVar1 = (**(code **)(*plVar2 + 0x2d0))(plVar2);
  if (iVar1 == 1) {
    FUN_00417c40(param_2 + 0x25,plVar2 + 0xfe,&DAT_00f68330);
    (**(code **)(*param_2 + 0x10))(param_2);
    FUN_01053e80(param_1,1);
    FUN_00f629b0(*(undefined8 *)(param_1 + 0x980),1);
  }
  FUN_00410f20(plVar2);
  return;
}

