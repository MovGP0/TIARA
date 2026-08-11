/* Ghidra address: 016b1fd0 */
/* Ghidra symbol: FUN_016b1fd0 */


void FUN_016b1fd0(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_20;
  
  local_20 = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x3060) + 8);
  if (param_2 < 0xb) {
    if (param_2 == 10) {
      uVar2 = FUN_016984a0(*(undefined8 *)
                            (param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8),0x11b);
      *(undefined8 *)(param_1 + 0x1030) = uVar2;
      FUN_016b0c20(lVar1,uVar2);
    }
    else if (param_2 < 6) {
      if (param_2 == 5) {
        *(undefined8 *)(param_1 + 0x1030) =
             *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8);
      }
      else if (param_2 == 1) {
        *(undefined8 *)(lVar1 + 0x18) =
             *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8);
      }
      else if (param_2 == 2) {
        FUN_016b0c40(lVar1,*(undefined8 *)
                            (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -1) * 8));
        FUN_016b0c70(lVar1,*(undefined8 *)
                            (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -4) * 8));
        FUN_01698640(*(undefined8 *)
                      (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -1) * 8),
                     param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -4) * 8);
        uVar2 = FUN_016b0970(&DAT_016b01e0,1,
                             *(undefined8 *)
                              (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -4) * 8),
                             *(undefined8 *)
                              (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -1) * 8));
        *(undefined8 *)(param_1 + 0x1030) = uVar2;
      }
      else if (param_2 == 3) {
        FUN_016b0da0(lVar1,*(undefined8 *)
                            (param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8),1);
      }
      else if (param_2 == 4) {
        FUN_016b0da0(lVar1,*(undefined8 *)
                            (param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8),0);
      }
    }
    else if (param_2 == 6) {
      uVar2 = FUN_01698500(*(undefined8 *)
                            (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -2) * 8),
                           *(undefined8 *)
                            (param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8),
                           *(undefined4 *)
                            (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -1) * 8));
      *(undefined8 *)(param_1 + 0x1030) = uVar2;
      FUN_016b0c20(lVar1,uVar2);
    }
    else if (param_2 == 7) {
      *(undefined8 *)(param_1 + 0x1030) =
           *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8);
    }
    else if (param_2 == 8) {
      uVar2 = FUN_01698500(*(undefined8 *)
                            (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -2) * 8),
                           *(undefined8 *)
                            (param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8),0x11c);
      *(undefined8 *)(param_1 + 0x1030) = uVar2;
      FUN_016b0c20(lVar1,uVar2);
    }
    else if (param_2 == 9) {
      uVar2 = FUN_016984a0(*(undefined8 *)
                            (param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -1) * 8),
                           0x11b);
      *(undefined8 *)(param_1 + 0x1030) = uVar2;
      FUN_016b0c20(lVar1,uVar2);
    }
  }
  else if (param_2 < 0x10) {
    if (param_2 == 0xf) {
      uVar2 = FUN_016985b0(*(undefined8 *)
                            (param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8));
      *(undefined8 *)(param_1 + 0x1030) = uVar2;
    }
    else if (param_2 == 0xb) {
      *(undefined8 *)(param_1 + 0x1030) =
           *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8);
    }
    else if (param_2 == 0xc) {
      *(undefined8 *)(param_1 + 0x1030) =
           *(undefined8 *)(param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8);
    }
    else if (param_2 == 0xd) {
      *(undefined8 *)(param_1 + 0x1030) =
           *(undefined8 *)(param_1 + 0x1038 + (longlong)(*(int *)(param_1 + 0x103c) + -1) * 8);
    }
    else if (param_2 == 0xe) {
      uVar2 = FUN_01698550(*(undefined8 *)
                            (param_1 + 0x1038 + (longlong)*(int *)(param_1 + 0x103c) * 8));
      *(undefined8 *)(param_1 + 0x1030) = uVar2;
    }
  }
  else if (param_2 == 0x10) {
    uVar2 = FUN_00409570(*(byte *)(*(longlong *)(lVar1 + 0x10) + 0x40) + 1);
    *(undefined8 *)(param_1 + 0x1030) = uVar2;
    FUN_004154b0(&local_20,*(longlong *)(lVar1 + 0x10) + 0x40,0);
    FUN_004425e0(uVar2,local_20);
  }
  else if (param_2 == 0x11) {
    *(undefined8 *)(param_1 + 0x1030) = *(undefined8 *)(*(longlong *)(lVar1 + 0x10) + 0x98);
  }
  else if (param_2 == 0x12) {
    *(undefined4 *)(param_1 + 0x1030) = 0x11d;
  }
  else if (param_2 == 0x13) {
    *(undefined4 *)(param_1 + 0x1030) = 0x15d;
  }
  FUN_004144d0(&local_20);
  return;
}

