/* Ghidra address: 007fdf50 */
/* Ghidra symbol: FUN_007fdf50 */


void FUN_007fdf50(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  byte bVar2;
  bool bVar3;
  
  bVar2 = (byte)param_2;
  if ((*(byte *)(param_1 + 0x6a8) & 1) == 0) {
    bVar3 = *(byte *)(param_1 + 0xa9) != bVar2;
    if ((bVar3 & bVar2) != 0) {
      FUN_008007b0(param_1);
    }
    FUN_0064dbe0(param_1,param_2);
    plVar1 = *(longlong **)(param_1 + 0x4b8);
    if ((bVar3 && plVar1 != (longlong *)0x0) && ((*(ushort *)(param_1 + 0x34) & 8) == 0)) {
      if (bVar2 == 0) {
        (**(code **)(*plVar1 + 0xb0))(plVar1);
      }
      else {
        FUN_0064fca0(param_1,DAT_02012690,0,0);
      }
    }
  }
  else if (bVar2 == 0) {
    *(byte *)(param_1 + 0x6a8) = *(byte *)(param_1 + 0x6a8) & 0xfd;
  }
  else {
    *(byte *)(param_1 + 0x6a8) = *(byte *)(param_1 + 0x6a8) | 2;
  }
  return;
}

