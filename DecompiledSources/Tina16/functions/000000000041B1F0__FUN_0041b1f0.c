/* Ghidra address: 0041b1f0 */
/* Ghidra symbol: FUN_0041b1f0 */


longlong * FUN_0041b1f0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined8 local_res10;
  longlong local_res18;
  undefined1 auStack_78 [40];
  longlong *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  longlong local_10;
  
  local_48 = 0;
  local_38 = 0;
  local_40 = 0;
  local_28 = 0;
  local_30 = 0;
  local_20 = 0;
  local_10 = 0;
  local_18 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  local_50 = param_1;
  FUN_00414610(param_2);
  FUN_00414610(local_res18);
  FUN_00414480(local_50);
  if (local_res18 != 0) {
    FUN_00414b50(&local_18,local_res18);
    iVar1 = 0;
    if (local_res18 != 0) {
      iVar1 = *(int *)(local_res18 + -4);
    }
    if (0 < iVar1) {
      do {
        if (*(short *)(local_res18 + -2 + (longlong)iVar1 * 2) == 0x2e) {
          FUN_00416dc0(&local_18,local_res18,1,iVar1);
          break;
        }
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    FUN_0041ae20(&local_10,local_res10);
    if (local_10 == 0) {
      uVar2 = thunk_FUN_04160250();
      FUN_0041a5d0(&local_30,uVar2);
      FUN_0041afb0(auStack_78,&local_28,local_18,local_30);
      FUN_00414ad0(local_50,local_28);
      if ((*local_50 == 0) && (DAT_0200aef8 == '\0')) {
        uVar2 = thunk_FUN_0413b284();
        FUN_0041a5d0(&local_40,uVar2);
        FUN_0041afb0(auStack_78,&local_38,local_18,local_40);
        FUN_00414ad0(local_50,local_38);
      }
      if (*local_50 == 0) {
        FUN_0041b0d0(auStack_78,&local_48,local_18);
        FUN_00414ad0(local_50,local_48);
      }
    }
    else {
      FUN_0041afb0(auStack_78,&local_20,local_18,local_10);
      FUN_00414ad0(local_50,local_20);
    }
  }
  FUN_00414560(&local_48,8);
  FUN_00414560(&local_res10,2);
  return local_50;
}

