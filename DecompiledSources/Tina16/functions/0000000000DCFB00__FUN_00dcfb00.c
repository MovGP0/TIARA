/* Ghidra address: 00dcfb00 */
/* Ghidra symbol: FUN_00dcfb00 */


void FUN_00dcfb00(undefined8 *param_1,undefined8 param_2,longlong param_3,byte param_4)

{
  undefined8 in_RAX;
  bool bVar1;
  undefined8 uVar2;
  
  if (param_4 < 8) {
    bVar1 = ((int)CONCAT71((int7)((ulonglong)in_RAX >> 8),1) << (param_4 & 0x1f) & 0xa2U) != 0;
  }
  else {
    bVar1 = false;
  }
  if (bVar1) {
    FUN_016ee810(param_2,*(undefined8 *)(param_3 + 0x118),*(undefined1 *)((longlong)param_1 + 0xc),
                 *(undefined1 *)((longlong)param_1 + 0xe),0);
    if ((*(byte *)(param_3 + 0x88) & 0x20) == 0) {
      if ((*(byte *)(param_3 + 0x88) & 2) == 0) {
        if ((*(byte *)(param_3 + 0x88) & 4) == 0) {
          uVar2 = 0;
        }
        else {
          uVar2 = 0x40d3880000000000;
        }
      }
      else {
        uVar2 = 0x40d3880000000000;
      }
      FUN_016ed320(param_2,*(char *)(param_1 + 1) + '\x02',0,uVar2,0);
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

