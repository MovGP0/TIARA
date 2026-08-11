/* Ghidra address: 01b05be0 */
/* Ghidra symbol: FUN_01b05be0 */


undefined8 FUN_01b05be0(undefined8 param_1,undefined8 param_2,undefined2 *param_3)

{
  longlong lVar1;
  undefined8 unaff_RSI;
  char local_19;
  
  lVar1 = FUN_01b058d0(param_1,param_2,&local_19);
  if (local_19 == '\0') {
    *param_3 = 0;
  }
  else {
    *param_3 = *(undefined2 *)(lVar1 + 0x23);
    unaff_RSI = *(undefined8 *)(lVar1 + 9);
  }
  return unaff_RSI;
}

