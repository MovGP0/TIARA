/* Ghidra address: 00692750 */
/* Ghidra symbol: FUN_00692750 */


int * FUN_00692750(longlong *param_1,int *param_2)

{
  int iVar1;
  
  (**(code **)(*(longlong *)param_1[2] + 0xe0))((longlong *)param_1[2],param_2);
  FUN_00423b10(param_2,0xfffffffe,0xfffffffe);
  if (*(char *)(param_1[2] + 0xb1) == '\x01') {
    iVar1 = (**(code **)(*param_1 + 0x48))(param_1,2);
    param_2[2] = *param_2 + iVar1 + -1;
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x48))(param_1,2);
    *param_2 = (param_2[2] - iVar1) + 1;
  }
  return param_2;
}

