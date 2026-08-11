/* Ghidra address: 011a4d50 */
/* Ghidra symbol: FUN_011a4d50 */


void FUN_011a4d50(longlong param_1)

{
  *(undefined4 *)PTR_DAT_02004708 = 0x1004;
  *(undefined1 *)(param_1 + 0x42039) = 1;
  if (*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764) < 7) {
    FUN_0064dbe0(*(undefined8 *)(param_1 + 0x6d8),1);
  }
  FUN_00805990(*(undefined8 *)PTR_DAT_020040c0);
  if (*(char *)(param_1 + 0x42038) == '\0') {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x818),
                 *(undefined8 *)(*(longlong *)PTR_DAT_02003af0 + 0x7a8));
  }
  else {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x818),
                 *(undefined8 *)(*(longlong *)PTR_DAT_02003af0 + 0x7a0));
  }
  if (*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764) < 7) {
    FUN_011a23d0(param_1);
    (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02003af0 + 0x6f8) + 0x128))
              (*(longlong **)(*(longlong *)PTR_DAT_02003af0 + 0x6f8),1);
  }
  else {
    FUN_011a32b0(param_1);
  }
  return;
}

