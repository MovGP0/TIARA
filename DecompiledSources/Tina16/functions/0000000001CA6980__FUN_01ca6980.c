/* Ghidra address: 01ca6980 */
/* Ghidra symbol: FUN_01ca6980 */


ulonglong FUN_01ca6980(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 unaff_RDI;
  bool bVar3;
  
  uVar1 = FUN_01ca59f0(param_1,param_2);
  uVar2 = FUN_01ca5930(param_1,param_2,uVar1);
  bVar3 = (int)uVar2 < 0;
  if (bVar3) {
    if (*(int *)(param_1 + 0x20) <= *(int *)(param_1 + 0x10)) {
      FUN_01ca5900(param_1);
      uVar2 = FUN_01ca5930(param_1,param_2,uVar1);
    }
    FUN_01ca5c10(param_1,uVar1,~uVar2,param_2,param_3);
  }
  return CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar3) & 0xffffffff;
}

