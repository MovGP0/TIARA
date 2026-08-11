/* Ghidra address: 01466db0 */
/* Ghidra symbol: FUN_01466db0 */


void FUN_01466db0(longlong param_1,undefined8 param_2,int param_3,int param_4)

{
  longlong lVar1;
  longlong local_10;
  
  local_10 = 0;
  lVar1 = *(longlong *)(param_1 + 0x788);
  if ((*(int *)(lVar1 + 0x4e0) <= param_4 + *(int *)(lVar1 + 0x4c0)) && (param_3 == 1)) {
    FUN_0084e320(lVar1,&local_10,0,param_4);
    if (local_10 != 0) {
      FUN_00848a70(*(longlong *)(param_1 + 0x788),
                   *(int *)(*(longlong *)(param_1 + 0x788) + 0x4e0) + 1);
    }
  }
  FUN_00414480(&local_10);
  return;
}

