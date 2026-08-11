/* Ghidra address: 00def330 */
/* Ghidra symbol: FUN_00def330 */


void FUN_00def330(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 extraout_XMM0_Qa;
  
  bVar1 = FUN_016eacf0(param_1,2,5);
  FUN_016eacf0(param_1,4,1);
  uVar2 = FUN_016ed930(param_2);
  if ((byte)(bVar1 + 1) < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << (bVar1 + 1 & 0x1f) & 0x30U) != 0;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    FUN_016e9e20(param_1,1);
  }
  else {
    FUN_016e9e20(param_1,2);
  }
  FUN_016ebdd0(param_1,1,3,2,1);
  FUN_016ed320(param_1,1,0,0,0);
  if (bVar1 < 2) {
    FUN_016ebe60(param_1,2,1,2,1);
    FUN_016ed320(param_1,2,0,0,0);
  }
  else if (bVar1 == 2) {
    FUN_016ec240(param_1,2,1,2);
    FUN_016ed5d0(param_1,2,0x3ff0000000000000,0x3ff0000000000000,extraout_XMM0_Qa,0x3ff0000000000000
                 ,0);
  }
  return;
}

