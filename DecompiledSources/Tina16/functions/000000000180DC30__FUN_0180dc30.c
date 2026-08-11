/* Ghidra address: 0180dc30 */
/* Ghidra symbol: FUN_0180dc30 */


void FUN_0180dc30(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(*(longlong *)(param_1 + 0x1a8) + 0x21);
  if (cVar1 == '\0') {
    FUN_0180dc80(param_2);
  }
  else if (cVar1 == '\x02') {
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,param_2);
    FUN_004134c0(uVar2);
  }
  return;
}

