/* Ghidra address: 005b2680 */
/* Ghidra symbol: FUN_005b2680 */


undefined8 FUN_005b2680(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong local_10;
  
  lVar1 = *(longlong *)(param_1 + 0xc0);
  if ((lVar1 == 0) || (*(longlong *)(lVar1 + 0x78) == 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    local_10 = param_1;
    uVar2 = FUN_00596a10(*(longlong *)(lVar1 + 0x78) + 8,&local_10);
  }
  return uVar2;
}

