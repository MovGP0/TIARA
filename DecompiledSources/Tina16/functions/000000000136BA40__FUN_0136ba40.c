/* Ghidra address: 0136ba40 */
/* Ghidra symbol: FUN_0136ba40 */


void FUN_0136ba40(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  FUN_00411a80(param_1,param_2);
  *(undefined1 *)(*(longlong *)PTR_DAT_02003ba0 + 0x948) = 0;
  if (*(char *)(*(longlong *)PTR_DAT_02003ba0 + 0xa9) == '\0') {
    FUN_013cc560(*(undefined8 *)PTR_DAT_02003ba0,0);
  }
  else {
    FUN_00805990(*(undefined8 *)PTR_DAT_02003ba0);
  }
  *(undefined1 *)(*(longlong *)PTR_DAT_02003ba0 + 0x948) = 1;
  lVar1 = *(longlong *)(*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x27a8) + 0x488);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 0xf10) != 0)) {
    uVar2 = FUN_0065b870(*(undefined8 *)(param_1 + 0x10));
    thunk_FUN_04154efc(uVar2,0);
  }
  FUN_01364f70(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

