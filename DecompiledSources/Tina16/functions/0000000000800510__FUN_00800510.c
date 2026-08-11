/* Ghidra address: 00800510 */
/* Ghidra symbol: FUN_00800510 */


void FUN_00800510(longlong param_1,longlong param_2)

{
  longlong lVar1;
  char cVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x648);
  if ((param_2 != lVar1) && (param_2 != param_1)) {
    if (lVar1 != 0) {
      FUN_004d2d90(lVar1,param_1);
    }
    *(longlong *)(param_1 + 0x648) = param_2;
    if (param_2 != 0) {
      FUN_004d26c0(param_2,param_1);
      *(undefined1 *)(param_1 + 0x640) = 2;
    }
    *(undefined8 *)(param_1 + 0x660) = 0;
    *(undefined8 *)(param_1 + 0x668) = 0;
    cVar2 = FUN_0065be20(param_1);
    if ((cVar2 != '\0') && ((*(ushort *)(param_1 + 0x34) & 0x10) == 0)) {
      FUN_00655b90(param_1);
    }
  }
  return;
}

