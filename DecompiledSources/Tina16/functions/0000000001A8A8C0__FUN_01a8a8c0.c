/* Ghidra address: 01a8a8c0 */
/* Ghidra symbol: FUN_01a8a8c0 */


void FUN_01a8a8c0(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined1 local_30 [8];
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  cVar1 = FUN_01acff30(*(undefined8 *)(param_1 + 0x798),&local_20);
  if (cVar1 == '\x04') {
    lVar2 = FUN_004aeac0(local_20,0);
    if (*(longlong *)(lVar2 + 0x58) != 0) {
      FUN_01ab5810(*(longlong *)(lVar2 + 0x58),*(undefined8 *)(lVar2 + 0x78),FUN_01abde80,&local_28,
                   local_30);
      FUN_01ae24a0(*(undefined8 *)(param_1 + 0x798),*(undefined1 *)(lVar2 + 0x90),local_28);
    }
  }
  FUN_00410f20(local_20);
  return;
}

