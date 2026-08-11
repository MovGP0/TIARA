/* Ghidra address: 00b57f70 */
/* Ghidra symbol: FUN_00b57f70 */


void FUN_00b57f70(longlong param_1,undefined8 param_2,char param_3)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_40;
  byte local_29;
  undefined8 local_28;
  longlong *local_20;
  
  local_40 = auStack_68;
  local_48 = 0;
  local_28 = 0;
  local_20 = (longlong *)FUN_00410e60(&LAB_00b251f8,1);
  if (*(longlong *)(param_1 + 0x30) == 0) {
    FUN_00416880(&local_48,*(undefined8 *)(param_1 + 8));
    FUN_004b9f40(local_20,local_48);
  }
  else {
    FUN_004b8ba0(local_20,*(longlong *)(param_1 + 0x30),0);
    FUN_004b6dc0(*(undefined8 *)(param_1 + 0x30),0);
  }
  local_29 = FUN_00b57dc0(param_1);
  FUN_00414c70(&local_28,param_2);
  if (param_3 != '\0') {
    if (local_29 < 4) {
      if (local_29 == 3) {
        FUN_004155b0(&local_28,&DAT_00b5818c);
      }
      else if (local_29 == 1) {
        FUN_004155b0(&local_28,&DAT_00b58164);
      }
      else if (local_29 == 2) {
        FUN_004155b0(&local_28,&DAT_00b58178);
      }
    }
    else if (local_29 == 4) {
      FUN_004155b0(&local_28,&DAT_00b581a0);
    }
    else if (local_29 == 5) {
      FUN_004155b0(&local_28,&DAT_00b581b4);
    }
  }
  FUN_00b41690(local_20,local_28,*(undefined4 *)(param_1 + 0x3c));
  (**(code **)(*local_20 + -0x20))(local_20,1);
  FUN_00414480(&local_48);
  FUN_004144d0(&local_28);
  return;
}

