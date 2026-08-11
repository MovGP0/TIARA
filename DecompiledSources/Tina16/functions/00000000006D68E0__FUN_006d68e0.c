/* Ghidra address: 006d68e0 */
/* Ghidra symbol: FUN_006d68e0 */


void FUN_006d68e0(longlong param_1,undefined8 param_2,int *param_3)

{
  char cVar1;
  
  FUN_0065ef40(param_1,param_2,param_3);
  if ((*(ushort *)(param_1 + 0x34) & 2) == 0) {
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 == '\0') {
      *param_3 = *param_3 + *(int *)(param_1 + 0x324) * -2;
    }
  }
  if (((*(ushort *)(param_1 + 0x34) & 0x10) == 0) && ((*(ushort *)(param_1 + 0x34) & 2) == 0)) {
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      FUN_00654450(param_1);
    }
  }
  return;
}

