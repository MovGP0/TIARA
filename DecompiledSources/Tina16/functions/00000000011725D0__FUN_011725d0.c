/* Ghidra address: 011725d0 */
/* Ghidra symbol: FUN_011725d0 */


void FUN_011725d0(longlong param_1)

{
  int iVar1;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_28 = 0;
  local_20 = 0;
  local_18 = 0;
  local_10 = 0;
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6c0),&local_10);
  iVar1 = FUN_00416db0(local_10,&DAT_011727a8);
  if (iVar1 == 0) {
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6b0),L"Circuit generation in progress. Please wait...")
    ;
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6c0),&DAT_01172824);
  }
  else {
    FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b0),&local_18);
    iVar1 = FUN_00416db0(local_18,&DAT_01172834);
    if (iVar1 == 0) {
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6b0),
                   L"Circuit generation in progress. Please wait...");
      FUN_0064de00(*(undefined8 *)(param_1 + 0x6c0),&DAT_011727a8);
    }
    else {
      FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b0),&local_20);
      iVar1 = FUN_00416db0(local_20,&LAB_01172844);
      if (iVar1 == 0) {
        FUN_0064de00(*(undefined8 *)(param_1 + 0x6b0),
                     L"Circuit generation in progress. Please wait...");
        FUN_0064de00(*(undefined8 *)(param_1 + 0x6c0),&DAT_01172834);
      }
      else {
        FUN_0064dd90(*(undefined8 *)(param_1 + 0x6c0),&local_28);
        iVar1 = FUN_00416db0(local_28,&DAT_01172824);
        if (iVar1 == 0) {
          FUN_0064de00(*(undefined8 *)(param_1 + 0x6b0),
                       L"Circuit generation in progress. Please wait...");
          FUN_0064de00(*(undefined8 *)(param_1 + 0x6c0),&LAB_01172844);
        }
      }
    }
  }
  FUN_00414560(&local_28,4);
  return;
}

