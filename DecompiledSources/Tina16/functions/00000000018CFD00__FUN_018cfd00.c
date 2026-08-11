/* Ghidra address: 018cfd00 */
/* Ghidra symbol: FUN_018cfd00 */


void FUN_018cfd00(undefined8 param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 400);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 8) = param_3;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    FUN_01950ac0(param_2);
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined1 *)(lVar1 + 0x28) = 0;
  }
  return;
}

