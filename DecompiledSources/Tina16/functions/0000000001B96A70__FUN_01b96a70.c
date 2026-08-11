/* Ghidra address: 01b96a70 */
/* Ghidra symbol: FUN_01b96a70 */


void FUN_01b96a70(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00416740(param_2);
  FUN_0080d2f0(*(undefined8 *)PTR_DAT_02004030,uVar1,L"Error",0x10);
  FUN_00801e40(*(undefined8 *)(param_1 + 0x220),param_3);
  FUN_00680ad0(param_3);
  return;
}

