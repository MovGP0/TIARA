/* Ghidra address: 00c7b8b0 */
/* Ghidra symbol: FUN_00c7b8b0 */


undefined1 FUN_00c7b8b0(longlong *param_1,longlong *param_2)

{
  char cVar1;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined4 local_24;
  int local_20;
  undefined1 local_19;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_19 = 1;
  local_18 = FUN_004095c0(0x11160);
  local_10 = FUN_004095c0(0xcd08);
  do {
    local_20 = (**(code **)(*param_1 + 0x18))(param_1,local_18,0x11160);
    cVar1 = FUN_00c7b790(local_18,local_10,local_20,&local_24);
    if (cVar1 == '\0') {
      local_19 = 0;
      break;
    }
    (**(code **)(*param_2 + 0x20))(param_2,local_10,local_24);
  } while (local_20 == 0x11160);
  FUN_004095f0(local_10);
  FUN_004095f0(local_18);
  return local_19;
}

