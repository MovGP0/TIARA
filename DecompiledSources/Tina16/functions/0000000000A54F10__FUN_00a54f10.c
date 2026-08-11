/* Ghidra address: 00a54f10 */
/* Ghidra symbol: FUN_00a54f10 */


undefined8 FUN_00a54f10(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 auStack_38 [40];
  undefined1 *local_10;
  
  local_10 = auStack_38;
  cVar1 = FUN_0046c390(param_1 + 0x630);
  if (cVar1 == '\0') {
    FUN_00414ad0(param_2,L"normal");
  }
  else {
    FUN_00467e90(param_2,param_1 + 0x630);
  }
  return param_2;
}

