/* Ghidra address: 00894ce0 */
/* Ghidra symbol: FUN_00894ce0 */


void FUN_00894ce0(undefined8 param_1,undefined8 param_2,longlong param_3,undefined4 param_4,
                 char param_5)

{
  undefined4 uVar1;
  undefined2 local_a8;
  undefined2 local_a6;
  undefined1 local_a4 [4];
  undefined1 local_a0 [120];
  
  FUN_0040d200(&local_a8,0x80,0);
  if (param_5 == '\0') {
    local_a8 = 2;
    if (param_3 != 0) {
      FUN_00891ef0(param_1,param_3,local_a4,0);
    }
    local_a6 = (**(code **)PTR_PTR_02002a88)(param_4);
    uVar1 = 0x10;
  }
  else if (param_5 == '\x01') {
    local_a8 = 0x17;
    if (param_3 != 0) {
      FUN_00891ef0(param_1,param_3,local_a0,1);
    }
    local_a6 = (**(code **)PTR_PTR_02002a88)(param_4);
    uVar1 = 0x1c;
  }
  else {
    uVar1 = 0;
    FUN_0089bf30(param_1);
  }
  uVar1 = (**(code **)PTR_PTR_02002840)(param_2,&local_a8,uVar1);
  FUN_0089c9c0(param_1,uVar1);
  return;
}

