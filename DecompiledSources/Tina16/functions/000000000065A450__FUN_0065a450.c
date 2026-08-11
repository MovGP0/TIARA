/* Ghidra address: 0065a450 */
/* Ghidra symbol: FUN_0065a450 */


void FUN_0065a450(longlong param_1)

{
  char cVar1;
  int iVar2;
  
  if (((*(uint *)(param_1 + 0xa0) & 0x10) != 0) && (*(longlong *)(param_1 + 0x78) != 0)) {
    cVar1 = FUN_0065be20(param_1);
    if (cVar1 != '\0') {
      iVar2 = thunk_FUN_0419e3da(*(undefined8 *)(param_1 + 0x468));
      if (iVar2 != 0) {
        FUN_0065b700(param_1);
      }
    }
  }
  FUN_00654ce0(param_1,0xb011);
  return;
}

