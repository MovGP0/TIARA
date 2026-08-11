/* Ghidra address: 0113d7c0 */
/* Ghidra symbol: FUN_0113d7c0 */


void FUN_0113d7c0(longlong param_1,undefined8 param_2,char *param_3)

{
  if (*PTR_DAT_02003b20 == '\0') {
    if (*(longlong *)PTR_DAT_02001970 == *(longlong *)(param_1 + 0x8c0)) {
      *(longlong *)
       (*(longlong *)PTR_DAT_02001970 + -0x38 + (ulonglong)*(byte *)(param_1 + 0x7fa) * 0x40 +
        (ulonglong)*(byte *)(param_1 + 0x7f9) * 0x20 + (longlong)*(int *)(param_1 + 0x7e8) * 8) =
           param_1;
      *(undefined1 *)(param_1 + 0x8d1) = 0;
      *param_3 = '\0';
      *(undefined8 *)(param_1 + 0x8c8) = *(undefined8 *)(*(longlong *)PTR_DAT_02001970 + 0x408);
      if (*(char *)(param_1 + 0xa9) != '\0') {
        FUN_00805990();
      }
    }
  }
  else {
    *param_3 = *(char *)(param_1 + 0xa09) == '\0';
    if (*param_3 == '\0') {
      FUN_016fd8d0(L"Please close all measurement\rinstruments before exiting TINA.");
    }
  }
  return;
}

