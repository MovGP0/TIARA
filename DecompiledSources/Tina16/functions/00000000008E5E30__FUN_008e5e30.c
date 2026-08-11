/* Ghidra address: 008e5e30 */
/* Ghidra symbol: FUN_008e5e30 */


undefined8 FUN_008e5e30(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  char local_1d;
  char local_1c;
  char local_1b;
  char local_1a;
  char local_19;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_18 = 0;
  local_10 = FUN_004b6da0(param_2);
  iVar1 = (**(code **)(*param_2 + 0x18))(param_2,&local_1a,2);
  if (iVar1 == 2) {
    if (local_1a == '\0') {
      if (local_19 == '\0') {
        iVar1 = (**(code **)(*param_2 + 0x18))(param_2,&local_1a,2);
        if (iVar1 == 2) {
          if ((local_1a == -2) && (local_19 == -1)) {
            local_18 = FUN_008e6740(&PTR_FUN_008d40d8,1);
          }
          else if ((local_1a == -1) && (local_19 == -2)) {
            local_18 = FUN_008e6740(&PTR_FUN_008d4858,1);
          }
        }
      }
    }
    else if (local_1a == -0x11) {
      if (local_19 == -0x45) {
        iVar1 = (**(code **)(*param_2 + 0x18))(param_2,&local_1b,1);
        if ((iVar1 == 1) && (local_1b == -0x41)) {
          local_18 = FUN_008e6740(&PTR_FUN_008d3548,1);
        }
      }
    }
    else if (local_1a == -2) {
      if (local_19 == -1) {
        iVar1 = (**(code **)(*param_2 + 0x18))(param_2,&local_1d,2);
        if (iVar1 == 2) {
          if ((local_1d == '\0') && (local_1c == '\0')) {
            local_18 = FUN_008e6740(&PTR_FUN_008d4c20,1);
          }
          else {
            local_18 = FUN_008e6740(&PTR_FUN_008d3958,1);
          }
        }
        else {
          local_18 = FUN_008e6740(&PTR_FUN_008d3958,1);
        }
      }
    }
    else if ((local_1a == -1) && (local_19 == -2)) {
      iVar1 = (**(code **)(*param_2 + 0x18))(param_2,&local_1d,2);
      if (iVar1 == 2) {
        if ((local_1d == '\0') && (local_1c == '\0')) {
          local_18 = FUN_008e6740(&PTR_FUN_008d4498,1);
        }
        else {
          local_18 = FUN_008e6740(&PTR_FUN_008d3d18,1);
        }
      }
      else {
        local_18 = FUN_008e6740(&PTR_FUN_008d3d18,1);
      }
    }
  }
  FUN_004b6dc0(param_2,local_10);
  return local_18;
}

