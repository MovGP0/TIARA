/* Ghidra address: 019a7240 */
/* Ghidra symbol: FUN_019a7240 */


undefined8 FUN_019a7240(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  
  cVar2 = FUN_0198a580(*param_3);
  if (cVar2 == '\x04') {
    lVar3 = FUN_01d06e20(*param_3);
    if (lVar3 == 0) {
      lVar3 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,*(undefined2 *)(*param_3 + 0xba));
      iVar1 = *(int *)(lVar3 + 0xaf);
      lVar3 = FUN_01d3a780(*(undefined8 *)PTR_DAT_020036c8,*(undefined2 *)(*param_3 + 0xba));
      if ((int)param_3[1] < (int)(uint)*(byte *)(lVar3 + 0xb3)) {
        FUN_004169a0(param_2,*(longlong *)PTR_DAT_02001338 + -0x10 +
                             (longlong)(iVar1 + (int)param_3[1]) * 0x15);
      }
      else {
        FUN_0043f750(param_2,(int)param_3[1]);
      }
    }
    else {
      (**(code **)(*(longlong *)*param_3 + 0x298))((longlong *)*param_3,param_2,(int)param_3[1]);
    }
  }
  else {
    FUN_0043f750(param_2,(int)param_3[1]);
  }
  return param_2;
}

