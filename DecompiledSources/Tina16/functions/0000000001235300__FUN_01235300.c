/* Ghidra address: 01235300 */
/* Ghidra symbol: FUN_01235300 */


void FUN_01235300(longlong *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_01227da0();
  *(undefined4 *)PTR_DAT_02004700 = uVar1;
  (**(code **)(*param_1 + 0x188))(param_1);
  return;
}

