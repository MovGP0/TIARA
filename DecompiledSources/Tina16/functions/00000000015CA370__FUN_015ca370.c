/* Ghidra address: 015ca370 */
/* Ghidra symbol: FUN_015ca370 */


int FUN_015ca370(longlong param_1)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_2b8 [32];
  undefined8 local_298;
  undefined1 *local_280;
  undefined1 local_26b [49];
  uint local_23a;
  int local_14;
  int local_10;
  undefined1 local_9;
  
  local_280 = auStack_2b8;
  FUN_00417580(local_26b,&DAT_015b8318);
  FUN_015ca1c0(param_1);
  local_14 = 0;
  local_9 = *(undefined1 *)(*(longlong *)(param_1 + 0xc0) + 9);
  *(undefined1 *)(*(longlong *)(param_1 + 0xc0) + 9) = 1;
  local_298 = 0;
  cVar1 = FUN_015de7f0(param_1,&LAB_015ca50c,local_26b,0x10);
  if (cVar1 != '\0') {
    if ((local_23a & 0x10) != 0) {
      local_14 = local_14 + 1;
    }
    while( true ) {
      cVar1 = FUN_015deaa0(param_1,local_26b);
      if (cVar1 == '\0') break;
      if ((local_23a & 0x10) != 0) {
        local_14 = local_14 + 1;
      }
    }
  }
  iVar2 = FUN_015c2df0(*(undefined8 *)(*(longlong *)(param_1 + 0x238) + 0x28));
  local_14 = iVar2 - local_14;
  *(undefined1 *)(*(longlong *)(param_1 + 0xc0) + 9) = local_9;
  local_10 = local_14;
  FUN_00417740(local_26b,&DAT_015b8318);
  return local_10;
}

