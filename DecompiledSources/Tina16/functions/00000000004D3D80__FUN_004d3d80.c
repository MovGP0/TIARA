/* Ghidra address: 004d3d80 */
/* Ghidra symbol: FUN_004d3d80 */


undefined8 FUN_004d3d80(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_10;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x20) == 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    local_10 = param_1;
    uVar2 = FUN_00596a10(*(longlong *)(lVar1 + 0x20) + 8,&local_10);
  }
  return uVar2;
}

