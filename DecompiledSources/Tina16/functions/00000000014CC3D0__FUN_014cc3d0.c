/* Ghidra address: 014cc3d0 */
/* Ghidra symbol: FUN_014cc3d0 */


undefined8 FUN_014cc3d0(undefined8 param_1,undefined8 param_2,longlong *param_3,int param_4)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_01d06e20(param_3);
  if (lVar2 == 0) {
    lVar2 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,*(undefined2 *)((longlong)param_3 + 0xba));
    iVar1 = *(int *)(lVar2 + 0xaf);
    lVar2 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,*(undefined2 *)((longlong)param_3 + 0xba));
    if (param_4 < (int)(uint)*(byte *)(lVar2 + 0xb3)) {
      FUN_004169a0(param_2,*(longlong *)PTR_DAT_02001338 + -0x10 +
                           (longlong)(iVar1 + param_4) * 0x15);
    }
    else {
      FUN_0043f750(param_2,param_4);
    }
  }
  else {
    (**(code **)(*param_3 + 0x298))(param_3,param_2,param_4);
  }
  return param_2;
}

