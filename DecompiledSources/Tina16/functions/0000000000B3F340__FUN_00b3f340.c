/* Ghidra address: 00b3f340 */
/* Ghidra symbol: FUN_00b3f340 */


void FUN_00b3f340(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 local_d0 [5];
  undefined1 local_cb;
  undefined1 local_ca;
  undefined1 local_c9;
  undefined1 local_c8;
  undefined1 local_c7;
  undefined1 local_98;
  undefined1 local_90 [16];
  undefined1 local_80 [96];
  
  FUN_0040d200(local_d0,0x40,0);
  FUN_00409a70(param_3,local_d0,5);
  local_cb = (undefined1)param_1;
  local_ca = (undefined1)((uint)param_1 >> 8);
  local_c9 = (undefined1)((uint)param_1 >> 0x10);
  local_c8 = (undefined1)((uint)param_1 >> 0x18);
  local_c7 = 0x80;
  local_98 = 0x48;
  FUN_00b3ee80(local_80);
  FUN_00b3eec0(local_80,local_d0,0x40);
  FUN_00b3f2c0(local_80,local_90);
  FUN_00b3f100(local_90,0x10,param_2);
  return;
}

