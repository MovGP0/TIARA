/* Ghidra address: 014483c0 */
/* Ghidra symbol: FUN_014483c0 */


void FUN_014483c0(longlong param_1,longlong param_2)

{
  short sVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_2 + 0x92) == '\0') {
    uVar2 = 0;
    if (*(longlong *)(param_2 + 0x68) != 0) {
      uVar2 = *(undefined4 *)(*(longlong *)(param_2 + 0x68) + -4);
    }
    sVar1 = FUN_019b60b0(*(undefined8 *)(param_1 + 0x68),uVar2,param_2);
    if (sVar1 == 0x2b) {
      uVar2 = 0;
      if (*(longlong *)(param_2 + 0x68) != 0) {
        uVar2 = *(undefined4 *)(*(longlong *)(param_2 + 0x68) + -4);
      }
      FUN_019b5f00(param_1 + 0x68,uVar2,1,param_2);
    }
    FUN_019b9050(*(undefined8 *)(param_1 + 0x68),param_2);
  }
  return;
}

