/* Ghidra address: 006f96f0 */
/* Ghidra symbol: FUN_006f96f0 */


void FUN_006f96f0(longlong param_1,undefined2 param_2,int param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  FUN_00650d70(param_1,param_2,param_3,param_4);
  if (*(char *)(param_1 + 0x33a) != '\x02') {
    return;
  }
  cVar1 = FUN_0064e170(param_1);
  if (cVar1 != '\0') {
    if ((((param_3 < 0) || (iVar2 = FUN_0064d0b0(param_1), iVar2 <= param_3)) || (param_4 < 0)) ||
       (uVar4 = FUN_0064d120(param_1), (int)uVar4 < param_4)) {
      uVar3 = 0;
    }
    else {
      uVar3 = (undefined4)CONCAT71((int7)((ulonglong)uVar4 >> 8),1);
    }
    FUN_006fa3b0(param_1,uVar3);
    return;
  }
  return;
}

