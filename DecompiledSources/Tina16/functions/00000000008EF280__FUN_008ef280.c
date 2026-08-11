/* Ghidra address: 008ef280 */
/* Ghidra symbol: FUN_008ef280 */


undefined8 FUN_008ef280(undefined8 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  short sVar2;
  undefined8 uVar3;
  
  uVar1 = (undefined2)((uint)param_2 >> 0x10);
  sVar2 = (short)param_2 + -0x2db;
  if (sVar2 == 0) {
    uVar3 = CONCAT71((uint7)(uint3)(CONCAT22(uVar1,sVar2) >> 8),0x9d);
  }
  else {
    sVar2 = (short)param_2 + -0x2014;
    if (sVar2 == 0) {
      uVar3 = CONCAT71((uint7)(uint3)(CONCAT22(uVar1,sVar2) >> 8),0xbc);
    }
    else {
      uVar3 = FUN_008e59a0(param_2,&DAT_01e2d5a2,L"IBM1026");
    }
  }
  return uVar3;
}

