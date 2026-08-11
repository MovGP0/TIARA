/* Ghidra address: 019675f0 */
/* Ghidra symbol: FUN_019675f0 */


undefined8 FUN_019675f0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x2c8) + 0x18);
  if (*(longlong *)(param_1 + 0x2d8) != 0) {
    lVar2 = (**(code **)(**(longlong **)(param_1 + 0x2d8) + 0x20))
                      (*(longlong **)(param_1 + 0x2d8),2);
  }
  if ((lVar2 != 0) && (*(longlong *)(param_1 + 0x2e0) == 0)) {
    FUN_01966c80(param_1);
  }
  cVar1 = FUN_0195b9b0(param_1);
  if (((*(longlong *)(param_1 + 0x2e0) != 0) && (cVar1 != '\0')) &&
     (cVar1 = (**(code **)(*(longlong *)(param_1 + 0x2e0) + 0xd0))(*(longlong *)(param_1 + 0x2e0)),
     cVar1 != '\0')) {
    return 1;
  }
  return 0;
}

