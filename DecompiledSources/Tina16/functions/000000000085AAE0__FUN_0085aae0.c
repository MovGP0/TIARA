/* Ghidra address: 0085aae0 */
/* Ghidra symbol: FUN_0085aae0 */


void FUN_0085aae0(longlong param_1,longlong param_2,int *param_3,int param_4)

{
  int *piVar1;
  longlong lVar2;
  longlong local_res10 [3];
  undefined8 local_28;
  undefined8 local_20 [2];
  longlong local_10;
  
  local_28 = 0;
  local_20[0] = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  if (local_res10[0] != 0) {
    FUN_0043ea00(local_20,local_res10[0]);
    FUN_00414b50(local_res10,local_20[0]);
    local_10 = FUN_00414de0(local_res10);
    while (local_10 != 0) {
      lVar2 = 0;
      if (*(longlong *)(param_1 + 0x2f8) != 0) {
        lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x2f8) + -8);
      }
      if (lVar2 <= *(int *)(param_1 + 0x2e4)) {
        FUN_00419260(param_1 + 0x2f8,&DAT_0085a790,1,(longlong)(*(int *)(param_1 + 0x2e4) + 0x10));
        FUN_00419260(param_1 + 0x2f0,&DAT_0085a7d8,1,(longlong)(*(int *)(param_1 + 0x2e4) + 0x10));
      }
      FUN_0085a860(param_1,&local_28,&local_10);
      FUN_00414ad0(*(longlong *)(param_1 + 0x2f8) + (longlong)*(int *)(param_1 + 0x2e4) * 8,local_28
                  );
      piVar1 = (int *)(*(longlong *)(param_1 + 0x2f0) + (longlong)*(int *)(param_1 + 0x2e4) * 0xc);
      *piVar1 = *param_3 + param_4;
      *(undefined8 *)(piVar1 + 1) =
           *(undefined8 *)(*(longlong *)(param_1 + 0x2f8) + (longlong)*(int *)(param_1 + 0x2e4) * 8)
      ;
      *param_3 = *param_3 + 1;
      *(int *)(param_1 + 0x2e4) = *(int *)(param_1 + 0x2e4) + 1;
    }
  }
  FUN_00414560(&local_28,2);
  FUN_00414480(local_res10);
  return;
}

