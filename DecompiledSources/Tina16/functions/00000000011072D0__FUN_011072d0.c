/* Ghidra address: 011072d0 */
/* Ghidra symbol: FUN_011072d0 */


void FUN_011072d0(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x98);
  if ((lVar1 != 0) && (lVar1 != param_3)) {
    FUN_01cc6030(lVar1);
  }
  if (param_3 == 0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x98) = 0;
  }
  else {
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = param_2;
    if (*(longlong *)(param_1 + 0x98) != param_3) {
      FUN_01cc6020(param_3);
    }
    *(longlong *)(param_1 + 0x98) = param_3;
  }
  return;
}

