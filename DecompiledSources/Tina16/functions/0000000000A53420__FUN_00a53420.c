/* Ghidra address: 00a53420 */
/* Ghidra symbol: FUN_00a53420 */


void FUN_00a53420(longlong param_1,byte param_2,int param_3)

{
  undefined8 uVar1;
  undefined1 auStack_e8 [32];
  ulonglong local_c8;
  undefined1 *local_c0;
  undefined1 local_b4 [56];
  undefined1 local_7c;
  undefined1 local_78 [56];
  undefined1 local_40;
  byte local_39;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_c0 = auStack_e8;
  if ((*(byte *)(param_1 + 0x6c) != param_2) || (*(int *)(param_1 + 0x70) != param_3)) {
    if (param_2 == 1) {
      *(undefined1 *)(param_1 + 0x6c) = 1;
    }
    else if (param_2 == 0x1f) {
      if (DAT_020146c8 == '\0') {
        DAT_020146c8 = '\x01';
        DAT_020146c9 = 0xee;
        local_c0 = auStack_e8;
        local_20 = FUN_005fc570(&PTR_FUN_005f2d40,1);
        FUN_005fcd80(local_20,0);
        FUN_005fcfa0(local_20,0xee);
        local_10 = thunk_FUN_040ef593(0);
        uVar1 = FUN_005fc8c0(local_20);
        local_18 = thunk_FUN_041a19a1(local_10,uVar1);
        thunk_FUN_04172119(local_10,local_78);
        DAT_020146c9 = local_40;
        thunk_FUN_041a19a1(local_10,local_18);
        thunk_FUN_041a9b5c(0,local_10);
        FUN_00410f20(local_20);
      }
      *(undefined1 *)(param_1 + 0x6c) = DAT_020146c9;
    }
    else {
      local_c8 = (ulonglong)param_2;
      if ((&DAT_020144ec)[local_c8 * 2] == '\0') {
        (&DAT_020144ec)[local_c8 * 2] = 1;
        (&DAT_020144ed)[local_c8 * 2] = param_2;
        local_38 = FUN_005fc570(&PTR_FUN_005f2d40,1);
        FUN_005fcd80(local_38,0);
        FUN_005fcfa0(local_38,param_2);
        local_28 = thunk_FUN_040ef593(0);
        uVar1 = FUN_005fc8c0(local_38);
        local_30 = thunk_FUN_041a19a1(local_28,uVar1);
        thunk_FUN_04172119(local_28,local_b4);
        (&DAT_020144ed)[local_c8 * 2] = local_7c;
        thunk_FUN_041a19a1(local_28,local_30);
        thunk_FUN_041a9b5c(0,local_28);
        FUN_00410f20(local_38);
      }
      *(undefined *)(param_1 + 0x6c) = (&DAT_020144ed)[(ulonglong)param_2 * 2];
    }
    if (*(longlong *)(param_1 + 0x748) != 0) {
      local_39 = 0;
      do {
        *(undefined1 *)(*(longlong *)(param_1 + 0x748) + 0x24 + (ulonglong)local_39 * 0x40) =
             *(undefined1 *)(param_1 + 0x6c);
        local_39 = local_39 + 1;
      } while (local_39 != 4);
    }
    *(int *)(param_1 + 0x70) = param_3;
  }
  return;
}

