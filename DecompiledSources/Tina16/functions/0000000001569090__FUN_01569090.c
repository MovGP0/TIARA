/* Ghidra address: 01569090 */
/* Ghidra symbol: FUN_01569090 */


void FUN_01569090(longlong param_1)

{
  char cVar1;
  code *local_28;
  longlong local_20;
  
  cVar1 = FUN_01995600(*(undefined8 *)(param_1 + 0x748),0,0);
  if (cVar1 == '\0') {
    FUN_015fcf20(L"Graph init error!",0,0,0);
  }
  else {
    local_28 = FUN_01567810;
    local_20 = param_1;
    FUN_015670c0(param_1,*(undefined8 *)(param_1 + 0x748),0,&local_28);
  }
  return;
}

