/* Ghidra address: 005b4770 */
/* Ghidra symbol: FUN_005b4770 */


void FUN_005b4770(longlong param_1,longlong param_2)

{
  int iVar1;
  longlong local_20;
  
  if (*(longlong *)(param_1 + 0x78) != 0) {
    local_20 = param_2;
    iVar1 = FUN_005974f0(*(longlong *)(param_1 + 0x78) + 8,&local_20);
    if (-1 < iVar1) {
      FUN_004d2d90(param_2,param_1);
      *(undefined8 *)(param_2 + 0xc0) = 0;
    }
  }
  return;
}

