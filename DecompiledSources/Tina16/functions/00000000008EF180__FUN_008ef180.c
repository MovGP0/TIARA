/* Ghidra address: 008ef180 */
/* Ghidra symbol: FUN_008ef180 */


undefined8 FUN_008ef180(undefined8 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  short sVar2;
  undefined8 uVar3;
  
  uVar1 = (undefined2)((uint)param_2 >> 0x10);
  sVar2 = (short)param_2 + -0xaf;
  if (sVar2 == 0) {
    uVar3 = CONCAT71((uint7)(uint3)(CONCAT22(uVar1,sVar2) >> 8),0xbc);
  }
  else {
    sVar2 = (short)param_2 + -0xb8;
    if (sVar2 == 0) {
      uVar3 = CONCAT71((uint7)(uint3)(CONCAT22(uVar1,sVar2) >> 8),0x9d);
    }
    else {
      uVar3 = FUN_008e59a0(param_2,&DAT_01e2d5a2,L"Windows-1026");
    }
  }
  return uVar3;
}

