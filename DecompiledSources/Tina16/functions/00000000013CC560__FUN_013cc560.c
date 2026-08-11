/* Ghidra address: 013cc560 */
/* Ghidra symbol: FUN_013cc560 */


void FUN_013cc560(longlong param_1,longlong param_2)

{
  char cVar1;
  
  if (*(longlong *)(param_1 + 0x900) != 0) {
    FUN_00410f20(*(longlong *)(param_1 + 0x900));
  }
  *(undefined8 *)(param_1 + 0x900) = 0;
  *(undefined1 *)(param_1 + 0x931) = 0;
  *(undefined1 *)(param_1 + 0x8e8) = 0;
  if (*(longlong *)(param_1 + 0x8e0) != 0) {
    FUN_00410f20(*(longlong *)(param_1 + 0x8e0));
    *(undefined8 *)(param_1 + 0x8e0) = 0;
  }
  FUN_00414480(param_1 + 0x8b0);
  if ((*(char *)(param_1 + 0x92e) != '\0') && (*(longlong *)PTR_DAT_02005188 != 0)) {
    cVar1 = FUN_01cc6030(*(undefined8 *)PTR_DAT_02005188);
    if (cVar1 != '\0') {
      *(undefined8 *)PTR_DAT_02005188 = 0;
    }
  }
  if ((*(longlong *)PTR_DAT_02004e40 != 0) && (*(char *)(param_1 + 0x948) != '\0')) {
    FUN_01c6cf20(*(undefined8 *)PTR_DAT_02004e40);
  }
  if (*(longlong *)PTR_DAT_02004e40 != 0) {
    FUN_0064e770(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0xa10));
  }
  if (param_2 == 0) {
    FUN_0082a6c0(*(undefined8 *)(*(longlong *)PTR_DAT_02001e00 + 0xaf8),0);
  }
  return;
}

