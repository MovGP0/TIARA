/* Ghidra address: 006e7090 */
/* Ghidra symbol: FUN_006e7090 */


void FUN_006e7090(undefined8 param_1,int param_2)

{
  undefined1 local_8c [4];
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_78;
  
  FUN_006e6d80(param_1,local_8c);
  local_88 = 0x40000000;
  if (param_2 == -0xfffff8) {
    local_84 = 0x40000000;
  }
  else {
    local_78 = FUN_005fbf20(param_2);
  }
  FUN_006e6f00(param_1,local_8c);
  return;
}

