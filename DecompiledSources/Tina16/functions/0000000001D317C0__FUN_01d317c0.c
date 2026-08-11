/* Ghidra address: 01d317c0 */
/* Ghidra symbol: FUN_01d317c0 */


void FUN_01d317c0(longlong param_1,longlong param_2)

{
  char cVar1;
  int iVar2;
  undefined1 local_20 [8];
  
  FUN_00414ad0(param_2,L"[NO_VER]");
  if (*(char *)(param_1 + 8) == '\0') {
    iVar2 = FUN_01d31a40(param_1);
    if (iVar2 == 0) {
      FUN_01d30fd0(param_1);
      cVar1 = FUN_01d31040(param_1,2);
      if (cVar1 != '\0') {
        FUN_01d30e90(param_1,local_20);
        FUN_01d312f0(param_1,param_2);
        FUN_01d312f0(param_1,param_2 + 8);
        FUN_01d312f0(param_1,param_2 + 0x10);
        FUN_01d312f0(param_1,param_2 + 0x18);
        FUN_01d312f0(param_1,param_2 + 0x20);
        FUN_01d312f0(param_1,param_2 + 0x28);
        FUN_01d31720(param_1,param_2 + 0x30);
      }
    }
  }
  else {
    FUN_01d31a70(param_1,0x1000);
  }
  return;
}

