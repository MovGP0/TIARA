/* Ghidra address: 01b83d20 */
/* Ghidra symbol: FUN_01b83d20 */


void FUN_01b83d20(undefined8 param_1,longlong *param_2,longlong param_3,undefined8 param_4,
                 int *param_5)

{
  int iVar1;
  int iVar2;
  longlong local_res18;
  undefined8 local_res20;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined1 *local_50;
  bool local_39;
  longlong local_38;
  int local_2c;
  undefined8 local_28;
  longlong *local_20;
  
  local_50 = auStack_88;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_28 = 0;
  local_res18 = param_3;
  local_res20 = param_4;
  FUN_00414610(param_3);
  FUN_00414610(local_res20);
  *param_5 = 0;
  local_20 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_016cc2a0(param_2[0xb],local_20);
  iVar1 = (**(code **)(*local_20 + 0x28))(local_20);
  if (0 < iVar1) {
    if (local_res18 == 0) {
      FUN_01b81e30(param_1,&local_58,local_res20);
      FUN_004b5450(local_20,0,local_58);
    }
    else {
      iVar1 = (**(code **)(*local_20 + 0x28))();
      local_2c = 0;
      if (-1 < iVar1 + -1) {
        do {
          FUN_004b3cf0(local_20,&local_60,local_2c);
          local_38 = local_60;
          if (local_60 == local_res18) {
            local_39 = true;
          }
          else if ((local_60 == 0) || (local_res18 == 0)) {
            local_39 = false;
          }
          else {
            iVar2 = FUN_0043e420(local_60,local_res18);
            local_39 = iVar2 == 0;
          }
          if (local_39 != false) {
            FUN_01b81e30(param_1,&local_68,local_res20);
            FUN_004b5450(local_20,local_2c,local_68);
            *param_5 = *param_5 + 1;
          }
          local_2c = local_2c + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
    }
    *(undefined2 *)((longlong)local_20 + 0x2c) = 0x20;
    *(undefined2 *)((longlong)local_20 + 0x2e) = 0x20;
    FUN_004b3880(local_20,&local_28);
    (**(code **)(*param_2 + 0x10))(param_2,local_28);
  }
  FUN_00410f20(local_20);
  FUN_00414560(&local_68,3);
  FUN_00414480(&local_28);
  FUN_00414560(&local_res18,2);
  return;
}

