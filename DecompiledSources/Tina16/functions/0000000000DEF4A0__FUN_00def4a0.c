/* Ghidra address: 00def4a0 */
/* Ghidra symbol: FUN_00def4a0 */


void FUN_00def4a0(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  bVar1 = FUN_016eacf0(param_1,2,5);
  FUN_016eacf0(param_1,4,1);
  uVar2 = FUN_016ed930(param_2);
  FUN_016e9e20(param_1,1);
  if (bVar1 < 2) {
    FUN_016ebe60(param_1,1,1,2,1);
    FUN_016ed320(param_1,1,0,0,0);
  }
  else if (bVar1 == 2) {
    FUN_016ec240(param_1,1,1,2);
    FUN_016ed5d0(param_1,1,0x3ff0000000000000,0x3ff0000000000000,uVar2,0x3ff0000000000000,0);
  }
  else if ((byte)(bVar1 - 3) < 2) {
    FUN_016ebdd0(param_1,1,1,2,1);
    FUN_016ed320(param_1,1,0,0,0);
  }
  return;
}

