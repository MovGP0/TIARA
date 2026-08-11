/* Ghidra address: 01899180 */
/* Ghidra symbol: FUN_01899180 */


void FUN_01899180(longlong param_1,uint param_2)

{
  longlong lVar1;
  
  FUN_00411a80(param_1,param_2);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_01899160(param_1);
  }
  if (*(longlong *)(param_1 + 0x38) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x38) + 0x40) = 0;
  }
  if (*(longlong *)(param_1 + 0x20) == 0) {
    lVar1 = *(longlong *)(param_1 + 8);
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_1 + 0x18);
      if (*(longlong *)(param_1 + 0x18) != 0) {
        *(longlong *)(*(longlong *)(param_1 + 0x18) + 8) = lVar1;
      }
    }
  }
  else {
    *(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x18) = *(undefined8 *)(param_1 + 0x18);
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    *(undefined8 *)(*(longlong *)(param_1 + 0x18) + 0x20) = *(undefined8 *)(param_1 + 0x20);
  }
  FUN_00410ef0(param_1,param_2 & 0xfffffffc);
  if ('\0' < (char)param_2) {
    FUN_00411a00(param_1);
  }
  return;
}

