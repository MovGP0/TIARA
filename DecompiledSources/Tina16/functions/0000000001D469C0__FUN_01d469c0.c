/* Ghidra address: 01d469c0 */
/* Ghidra symbol: FUN_01d469c0 */


undefined1
FUN_01d469c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ushort param_4,
            undefined8 param_5)

{
  char cVar1;
  ushort local_res20 [4];
  undefined1 local_19;
  longlong local_10;
  
  local_10 = 0;
  local_res20[0] = param_4;
  FUN_01d461d0(param_1);
  local_19 = 0;
  FUN_01d471a0(param_1,&local_10,param_3);
  if (local_10 != 0) {
    if (DAT_03567ba8 == (longlong *)0x0) {
      cVar1 = '\0';
    }
    else {
      cVar1 = (**(code **)(*DAT_03567ba8 + 0x48))(DAT_03567ba8,local_res20,&param_5);
    }
    if (cVar1 == '\0') {
      if (local_res20[0] < 4) {
        if (local_res20[0] == 3) {
          local_res20[0] = 2;
        }
        else if (local_res20[0] == 1) {
          local_res20[0] = 0xf;
        }
        else {
          if (local_res20[0] != 2) goto LAB_01d46aed;
          local_res20[0] = 0x12;
        }
      }
      else if (local_res20[0] == 4) {
        local_res20[0] = 2;
      }
      else {
        if (local_res20[0] != 0xb) goto LAB_01d46aed;
        local_res20[0] = 1;
      }
    }
    FUN_01d46b30(param_1,param_2,local_10,local_res20[0],param_5);
    local_19 = 1;
  }
LAB_01d46aed:
  FUN_00414480(&local_10);
  return local_19;
}

