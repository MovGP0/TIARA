/* Ghidra address: 00b046f0 */
/* Ghidra symbol: FUN_00b046f0 */


void FUN_00b046f0(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  FUN_00b02670(param_1);
  lVar1 = *(longlong *)(param_1 + 0x18);
  if (lVar1 != 0) {
    if (param_2 == 3) {
      if (*(char *)(param_1 + 0x11) == '\0') {
        if (*(char *)(param_1 + 0x10) == '\0') {
          FUN_00b01560(lVar1,*(undefined8 *)(param_1 + 0x28),1);
        }
        else {
          FUN_00b01a30(lVar1);
        }
      }
      else {
        FUN_00b019d0(lVar1);
      }
    }
    else {
      FUN_00b04480(param_1,local_20,param_2);
      FUN_00b01560(lVar1,local_20[0],1);
    }
  }
  FUN_00414480(local_20);
  return;
}

