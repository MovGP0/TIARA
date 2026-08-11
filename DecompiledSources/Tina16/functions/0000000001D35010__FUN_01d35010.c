/* Ghidra address: 01d35010 */
/* Ghidra symbol: FUN_01d35010 */


int FUN_01d35010(longlong *param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  int local_2c [3];
  
  uVar2 = (**(code **)(*param_1 + 0x68))(param_1,param_2);
  cVar1 = FUN_01d350f0(param_1,uVar2,local_2c);
  iVar3 = -1;
  if (cVar1 != '\0') {
    if ((char)param_1[4] != '\0') {
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
  return iVar3;
}

