/* Ghidra address: 010af5b0 */
/* Ghidra symbol: FUN_010af5b0 */


void FUN_010af5b0(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_01b21610(*(undefined8 *)(param_1 + 0x30));
  if (iVar1 < 50000) {
    FUN_010a84e0(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30));
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x20) + 0xd8))
              (*(longlong **)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x30));
  }
  return;
}

