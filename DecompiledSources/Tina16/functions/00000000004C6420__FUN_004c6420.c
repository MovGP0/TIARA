/* Ghidra address: 004c6420 */
/* Ghidra symbol: FUN_004c6420 */


bool FUN_004c6420(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = 0;
  if (*(char *)(*(longlong *)(param_1 + 0x50) + 0x7f) != '\0') {
    lVar2 = FUN_0058ada0(*(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x70),
                         *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0xb8));
    cVar1 = FUN_004c63c0(*(undefined8 *)(param_1 + 0x50),lVar2,*(undefined8 *)(param_1 + 0x28));
    if (cVar1 != '\0') {
      lVar2 = *(longlong *)(param_1 + 0x28);
    }
  }
  return *(longlong *)(param_1 + 0x28) == lVar2;
}

