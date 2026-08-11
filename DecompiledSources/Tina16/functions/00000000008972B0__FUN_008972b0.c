/* Ghidra address: 008972b0 */
/* Ghidra symbol: FUN_008972b0 */


void FUN_008972b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined1 local_64 [4];
  undefined2 local_60;
  undefined2 local_5e;
  undefined1 local_58 [20];
  undefined1 local_44 [8];
  undefined1 local_3c [20];
  
  FUN_0040d200(&local_60,0x1c,0);
  local_60 = 0x17;
  FUN_00891ef0(param_1,param_3,local_58,1);
  FUN_00409a70(local_58,param_6,0x10);
  local_5e = (**(code **)PTR_PTR_02002a88)(param_4);
  uVar1 = (**(code **)PTR_PTR_02003200)
                    (param_2,0xc8000014,&local_60,0x1c,local_44,0x1c,local_64,0,0);
  FUN_0089c9c0(param_1,uVar1);
  FUN_00409a70(local_3c,param_5,0x10);
  return;
}

