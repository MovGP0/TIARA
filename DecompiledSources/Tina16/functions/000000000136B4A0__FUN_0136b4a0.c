/* Ghidra address: 0136b4a0 */
/* Ghidra symbol: FUN_0136b4a0 */


void FUN_0136b4a0(undefined8 param_1,uint param_2)

{
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)PTR_DAT_02002418 == 0) {
    *(undefined1 *)(*(longlong *)PTR_DAT_02003ba0 + 0x948) = 0;
    FUN_00805990(*(undefined8 *)PTR_DAT_02003ba0);
    *(undefined1 *)(*(longlong *)PTR_DAT_02003ba0 + 0x948) = 1;
  }
  else {
    *(undefined1 *)(*(longlong *)PTR_DAT_02002418 + 0x758) = 0;
    if (*(char *)(*(longlong *)PTR_DAT_02002418 + 0xa9) != '\0') {
      FUN_00805200(*(undefined8 *)PTR_DAT_02002418);
    }
  }
  FUN_01364f70(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

