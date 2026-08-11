/* Ghidra address: 01b27330 */
/* Ghidra symbol: FUN_01b27330 */


ulonglong FUN_01b27330(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 unaff_RDI;
  bool bVar3;
  
  uVar1 = FUN_01b263a0(param_1,param_2);
  uVar2 = FUN_01b262e0(param_1,param_2,uVar1);
  bVar3 = (int)uVar2 < 0;
  if (bVar3) {
    if (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x10)) {
      FUN_01b262b0(param_1);
      uVar2 = FUN_01b262e0(param_1,param_2,uVar1);
    }
    FUN_01b265c0(param_1,uVar1,~uVar2,param_2,param_3);
  }
  return CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar3) & 0xffffffff;
}

