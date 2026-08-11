/* Ghidra address: 004c1c60 */
/* Ghidra symbol: FUN_004c1c60 */


uint FUN_004c1c60(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_20;
  undefined8 local_18;
  uint local_c;
  
  local_30 = auStack_58;
  local_20 = 0;
  cVar1 = FUN_004c23c0(param_1);
  if (cVar1 != '\v') {
    FUN_004bdee0();
  }
  lVar3 = FUN_00589390(param_2);
  local_18 = **(undefined8 **)(lVar3 + 1);
  local_c = 0;
  while( true ) {
    FUN_004c1d80(param_1,&local_20);
    if (local_20 == 0) break;
    uVar2 = FUN_004bdf40(local_18,local_20);
    if (uVar2 < 0x20) {
      local_c = local_c | 1 << ((byte)uVar2 & 0x1f);
    }
  }
  FUN_00414480(&local_20);
  return local_c;
}

