/* Ghidra address: 00cd8ca0 */
/* Ghidra symbol: FUN_00cd8ca0 */


void FUN_00cd8ca0(longlong *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  param_2 = param_2 + 1;
  iVar2 = (**(code **)(*param_1 + 0x28))(param_1);
  if (param_2 < iVar2) {
    while (iVar2 = (**(code **)(*param_1 + 0x28))(param_1), param_2 < iVar2) {
      (**(code **)(*param_1 + 0x18))(param_1,local_20,param_2);
      cVar1 = FUN_008791b0(local_20[0],1,&LAB_00cd8d74);
      if (cVar1 == '\0') break;
      (**(code **)(*param_1 + 0x98))(param_1,param_2);
    }
  }
  FUN_00414480(local_20);
  return;
}

