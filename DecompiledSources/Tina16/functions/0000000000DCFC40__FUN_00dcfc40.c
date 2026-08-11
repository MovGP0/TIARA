/* Ghidra address: 00dcfc40 */
/* Ghidra symbol: FUN_00dcfc40 */


void FUN_00dcfc40(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  bool bVar1;
  
  if ((byte)param_4 < 8) {
    bVar1 = ((int)CONCAT71((int7)((ulonglong)param_4 >> 8),1) << ((byte)param_4 & 0x1f) & 0x20U) !=
            0;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    if ((*(byte *)(param_3 + 0x88) & 0x20) == 0) {
      FUN_016ed320(param_2,*(char *)(param_1 + 1) + '\x02',0,0x40d3880000000000,0);
    }
    else {
      FUN_016ee8d0(param_2,*(undefined8 *)(param_3 + 0x118),*(undefined1 *)((longlong)param_1 + 0xe)
                   ,*(undefined1 *)((longlong)param_1 + 0xd),*param_1,0);
    }
  }
  else {
    FUN_016ed320(param_2,*(char *)(param_1 + 1) + '\x02',0,0,0);
  }
  return;
}

