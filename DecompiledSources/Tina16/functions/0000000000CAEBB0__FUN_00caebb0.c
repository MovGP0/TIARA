/* Ghidra address: 00caebb0 */
/* Ghidra symbol: FUN_00caebb0 */


void FUN_00caebb0(longlong *param_1,undefined8 param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  
  if (param_3 < 1) {
    if (param_3 < 0) {
      cVar1 = FUN_00cb0720(param_1);
      if (cVar1 != '\0') {
        FUN_00cae370(param_1,0,(int)param_1[0x26],0);
        (**(code **)(*param_1 + 0x110))(param_1,1,1);
      }
      FUN_00c8b100(param_1[0x21],param_2,0xffffffff,param_4,0xffffffff);
    }
  }
  else {
    while ((*(int *)(param_1[0x21] + 0x30) < param_3 &&
           ((iVar2 = FUN_00cae370(param_1,0,0xffffffff,1), iVar2 < 1 ||
            (*(int *)(param_1[0x21] + 0x30) < param_3))))) {
      (**(code **)(*param_1 + 0x110))(param_1);
    }
    FUN_00c8b100(param_1[0x21],param_2,param_3,param_4,0xffffffff);
  }
  return;
}

