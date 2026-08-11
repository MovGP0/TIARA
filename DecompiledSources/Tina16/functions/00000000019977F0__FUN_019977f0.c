/* Ghidra address: 019977f0 */
/* Ghidra symbol: FUN_019977f0 */


undefined1 FUN_019977f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 uVar2;
  
  uVar2 = *(undefined1 *)(param_2 + 0x3f8);
  lVar1 = FUN_01c7c7d0(*(undefined8 *)PTR_DAT_02004e40);
  if ((*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x110) + 0x30) + 0x108) != '\0') &&
     (lVar1 != 0)) {
    uVar2 = *(undefined1 *)(lVar1 + 0x3f8);
  }
  return uVar2;
}

