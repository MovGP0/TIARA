/* Ghidra address: 01d04e70 */
/* Ghidra symbol: FUN_01d04e70 */


void FUN_01d04e70(longlong param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  
  cVar1 = FUN_01d04d40(param_1);
  if (cVar1 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x1a8) + 0x78))
              (*(longlong **)(param_1 + 0x1a8),param_2,param_3,param_4);
  }
  return;
}

