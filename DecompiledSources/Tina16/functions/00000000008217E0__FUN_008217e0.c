/* Ghidra address: 008217e0 */
/* Ghidra symbol: FUN_008217e0 */


void FUN_008217e0(undefined8 param_1,undefined4 param_2,char param_3)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = FUN_00821960(param_1,param_2);
  if (param_3 != cVar2) {
    lVar1 = FUN_00821e60(param_1,param_2);
    *(bool *)(lVar1 + 0x11) = param_3 == '\0';
    FUN_00821870(param_1,param_2);
  }
  return;
}

