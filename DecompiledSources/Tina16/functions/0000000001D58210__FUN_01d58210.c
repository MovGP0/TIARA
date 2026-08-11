/* Ghidra address: 01d58210 */
/* Ghidra symbol: FUN_01d58210 */


undefined4 FUN_01d58210(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  FUN_01d56e10(param_1 + 0x20,param_2,param_3,param_4);
  FUN_01d56e10(param_1 + 0x48,param_2,param_3,param_4);
  FUN_01d56e10(param_1 + 0x70,param_2,param_3,param_4);
  if (*(char *)(param_1 + 0x98) == '\x01') {
    uVar3 = FUN_011641a0(param_1 + 0xa0,param_2,param_3,param_4);
  }
  else {
    uVar3 = 0;
    if (*(char *)(param_1 + 0x98) == '\x02') {
      uVar3 = FUN_011635e0(param_1 + 0xa0,param_2,param_3,param_4);
    }
  }
  if ((byte)param_4 < 8) {
    uVar1 = (int)CONCAT71((int7)((ulonglong)uVar3 >> 8),1) << ((byte)param_4 & 0x1f);
    uVar2 = CONCAT31((int3)(uVar1 >> 8),(uVar1 & 0xc2) != 0);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

