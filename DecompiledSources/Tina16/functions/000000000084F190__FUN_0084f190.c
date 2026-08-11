/* Ghidra address: 0084f190 */
/* Ghidra symbol: FUN_0084f190 */


void FUN_0084f190(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (*(char *)(param_1 + 0x53b) == '\0') {
    if (*(longlong *)(param_1 + 0x540) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x508);
      lVar2 = FUN_0084f210(param_1);
      (**(code **)(param_1 + 0x540))
                (*(undefined8 *)(param_1 + 0x548),*(undefined4 *)(lVar3 + 0x4a8),
                 *(undefined4 *)(lVar3 + 0x4ac),*(undefined8 *)(lVar2 + 0x4a0));
    }
    lVar3 = FUN_0084f210(param_1);
    iVar1 = (**(code **)(**(longlong **)(lVar3 + 0x4a0) + 0x28))(*(longlong **)(lVar3 + 0x4a0));
    *(bool *)(param_1 + 0x53b) = 0 < iVar1;
  }
  return;
}

