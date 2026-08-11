/* Ghidra address: 017b7130 */
/* Ghidra symbol: FUN_017b7130 */


int FUN_017b7130(longlong *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 local_50 [2];
  undefined8 local_40 [2];
  
  iVar2 = -1;
  if (*(char *)((longlong)param_1 + 0x21) != '\0') {
    iVar3 = -1;
    local_40[0] = (**(code **)(*param_1 + 0x88))(param_1,0xffffffff);
    while ((int)local_40[0] != -0x2b67) {
      local_50[0] = FUN_00498310(param_2,param_3);
      cVar1 = FUN_017ad570(local_40,local_50);
      if (cVar1 != '\0') {
        iVar2 = iVar3 + 1;
      }
      iVar3 = iVar3 + 1;
      local_40[0] = (**(code **)(*param_1 + 0x88))(param_1,iVar3);
    }
  }
  return iVar2;
}

