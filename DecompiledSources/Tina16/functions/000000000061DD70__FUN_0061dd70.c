/* Ghidra address: 0061dd70 */
/* Ghidra symbol: FUN_0061dd70 */


undefined8 FUN_0061dd70(undefined8 param_1,int param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (PTR_DAT_02005bd0[0xc] != '\0') {
    uVar1 = FUN_00415ab0();
    uVar1 = FUN_0061dcc0(uVar1,param_2 + -1);
  }
  return uVar1;
}

