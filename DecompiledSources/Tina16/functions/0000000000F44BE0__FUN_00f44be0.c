/* Ghidra address: 00f44be0 */
/* Ghidra symbol: FUN_00f44be0 */


void FUN_00f44be0(longlong param_1,undefined8 param_2,undefined1 *param_3,longlong *param_4)

{
  int iVar1;
  int iVar2;
  undefined8 local_48;
  longlong local_40;
  longlong lStack_38;
  int local_30;
  int local_2c [3];
  
  local_48 = 0;
  if (*param_4 == *(longlong *)(param_1 + 0x6d0)) {
    FUN_00849eb0(*(longlong *)(param_1 + 0x6d0),(int)param_4[6],
                 *(undefined4 *)((longlong)param_4 + 0x34),local_2c,&local_30);
    if ((local_2c[0] < 0) || (local_30 < 0)) {
      *param_3 = 0;
    }
    else {
      FUN_0084e320(*(undefined8 *)(param_1 + 0x6d0),&local_48,local_2c[0],local_30);
      iVar1 = FUN_005fdff0(*(undefined8 *)(*(longlong *)(param_1 + 0x6d0) + 0x490),local_48);
      iVar2 = FUN_00848220(*(undefined8 *)(param_1 + 0x6d0),local_2c[0]);
      if (iVar1 < iVar2) {
        *param_3 = 0;
      }
      else {
        *param_3 = 1;
        FUN_00414ad0(param_4 + 8,local_48);
        FUN_00849e90(*(undefined8 *)(param_1 + 0x6d0),&local_40,local_2c[0],local_30);
        *(undefined4 *)(param_4 + 7) = 100;
        param_4[4] = local_40;
        param_4[5] = lStack_38;
      }
    }
  }
  FUN_00414480(&local_48);
  return;
}

