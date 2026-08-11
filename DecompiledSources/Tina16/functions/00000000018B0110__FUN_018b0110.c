/* Ghidra address: 018b0110 */
/* Ghidra symbol: FUN_018b0110 */


void FUN_018b0110(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_2 + 8) == 0xf020) {
    lVar1 = FUN_018af290(param_1);
    if ((*(char *)(*(longlong *)(lVar1 + 0x220) + 0x10) == '\0') &&
       (lVar1 = FUN_018af290(param_1), *(char *)(*(longlong *)(lVar1 + 0x220) + 0x11) != '\0')) {
      thunk_FUN_03ab0e43(*(undefined8 *)(*(longlong *)PTR_DAT_02004030 + 0x2d0),6);
      return;
    }
    FUN_008038e0(param_1,param_2);
  }
  else {
    FUN_008038e0(param_1,param_2);
  }
  return;
}

