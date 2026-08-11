/* Ghidra address: 004e3300 */
/* Ghidra symbol: FUN_004e3300 */


ulonglong FUN_004e3300(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 unaff_RDI;
  bool bVar3;
  
  uVar1 = FUN_004e2420(param_1,param_2);
  uVar2 = FUN_004e2370(param_1,param_2,uVar1);
  bVar3 = (int)uVar2 < 0;
  if (bVar3) {
    if (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x10)) {
      FUN_004e2340(param_1);
      uVar2 = FUN_004e2370(param_1,param_2,uVar1);
    }
    FUN_004e2610(param_1,uVar1,~uVar2,param_2,param_3);
  }
  return CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar3) & 0xffffffff;
}

