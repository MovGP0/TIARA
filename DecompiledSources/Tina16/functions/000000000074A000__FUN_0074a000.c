/* Ghidra address: 0074a000 */
/* Ghidra symbol: FUN_0074a000 */


void FUN_0074a000(longlong param_1)

{
  longlong *plVar1;
  
  FUN_006604b0(param_1);
  if ((*(ushort *)(param_1 + 0x34) & 0x10) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x490);
    FUN_005fd670(plVar1[0xf],1);
    FUN_005fdcb0(plVar1[0x10],1);
    (**(code **)(*plVar1 + 0xf8))
              (plVar1,0,0,*(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c));
  }
  return;
}

