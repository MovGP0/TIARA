/* Ghidra address: 01bff350 */
/* Ghidra symbol: FUN_01bff350 */


void FUN_01bff350(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    if (*(longlong *)(param_1 + 0x78) != 0) {
      iVar1 = FUN_004aeba0(*(longlong *)(param_1 + 0x78),param_2);
      if (iVar1 != -1) {
        FUN_004ae870(*(undefined8 *)(param_1 + 0x78),iVar1);
      }
    }
    FUN_004d2d90(param_1,param_2);
  }
  return;
}

