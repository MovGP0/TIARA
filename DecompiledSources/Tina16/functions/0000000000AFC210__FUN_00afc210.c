/* Ghidra address: 00afc210 */
/* Ghidra symbol: FUN_00afc210 */


void FUN_00afc210(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  *(longlong *)(param_1 + 0x7c0) = lVar1;
  *(longlong *)(param_1 + 0x7c8) = lVar2;
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(param_1 + 0x8b0);
    *(undefined8 *)(lVar1 + 0x1c8) = 0;
    *(undefined8 *)(lVar1 + 0x1d0) = 0;
  }
  else {
    lVar1 = *(longlong *)(param_1 + 0x8b0);
    *(longlong *)(lVar1 + 0x1d0) = param_1;
    *(code **)(lVar1 + 0x1c8) = FUN_00afc280;
  }
  return;
}

