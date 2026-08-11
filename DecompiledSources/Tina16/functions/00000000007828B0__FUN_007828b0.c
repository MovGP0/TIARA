/* Ghidra address: 007828b0 */
/* Ghidra symbol: FUN_007828b0 */


void FUN_007828b0(undefined *param_1)

{
  longlong lVar1;
  undefined *local_10;
  
  if (param_1 != PTR_PTR_02012568) {
    PTR_PTR_02012568 = param_1;
    if (param_1 != (undefined *)0x0) {
      local_10 = param_1;
      FUN_00599f70(DAT_02012588 + 8,0,&local_10);
    }
    lVar1 = DAT_02012560;
    if (DAT_02012560 != 0) {
      DAT_02012560 = 0;
      FUN_00410f20(lVar1);
    }
  }
  return;
}

