/* Ghidra address: 01c7c7d0 */
/* Ghidra symbol: FUN_01c7c7d0 */


undefined8 FUN_01c7c7d0(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  uVar3 = 0;
  if (*(char *)(*(longlong *)(param_1 + 0xb78) + 0x328) != '\0') {
    lVar1 = FUN_012bedf0(*(undefined8 *)(*(longlong *)(param_1 + 0x27a8) + 0xd8),
                         *(undefined2 *)(param_1 + 0x17f0));
    if (lVar1 != 0) {
      lVar2 = FUN_012be950(lVar1,param_2);
      if ((lVar2 != 0) && (uVar3 = 0, *(char *)(lVar2 + 8) == '\0')) {
        uVar3 = FUN_012be9c0(lVar1,param_2);
      }
    }
  }
  return uVar3;
}

