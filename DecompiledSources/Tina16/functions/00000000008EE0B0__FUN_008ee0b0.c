/* Ghidra address: 008ee0b0 */
/* Ghidra symbol: FUN_008ee0b0 */


undefined8 FUN_008ee0b0(undefined8 param_1,undefined4 param_2)

{
  short sVar1;
  undefined8 uVar2;
  
  sVar1 = (short)param_2 + -0x20ac;
  if (sVar1 == 0) {
    uVar2 = CONCAT71((uint7)(uint3)(CONCAT22((short)((uint)param_2 >> 0x10),sVar1) >> 8),0xd5);
  }
  else {
    uVar2 = FUN_008e5af0(param_2,&DAT_01e2b2ec,L"Windows-858");
  }
  return uVar2;
}

