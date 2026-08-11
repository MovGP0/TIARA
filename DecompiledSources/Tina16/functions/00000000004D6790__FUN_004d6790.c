/* Ghidra address: 004d6790 */
/* Ghidra symbol: FUN_004d6790 */


void FUN_004d6790(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong local_20 [2];
  
  local_20[0] = 0;
  lVar1 = *(longlong *)(param_1 + 0x48);
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = *(longlong *)(lVar1 + -8);
  }
  FUN_005391d0(local_20,lVar1,lVar2 + -1);
  lVar1 = 0;
  if (local_20[0] != 0) {
    lVar1 = *(longlong *)(local_20[0] + -8);
  }
  (**(code **)(**(longlong **)(param_1 + 0x50) + 0x18))
            (*(longlong **)(param_1 + 0x50),local_20[0],lVar1 + -1);
  FUN_00419430(local_20,&DAT_004d96d8);
  return;
}

