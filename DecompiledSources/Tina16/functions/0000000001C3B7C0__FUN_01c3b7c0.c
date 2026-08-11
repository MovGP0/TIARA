/* Ghidra address: 01c3b7c0 */
/* Ghidra symbol: FUN_01c3b7c0 */


void FUN_01c3b7c0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x6b0);
  lVar2 = *(longlong *)(lVar1 + 0x530);
  if (lVar2 == *(longlong *)(param_1 + 0x6c8)) {
    FUN_006d78a0(lVar1,*(undefined8 *)(param_1 + 0x6c0));
  }
  else if (lVar2 == *(longlong *)(param_1 + 0x6f0)) {
    FUN_006d78a0(lVar1);
    cVar3 = FUN_01c38920(param_1,*(undefined8 *)(param_1 + 0x6c8));
    if (cVar3 != '\0') {
      FUN_01c3b7c0(param_1,param_2);
    }
  }
  else if (lVar2 == *(longlong *)(param_1 + 0x6f8)) {
    FUN_006d78a0(lVar1,*(longlong *)(param_1 + 0x6f0));
    cVar3 = FUN_01c38920(param_1,*(undefined8 *)(param_1 + 0x6f0));
    if (cVar3 != '\0') {
      FUN_01c3b7c0(param_1,param_2);
    }
  }
  if (*(longlong *)(*(longlong *)(param_1 + 0x6b0) + 0x530) == *(longlong *)(param_1 + 0x8a8)) {
    FUN_006d78a0(*(longlong *)(param_1 + 0x6b0),*(undefined8 *)(param_1 + 0x6f8));
    cVar3 = FUN_01c38920(param_1,*(undefined8 *)(param_1 + 0x6f8));
    if (cVar3 != '\0') {
      FUN_01c3b7c0(param_1,param_2);
    }
  }
  FUN_01c3bee0(param_1,param_1);
  FUN_01c38160(param_1);
  *(undefined1 *)(param_1 + 0x952) = 0;
  return;
}

