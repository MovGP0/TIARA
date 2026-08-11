/* Ghidra address: 018122f0 */
/* Ghidra symbol: FUN_018122f0 */


bool FUN_018122f0(longlong param_1)

{
  longlong lVar1;
  bool bVar2;
  
  if (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0x100) == 0) {
    bVar2 = *(longlong *)(param_1 + 0x48) ==
            (longlong)
            *(int *)(*(longlong *)
                      (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0xb0) +
                      (longlong)*(int *)(*(longlong *)(param_1 + 0x60) + 0xac) * 8) + 0x24);
  }
  else {
    lVar1 = FUN_0058ada0(*(undefined8 *)(*(longlong *)(param_1 + 0x60) + 0x100),
                         *(undefined8 *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x60) + 0xb0) +
                          (longlong)*(int *)(*(longlong *)(param_1 + 0x60) + 0xac) * 8));
    bVar2 = *(longlong *)(param_1 + 0x48) == lVar1;
  }
  return bVar2;
}

