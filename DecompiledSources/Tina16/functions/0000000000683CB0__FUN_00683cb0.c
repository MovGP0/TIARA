/* Ghidra address: 00683cb0 */
/* Ghidra symbol: FUN_00683cb0 */


void FUN_00683cb0(longlong param_1)

{
  char cVar1;
  
  if ((*(ushort *)(param_1 + 0x34) & 8) == 0) {
    if (*(longlong *)(*(longlong *)(param_1 + 0x130) + 0x18) == 0) {
      *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) & 0xffdfffff;
    }
    else {
      *(uint *)(param_1 + 0xa0) = *(uint *)(param_1 + 0xa0) | 0x200000;
    }
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      FUN_00655b90(param_1);
    }
  }
  return;
}

