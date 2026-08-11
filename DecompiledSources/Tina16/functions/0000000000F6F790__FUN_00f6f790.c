/* Ghidra address: 00f6f790 */
/* Ghidra symbol: FUN_00f6f790 */


undefined8 FUN_00f6f790(longlong *param_1,undefined8 *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  local_40[0] = *param_2;
  *param_3 = -1;
  iVar3 = (int)param_1[0x1d];
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      local_48 = (**(code **)(*param_1 + 0x20))(param_1,iVar2);
      cVar1 = FUN_00f606d0(local_40,&local_48);
      if (cVar1 != '\0') {
        *param_3 = iVar2;
        return 1;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  return 0;
}

