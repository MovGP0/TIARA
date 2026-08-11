/* Ghidra address: 0104e7e0 */
/* Ghidra symbol: FUN_0104e7e0 */


void FUN_0104e7e0(longlong param_1,undefined8 param_2,undefined4 param_3,undefined2 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char cVar1;
  
  cVar1 = FUN_01052fe0(param_1);
  if (cVar1 == '\0') {
    FUN_00f63ea0(*(undefined8 *)(param_1 + 0x980),param_2,param_3,param_4,param_5,param_6,
                 *(undefined4 *)(param_1 + 0x9a0));
  }
  else {
    FUN_0072d440(L"The editor is locked",2,4,0);
  }
  return;
}

