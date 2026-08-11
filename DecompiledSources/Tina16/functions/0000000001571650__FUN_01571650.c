/* Ghidra address: 01571650 */
/* Ghidra symbol: FUN_01571650 */


undefined8 FUN_01571650(longlong param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x54);
  if (iVar1 == 1) {
    FUN_00414ad0(param_2,&DAT_015716b8);
  }
  else if (iVar1 == 2) {
    FUN_00414ad0(param_2,&DAT_015716cc);
  }
  else if (iVar1 == 3) {
    FUN_00414ad0(param_2,L"INOUT");
  }
  return param_2;
}

