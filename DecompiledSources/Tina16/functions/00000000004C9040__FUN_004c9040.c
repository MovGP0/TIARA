/* Ghidra address: 004c9040 */
/* Ghidra symbol: FUN_004c9040 */


void FUN_004c9040(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_58;
  undefined1 local_50;
  undefined4 local_48;
  undefined1 local_40;
  char local_29 [9];
  
  local_29[0] = '\0';
  if (*(longlong *)(param_1 + 0x68) != 0) {
    (**(code **)(param_1 + 0x68))(*(undefined8 *)(param_1 + 0x70),param_1,param_2,local_29);
  }
  if (local_29[0] == '\0') {
    local_50 = 0x11;
    local_48 = *(undefined4 *)(param_1 + 0x50);
    local_40 = 0;
    local_58 = param_2;
    uVar1 = FUN_0044d8d0(&PTR_FUN_00472608,1,PTR_PTR_02003190,&local_58,1);
    FUN_004134c0(uVar1);
  }
  return;
}

