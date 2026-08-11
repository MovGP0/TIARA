/* Ghidra address: 00d433c0 */
/* Ghidra symbol: FUN_00d433c0 */


void FUN_00d433c0(longlong *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *param_2;
  if (iVar1 - 7U < 2) {
    FUN_007899d0(param_1,param_2);
    (**(code **)(*param_1 + 0x60))(param_1);
  }
  else if (iVar1 == 10) {
    cVar2 = FUN_00787f80(param_1[3]);
    if (cVar2 != '\0') {
      (**(code **)(*param_1 + 0x60))(param_1);
    }
  }
  else if (iVar1 == 0xc) {
    FUN_00788d60(param_1,0);
    FUN_00788400(param_1,param_2);
    FUN_00788d60(param_1,1);
    (**(code **)(*param_1 + 0x60))(param_1);
  }
  else if (iVar1 - 0x7cU < 2) {
    (**(code **)(*param_1 + 0x60))(param_1);
  }
  else {
    FUN_007899d0(param_1,param_2);
  }
  return;
}

