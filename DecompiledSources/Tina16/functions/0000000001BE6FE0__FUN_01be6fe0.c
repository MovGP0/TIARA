/* Ghidra address: 01be6fe0 */
/* Ghidra symbol: FUN_01be6fe0 */


void FUN_01be6fe0(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  
  cVar1 = FUN_0044f0c0(5,1);
  if (cVar1 == '\0') {
    cVar1 = FUN_01be07e0(param_1);
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*param_1 + 0x2c8))(param_1);
      if (cVar1 == '\0') {
        if (param_1[0xcf] == 0) {
          lVar2 = FUN_01bd83b0(&PTR_FUN_01bd7c80,1,param_1,0);
          param_1[0xcf] = lVar2;
          lVar2 = FUN_01bd83b0(&PTR_FUN_01bd7c80,1,param_1,1);
          param_1[0xcd] = lVar2;
        }
        if (param_1[0xcf] != 0) {
          FUN_01bd85c0(param_1[0xcf],param_1);
          FUN_01bd85c0(param_1[0xcd],param_1);
        }
      }
    }
  }
  return;
}

