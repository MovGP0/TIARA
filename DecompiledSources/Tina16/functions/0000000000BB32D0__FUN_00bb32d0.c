/* Ghidra address: 00bb32d0 */
/* Ghidra symbol: FUN_00bb32d0 */


undefined8 FUN_00bb32d0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x68) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x68) + 0x10;
  }
  FUN_0041b890(param_2,lVar1,&DAT_00bb3304);
  return param_2;
}

