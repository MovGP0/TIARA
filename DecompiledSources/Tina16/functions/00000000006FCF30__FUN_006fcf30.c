/* Ghidra address: 006fcf30 */
/* Ghidra symbol: FUN_006fcf30 */


void FUN_006fcf30(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  if (*(char *)(param_1 + 0x51c) == '\0') {
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      FUN_006fcdc0(param_1,*(undefined8 *)(param_1 + 0x4e8));
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x4e8) != 0) {
      uVar2 = FUN_007d56e0(*(longlong *)(param_1 + 0x4e8));
      FUN_006fd010(param_1,uVar2);
    }
    if (*(longlong *)(param_1 + 0x4f8) != 0) {
      uVar2 = FUN_007d56e0(*(longlong *)(param_1 + 0x4f8));
      FUN_006fd210(param_1,uVar2);
    }
    if (*(longlong *)(param_1 + 0x508) != 0) {
      uVar2 = FUN_007d56e0(*(longlong *)(param_1 + 0x508));
      FUN_006fd300(param_1,uVar2);
    }
  }
  return;
}

