/* Ghidra address: 006d9740 */
/* Ghidra symbol: FUN_006d9740 */


void FUN_006d9740(longlong param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  
  cVar2 = FUN_0065be20(param_1);
  if (((cVar2 == '\0') || (*(char *)(param_1 + 0x4e0) != '\0')) ||
     (*(char *)(param_1 + 0x4a8) != '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = 0 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x490) + 0x10) + 0x10);
  }
  if (bVar1) {
    *(undefined1 *)(param_1 + 0x4e0) = 1;
    FUN_006d93f0(param_1,1,1);
  }
  else {
    FUN_006d93f0(param_1,0,1);
  }
  FUN_00657db0(param_1,param_2);
  return;
}

