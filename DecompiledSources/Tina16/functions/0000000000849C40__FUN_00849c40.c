/* Ghidra address: 00849c40 */
/* Ghidra symbol: FUN_00849c40 */


void FUN_00849c40(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  if ((*(ushort *)(param_1 + 0x34) & 0x10) != 0) {
    cVar1 = FUN_0065be20(param_1);
    if ((cVar1 != '\0') && ((*(ushort *)(param_1 + 0x34) & 0x40) == 0)) {
      lVar2 = FUN_007f9b70(param_1,1);
      if ((lVar2 != 0) && (*(longlong *)(lVar2 + 0x510) != 0)) {
        (**(code **)(**(longlong **)(lVar2 + 0x510) + 0x18))(*(longlong **)(lVar2 + 0x510));
      }
    }
  }
  return;
}

