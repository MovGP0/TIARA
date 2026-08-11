/* Ghidra address: 00cd94d0 */
/* Ghidra symbol: FUN_00cd94d0 */


void FUN_00cd94d0(longlong *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  if (((-1 < *param_2) && (iVar2 = (**(code **)(*param_1 + 0x28))(param_1), *param_2 < iVar2)) &&
     (*param_2 = *param_2 + 1, (char)param_1[0x10] != '\0')) {
    while (iVar2 = (**(code **)(*param_1 + 0x28))(param_1), *param_2 < iVar2) {
      (**(code **)(*param_1 + 0x18))(param_1,local_20,*param_2);
      cVar1 = FUN_008791b0(local_20[0],1,&LAB_00cd95a4);
      if (cVar1 == '\0') break;
      *param_2 = *param_2 + 1;
    }
  }
  FUN_00414480(local_20);
  return;
}

