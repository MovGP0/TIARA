/* Ghidra address: 00599140 */
/* Ghidra symbol: FUN_00599140 */


void FUN_00599140(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(*(longlong *)(param_2 + 0x490) + 0x20) != 0) {
    if (*(longlong *)(param_2 + 0x468) == 0) {
      lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x490) + 0x10);
      FUN_004185d0(*(undefined8 *)(param_2 + 0x460),
                   **(undefined8 **)(lVar1 + 6 + (ulonglong)*(byte *)(lVar1 + 1)),
                   *(undefined8 *)(param_2 + 0x450));
    }
    else {
      *(undefined8 *)(param_2 + 0x448) = *(undefined8 *)(*(longlong *)(param_2 + 0x490) + 0x10);
      FUN_00419430(param_2 + 0x468,*(undefined8 *)(param_2 + 0x448));
    }
  }
  return;
}

