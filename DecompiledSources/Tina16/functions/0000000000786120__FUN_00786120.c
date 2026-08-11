/* Ghidra address: 00786120 */
/* Ghidra symbol: FUN_00786120 */


undefined8 FUN_00786120(void)

{
  undefined8 uVar1;
  ulonglong uVar2;
  
  uVar1 = FUN_00786090();
  uVar2 = thunk_FUN_04118143(uVar1,0xffffffec);
  return CONCAT71((int7)((uVar2 & 0x200) >> 8),(uVar2 & 0x200) == 0x200);
}

