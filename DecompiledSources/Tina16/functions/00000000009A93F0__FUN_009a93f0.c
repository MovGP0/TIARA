/* Ghidra address: 009a93f0 */
/* Ghidra symbol: FUN_009a93f0 */


ulonglong FUN_009a93f0(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 unaff_RDI;
  bool bVar3;
  
  uVar1 = FUN_009a83e0(param_1,param_2);
  uVar2 = FUN_009a8330(param_1,param_2,uVar1);
  bVar3 = (int)uVar2 < 0;
  if (bVar3) {
    if (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x10)) {
      FUN_009a8300(param_1);
      uVar2 = FUN_009a8330(param_1,param_2,uVar1);
    }
    FUN_009a8610(param_1,uVar1,~uVar2,param_2,param_3);
  }
  return CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar3) & 0xffffffff;
}

