/* Ghidra address: 0184eb90 */
/* Ghidra symbol: FUN_0184eb90 */


void FUN_0184eb90(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = param_1;
  while( true ) {
    if (lVar1 == 0) {
      return;
    }
    if (*(longlong *)(lVar1 + 0xf0) != 0) break;
    lVar1 = *(longlong *)(lVar1 + 0x110);
  }
  (**(code **)(lVar1 + 0xf0))(*(undefined8 *)(lVar1 + 0xf8),param_1,param_2,param_3);
  return;
}

