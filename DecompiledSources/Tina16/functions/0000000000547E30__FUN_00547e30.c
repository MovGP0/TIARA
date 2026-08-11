/* Ghidra address: 00547e30 */
/* Ghidra symbol: FUN_00547e30 */


undefined8 FUN_00547e30(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (*(longlong *)(param_1 + 0x48) != 0) {
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x48) + -8);
  }
  FUN_004192d0(param_2,*(undefined8 *)(param_1 + 0x48),&DAT_00531510,1,lVar1 + -1);
  return param_2;
}

