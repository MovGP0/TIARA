/* Ghidra address: 018afbf0 */
/* Ghidra symbol: FUN_018afbf0 */


void FUN_018afbf0(longlong param_1,undefined8 param_2,undefined1 *param_3)

{
  longlong lVar1;
  
  if (*(char *)(param_1 + 0x840) != '\0') {
    *param_3 = 2;
  }
  *(undefined1 *)(param_1 + 0x841) = 1;
  lVar1 = FUN_018af290(param_1);
  if (lVar1 != 0) {
    lVar1 = FUN_018af290(param_1);
    if (*(longlong *)(lVar1 + 0x470) != 0) {
      lVar1 = FUN_018af290(param_1);
      (**(code **)(lVar1 + 0x470))(*(undefined8 *)(lVar1 + 0x478),param_1);
    }
  }
  if (*(longlong *)(param_1 + 0x838) != 0) {
    FUN_00452320(param_1 + 0x838);
  }
  return;
}

