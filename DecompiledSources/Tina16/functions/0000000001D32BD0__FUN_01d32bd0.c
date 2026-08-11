/* Ghidra address: 01d32bd0 */
/* Ghidra symbol: FUN_01d32bd0 */


void FUN_01d32bd0(longlong param_1,longlong param_2)

{
  int iVar1;
  undefined1 local_11e [256];
  short local_1e;
  
  FUN_00414ad0(param_2,L"[NO_VER]");
  if (*(char *)(param_1 + 8) == '\0') {
    iVar1 = FUN_01d31a40(param_1);
    if (iVar1 == 0) {
      FUN_01d30fd0(param_1);
      FUN_01d32800(param_1,local_11e);
      if (local_1e == 0) {
        FUN_01d328d0(param_1,param_2);
        FUN_01d328d0(param_1,param_2 + 8);
        FUN_01d328d0(param_1,param_2 + 0x10);
        FUN_01d328d0(param_1,param_2 + 0x18);
        FUN_01d328d0(param_1,param_2 + 0x20);
        FUN_01d328d0(param_1,param_2 + 0x28);
      }
      else {
        FUN_01d32990(param_1,param_2);
        FUN_01d32990(param_1,param_2 + 8);
        FUN_01d32990(param_1,param_2 + 0x10);
        FUN_01d32990(param_1,param_2 + 0x18);
        FUN_01d32990(param_1,param_2 + 0x20);
        FUN_01d32990(param_1,param_2 + 0x28);
      }
      FUN_01d31720(param_1,param_2 + 0x30);
    }
  }
  else {
    FUN_01d31a70(param_1,0x1000);
  }
  return;
}

