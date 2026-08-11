/* Ghidra address: 00c51b10 */
/* Ghidra symbol: FUN_00c51b10 */


void FUN_00c51b10(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = FUN_00c51bd0(param_1,param_2);
  if (cVar1 != '\0') {
    iVar2 = FUN_004aeba0(*(undefined8 *)(param_1 + 0x78),param_2);
    if (iVar2 < *(int *)(*(longlong *)(param_1 + 0x78) + 0x10) + -1) {
      FUN_004aee50(*(longlong *)(param_1 + 0x78),param_2,0);
      FUN_004ae7e0(*(undefined8 *)(param_1 + 0x78),param_2);
    }
  }
  return;
}

