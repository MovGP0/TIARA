/* Ghidra address: 00df09f0 */
/* Ghidra symbol: FUN_00df09f0 */


void FUN_00df09f0(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_016ed930(param_2);
  uVar2 = FUN_016eacf0(param_1,4,6);
  bVar1 = (byte)uVar2;
  if (bVar1 < 8) {
    bVar3 = ((int)CONCAT71((int7)((ulonglong)uVar2 >> 8),1) << (bVar1 & 0x1f) & 0x31U) != 0;
  }
  else {
    bVar3 = false;
  }
  if (bVar3) {
    FUN_016e9e20(param_1,9);
  }
  else {
    FUN_016e9e20(param_1,10);
  }
  FUN_016ec240(param_1,1,1,3);
  FUN_016ed5d0(param_1,1,0x402e000000000000,0,0,0,0);
  FUN_016ec240(param_1,2,2,3);
  FUN_016ed5d0(param_1,2,0x4014000000000000,0,0,0,0);
  FUN_016ec240(param_1,3,5,3);
  FUN_016ed5d0(param_1,3,0xc014000000000000,0,0,0,0);
  FUN_016ec240(param_1,4,6,3);
  FUN_016ed5d0(param_1,4,0xc02e000000000000,0,0,0,0);
  FUN_016e9f40(param_1,FUN_00df08d0);
  FUN_016ea000(param_1,FUN_00deff70);
  FUN_016ec240(param_1,5,10,3);
  FUN_016ed5d0(param_1,5,0,0,0,0x4049000000000000,0);
  FUN_016ebe60(param_1,6,7,3,1);
  FUN_016ed320(param_1,6,0,0,0);
  FUN_016ebe60(param_1,7,8,3,1);
  FUN_016ed320(param_1,7,0,0,0);
  FUN_016ec240(param_1,8,4,3);
  FUN_016ed5d0(param_1,8,0,0,0,0,0);
  FUN_016ebdd0(param_1,9,0xd,0xc,1);
  FUN_016ed320(param_1,9,0,0,0);
  if ((byte)(bVar1 - 1) < 2) {
    FUN_016ebe60(param_1,10,0xb,0xc,1);
    FUN_016ed320(param_1,10,0,0,0);
  }
  else if (bVar1 == 3) {
    FUN_016ec240(param_1,10,0xb,0xc);
    FUN_016ed5d0(param_1,10,0x3ff0000000000000,0x3ff0000000000000,uVar4,0x3ff0000000000000,0);
  }
  return;
}

