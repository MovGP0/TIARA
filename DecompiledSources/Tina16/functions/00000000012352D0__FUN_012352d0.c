/* Ghidra address: 012352d0 */
/* Ghidra symbol: FUN_012352d0 */


void FUN_012352d0(longlong *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_01227da0();
  *(undefined4 *)PTR_DAT_02004700 = uVar1;
  (**(code **)(*param_1 + 0x188))(param_1);
  return;
}

