/* Ghidra address: 009d97d0 */
/* Ghidra symbol: FUN_009d97d0 */


undefined4 FUN_009d97d0(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  
  *param_2 = 0;
  if (*(longlong *)(param_1 + 0x68) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x68) + 0x20;
  }
  FUN_0041b840(param_2,lVar1);
  return 0;
}

