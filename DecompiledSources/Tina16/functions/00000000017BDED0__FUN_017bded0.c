/* Ghidra address: 017bded0 */
/* Ghidra symbol: FUN_017bded0 */


undefined8 FUN_017bded0(longlong *param_1,undefined8 *param_2,undefined8 param_3,ushort param_4)

{
  char cVar1;
  short sVar2;
  int iVar3;
  short local_2a;
  
  iVar3 = FUN_01d31a40(*param_2);
  if (iVar3 != 0) {
    return 1;
  }
  cVar1 = FUN_01cf0620(param_1,param_2,0,0,0xffffffff);
  if (cVar1 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0x278))(param_1);
    if (cVar1 != '\0') {
      FUN_01d30f00(*param_2,&local_2a,2);
      *(int *)(param_1 + 0x14) = (int)local_2a;
      FUN_01d30f00(*param_2,&local_2a,2);
      *(int *)((longlong)param_1 + 0xa4) = (int)local_2a;
      FUN_01d30f00(*param_2,param_1 + 0x15,1);
      if (((((undefined **)*param_1 == &PTR_FUN_01cf10a8) && (0x43 < param_4)) ||
          (((undefined **)*param_1 == &PTR_FUN_017bca38 &&
           ((sVar2 = (**(code **)(*param_1 + 0x20))(param_1), sVar2 == 0x101 && (0x11 < param_4)))))
          ) || (((undefined **)*param_1 == &PTR_FUN_017bca38 &&
                ((sVar2 = (**(code **)(*param_1 + 0x20))(param_1), sVar2 == 0x102 &&
                 (0x10 < param_4)))))) {
        FUN_01d316c0(*param_2,param_1 + 0x13);
      }
      else {
        FUN_01d312f0(*param_2,param_1 + 0x13);
      }
      return 0;
    }
    return 0;
  }
  return 1;
}

