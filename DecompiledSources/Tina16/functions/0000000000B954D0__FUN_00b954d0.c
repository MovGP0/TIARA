/* Ghidra address: 00b954d0 */
/* Ghidra symbol: FUN_00b954d0 */


int FUN_00b954d0(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  int local_2c [3];
  
  if ((char)param_1[4] == '\0') {
    uVar2 = (**(code **)(*param_1 + 0x38))(param_1,param_2);
    cVar1 = (**(code **)(*param_1 + 0x40))(param_1,uVar2,local_2c);
    iVar3 = -1;
    if (cVar1 != '\0') {
      if (*(char *)((longlong)param_1 + 0x21) != '\0') {
        while ((local_2c[0] < (int)param_1[2] &&
               (param_2 != *(longlong *)(param_1[1] + (longlong)local_2c[0] * 8)))) {
          local_2c[0] = local_2c[0] + 1;
        }
      }
      iVar3 = -1;
      if (local_2c[0] < (int)param_1[2]) {
        iVar3 = local_2c[0];
      }
    }
  }
  else {
    local_2c[0] = 0;
    while ((iVar3 = -1, local_2c[0] < (int)param_1[2] &&
           (iVar3 = local_2c[0], *(longlong *)(param_1[1] + (longlong)local_2c[0] * 8) != param_2)))
    {
      local_2c[0] = local_2c[0] + 1;
    }
  }
  return iVar3;
}

