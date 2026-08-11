/* Ghidra address: 00741610 */
/* Ghidra symbol: FUN_00741610 */


void FUN_00741610(longlong param_1)

{
  longlong *plVar1;
  
  FUN_005ff880(*(undefined8 *)(param_1 + 0x310),*(undefined8 *)(param_1 + 0xb8));
  FUN_005fdab0(*(undefined8 *)(*(longlong *)(param_1 + 0x310) + 0x80),*(undefined4 *)(param_1 + 200)
              );
  if ((*(ushort *)(param_1 + 0x34) & 0x10) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x310);
    FUN_005fd670(plVar1[0xf],1);
    FUN_005fdcb0(plVar1[0x10],1);
    (**(code **)(*plVar1 + 0xf8))
              (plVar1,0,0,*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c));
  }
  if (*(longlong *)(param_1 + 0x318) != 0) {
    (**(code **)(param_1 + 0x318))(*(undefined8 *)(param_1 + 800),param_1);
  }
  return;
}

