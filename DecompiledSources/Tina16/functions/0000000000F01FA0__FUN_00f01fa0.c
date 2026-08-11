/* Ghidra address: 00f01fa0 */
/* Ghidra symbol: FUN_00f01fa0 */


void FUN_00f01fa0(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  
  lVar1 = FUN_00f03860(*(undefined8 *)(*(longlong *)(param_1 + 0x508) + 0x660),
                       *(undefined4 *)(*(longlong *)(param_1 + 0x508) + 0x4a8));
  uVar2 = 0;
  if (*(char *)(lVar1 + 0x4c) == '\0') {
    uVar2 = 2;
  }
  else if (*(char *)(lVar1 + 0x4c) == '\x01') {
    uVar2 = 1;
  }
  FUN_00f01db0(param_1,uVar2);
  FUN_0083e980(param_1);
  return;
}

