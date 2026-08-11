/* Ghidra address: 01c87db0 */
/* Ghidra symbol: FUN_01c87db0 */


void FUN_01c87db0(longlong param_1,longlong *param_2)

{
  char cVar1;
  short sVar2;
  
  cVar1 = FUN_0198a580(param_2);
  if ((cVar1 == '\x04') && (cVar1 = (**(code **)(*param_2 + 0x2d8))(param_2), cVar1 != '\0')) {
    sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
    if ((sVar2 != 0x3e) && (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 != 0x66)) {
      return;
    }
    *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x1838) = param_2;
    if (PTR_DAT_02004010[0x813] == '\x01') {
      PTR_DAT_02004010[0x813] = 6;
    }
  }
  return;
}

