/* Ghidra address: 0074cb20 */
/* Ghidra symbol: FUN_0074cb20 */


void FUN_0074cb20(longlong param_1)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 0x330) != 0) {
    if (*(char *)(param_1 + 0x348) != '\0') {
      FUN_0074ba60(param_1);
    }
    *(undefined8 *)(param_1 + 0x330) = 0;
    FUN_0074bb20(param_1);
    lVar1 = *(longlong *)(param_1 + 0x318);
    if (lVar1 != 0) {
      *(undefined8 *)(lVar1 + 1000) = *(undefined8 *)(param_1 + 0x358);
      *(undefined8 *)(lVar1 + 0x3f0) = *(undefined8 *)(param_1 + 0x360);
      *(undefined8 *)(param_1 + 0x318) = 0;
    }
  }
  if (*(longlong *)(param_1 + 0x390) != 0) {
    (**(code **)(param_1 + 0x390))(*(undefined8 *)(param_1 + 0x398),param_1);
  }
  return;
}

