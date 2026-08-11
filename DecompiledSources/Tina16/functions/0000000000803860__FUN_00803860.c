/* Ghidra address: 00803860 */
/* Ghidra symbol: FUN_00803860 */


void FUN_00803860(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  *(undefined8 *)(param_2 + 0x18) = 0;
  if (((((*(ushort *)(param_1 + 0x34) & 0x10) != 0) || (*(char *)(param_1 + 0x4d6) == '\x01')) ||
      (*(longlong *)(param_1 + 0x500) == 0)) ||
     (*(char *)(*(longlong *)(param_1 + 0x500) + 0xd0) != '\0')) {
    lVar1 = *(longlong *)(param_2 + 0x10);
    FUN_00802770(param_1,0);
    lVar1 = FUN_00648670(0xb017,*(undefined8 *)(lVar1 + 8),*(undefined2 *)(lVar1 + 0x10));
    if (lVar1 != 0) {
      *(undefined8 *)(param_2 + 0x18) = 1;
    }
  }
  return;
}

