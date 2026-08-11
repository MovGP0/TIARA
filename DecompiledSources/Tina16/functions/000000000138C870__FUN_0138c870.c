/* Ghidra address: 0138c870 */
/* Ghidra symbol: FUN_0138c870 */


void FUN_0138c870(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0xe78) + 0x50);
  if (lVar1 == 0) {
    FUN_0082a6c0(*(undefined8 *)(param_1 + 0xc70),0);
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0xc70);
    if (*(char *)(lVar2 + 0x328) == '\0') {
      FUN_0064de00(lVar2,*(undefined8 *)(*(longlong *)(param_1 + 0xe78) + 8));
      FUN_00b90440(*(undefined8 *)(param_1 + 0xc50),
                   *(undefined8 *)(*(longlong *)(param_1 + 0xe78) + 0x40));
      FUN_00b90440(*(undefined8 *)(param_1 + 0xc48),
                   *(undefined8 *)(*(longlong *)(param_1 + 0xe78) + 0x48));
    }
    else {
      FUN_0064de00(lVar2,*(undefined8 *)(lVar1 + 8));
      FUN_00b90440(*(undefined8 *)(param_1 + 0xc50),
                   *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xe78) + 0x50) + 0x40));
      FUN_00b90440(*(undefined8 *)(param_1 + 0xc48),
                   *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0xe78) + 0x50) + 0x48));
    }
  }
  return;
}

