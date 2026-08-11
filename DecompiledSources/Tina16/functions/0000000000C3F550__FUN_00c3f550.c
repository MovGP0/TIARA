/* Ghidra address: 00c3f550 */
/* Ghidra symbol: FUN_00c3f550 */


void FUN_00c3f550(undefined8 param_1,uint param_2)

{
  short sVar1;
  uint uVar2;
  
  uVar2 = (param_2 & 0xff) * 3 + 2;
  sVar1 = FUN_00c3f0d0(param_1,uVar2);
  if (sVar1 == -1) {
    FUN_00c3f0d0(param_1,(ulonglong)uVar2 % 3);
  }
  return;
}

