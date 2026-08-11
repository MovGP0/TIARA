/* Ghidra address: 0068af60 */
/* Ghidra symbol: FUN_0068af60 */


void FUN_0068af60(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (*(byte *)(lVar1 + 0x4cc) < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)param_2 >> 8),1) << (*(byte *)(lVar1 + 0x4cc) & 0x1f) &
            0x18U) != 0;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    FUN_0068e220(lVar1,param_2);
  }
  else {
    uVar2 = FUN_0065b870(lVar1);
    FUN_00470120(uVar2,0x1a2,0xffffffffffffffff,param_2);
  }
  return;
}

