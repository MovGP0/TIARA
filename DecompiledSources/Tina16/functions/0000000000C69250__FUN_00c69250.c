/* Ghidra address: 00c69250 */
/* Ghidra symbol: FUN_00c69250 */


void FUN_00c69250(longlong param_1,undefined4 param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  if (*(longlong *)(param_1 + 0x6e0) != 0) {
    lVar2 = FUN_00c6fe60(*(undefined8 *)(param_1 + 0x6e8),param_2);
    if (*(char *)(lVar2 + 0x40) == '\0') {
      lVar2 = FUN_00c6fe60(*(undefined8 *)(param_1 + 0x6e8),param_2);
      if (*(longlong *)(lVar2 + 0x48) == 0) {
        lVar2 = FUN_00c6fe60(*(undefined8 *)(param_1 + 0x6e8),param_2);
        FUN_00414b50(local_20,*(undefined8 *)(lVar2 + 0x30));
      }
      else {
        lVar2 = FUN_00c6fe60(*(undefined8 *)(param_1 + 0x6e8),param_2);
        FUN_00c701e0(local_20,*(undefined8 *)(lVar2 + 0x48));
      }
      cVar1 = FUN_00411580(**(undefined8 **)(param_1 + 0x6e0),&PTR_FUN_00c74980);
      if (cVar1 == '\0') {
        cVar1 = FUN_00411580(**(undefined8 **)(param_1 + 0x6e0),&PTR_FUN_00c66a78);
        if (cVar1 != '\0') {
          cVar1 = FUN_00b96de0(local_20[0]);
          if (cVar1 == '\0') {
            cVar1 = FUN_00440a20(local_20[0],1);
            if (cVar1 != '\0') {
              FUN_00441640(&local_50,local_20[0]);
              FUN_00c7abe0(*(undefined8 *)(param_1 + 0x6e0),local_50);
              FUN_00441920(&local_58,local_20[0]);
              FUN_00c79940(*(undefined8 *)(param_1 + 0x6e0),local_58);
            }
          }
          else {
            FUN_00c7abe0(*(undefined8 *)(param_1 + 0x6e0),local_20[0]);
          }
        }
      }
      else {
        cVar1 = FUN_00b96de0(local_20[0]);
        if (cVar1 == '\0') {
          cVar1 = FUN_00440a20(local_20[0],1);
          if (cVar1 != '\0') {
            FUN_00441640(&local_40,local_20[0]);
            FUN_00c7abe0(*(undefined8 *)(param_1 + 0x6e0),local_40);
            FUN_00441920(&local_48,local_20[0]);
            FUN_00c79940(*(undefined8 *)(param_1 + 0x6e0),local_48);
          }
        }
        else {
          FUN_00c7abe0(*(undefined8 *)(param_1 + 0x6e0),local_20[0]);
        }
      }
    }
    else {
      cVar1 = FUN_00411580(**(undefined8 **)(param_1 + 0x6e0),&PTR_FUN_00c74980);
      if (cVar1 == '\0') {
        cVar1 = FUN_00411580(**(undefined8 **)(param_1 + 0x6e0),&PTR_FUN_00c66a78);
        if (cVar1 != '\0') {
          lVar2 = FUN_00c6fe60(*(undefined8 *)(param_1 + 0x6e8),param_2);
          if (*(char *)(lVar2 + 0x40) == '\a') {
            uVar3 = thunk_FUN_03a99535(*(undefined8 *)(*(longlong *)(param_1 + 0x6e0) + 0x298),0x471
                                      );
            FUN_00c65f70(&local_38,7);
            thunk_FUN_041b2403(uVar3,0x14d,0xffffffffffffffff,local_38);
            uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x6e0) + 0x298);
            uVar4 = thunk_FUN_03a99535(uVar3,0x471);
            thunk_FUN_041b2403(uVar3,0x111,0x90471,uVar4);
            uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x6e0) + 0x298);
            uVar4 = thunk_FUN_03a99535(uVar3,0x471);
            thunk_FUN_041b2403(uVar3,0x111,0x80471,uVar4);
            uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x6e0) + 0x298);
            uVar4 = thunk_FUN_03a99535(uVar3,0x471);
            thunk_FUN_041b2403(uVar3,0x111,0x10471,uVar4);
          }
          else {
            lVar2 = FUN_00c6fe60(*(undefined8 *)(param_1 + 0x6e8),param_2);
            FUN_00c65de0(local_20,*(undefined1 *)(lVar2 + 0x40));
            FUN_00c7abe0(*(undefined8 *)(param_1 + 0x6e0),local_20[0]);
          }
        }
      }
      else {
        lVar2 = FUN_00c6fe60(*(undefined8 *)(param_1 + 0x6e8),param_2);
        if (*(char *)(lVar2 + 0x40) == '\a') {
          uVar3 = thunk_FUN_03a99535(*(undefined8 *)(*(longlong *)(param_1 + 0x6e0) + 0x298),0x471);
          FUN_00c65f70(local_30,7);
          thunk_FUN_041b2403(uVar3,0x14d,0xffffffffffffffff,local_30[0]);
          uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x6e0) + 0x298);
          uVar4 = thunk_FUN_03a99535(uVar3,0x471);
          thunk_FUN_041b2403(uVar3,0x111,0x90471,uVar4);
          uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x6e0) + 0x298);
          uVar4 = thunk_FUN_03a99535(uVar3,0x471);
          thunk_FUN_041b2403(uVar3,0x111,0x80471,uVar4);
          uVar3 = *(undefined8 *)(*(longlong *)(param_1 + 0x6e0) + 0x298);
          uVar4 = thunk_FUN_03a99535(uVar3,0x471);
          thunk_FUN_041b2403(uVar3,0x111,0x10471,uVar4);
        }
        else {
          lVar2 = FUN_00c6fe60(*(undefined8 *)(param_1 + 0x6e8),param_2);
          FUN_00c65de0(local_20,*(undefined1 *)(lVar2 + 0x40));
          FUN_00c7abe0(*(undefined8 *)(param_1 + 0x6e0),local_20[0]);
        }
      }
    }
  }
  FUN_00414560(&local_58,6);
  FUN_00414480(local_20);
  return;
}

