/* Ghidra address: 008ee730 */
/* Ghidra symbol: FUN_008ee730 */


undefined8 FUN_008ee730(undefined8 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  short sVar2;
  undefined8 uVar3;
  
  sVar2 = (short)param_2;
  uVar1 = (undefined2)((uint)param_2 >> 0x10);
  if ((short)(sVar2 + -0x87) == 0) {
    uVar3 = CONCAT71((uint7)(uint3)(CONCAT22(uVar1,sVar2 + -0x87) >> 8),0x87);
  }
  else if ((short)(sVar2 + -0x93) == 0) {
    uVar3 = CONCAT71((uint7)(uint3)(CONCAT22(uVar1,sVar2 + -0x93) >> 8),0x93);
  }
  else if ((short)(sVar2 + -0x94) == 0) {
    uVar3 = CONCAT71((uint7)(uint3)(CONCAT22(uVar1,sVar2 + -0x94) >> 8),0x94);
  }
  else {
    uVar3 = FUN_008e5af0(param_2,&DAT_01e2c1a2,L"Windows-869");
  }
  return uVar3;
}

