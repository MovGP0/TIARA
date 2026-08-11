/* Ghidra address: 01a8a700 */
/* Ghidra symbol: FUN_01a8a700 */


void FUN_01a8a700(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 local_20 [2];
  
  local_20[0] = FUN_00410e60(&PTR_FUN_00472dd0,1);
  cVar1 = FUN_01acff30(*(undefined8 *)(param_1 + 0x798),local_20);
  if (cVar1 == '\x04') {
    lVar2 = FUN_004aeac0(local_20[0],0);
    if (*(longlong *)(lVar2 + 0x58) != 0) {
      FUN_01a8a3c0(param_1,0,*(longlong *)(lVar2 + 0x58),*(undefined8 *)(lVar2 + 0x78),
                   *(undefined8 *)(lVar2 + 0x80));
    }
  }
  FUN_00410f20(local_20[0]);
  return;
}

