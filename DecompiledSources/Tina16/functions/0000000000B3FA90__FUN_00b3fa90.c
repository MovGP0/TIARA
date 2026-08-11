/* Ghidra address: 00b3fa90 */
/* Ghidra symbol: FUN_00b3fa90 */


void FUN_00b3fa90(longlong param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined1 local_48 [24];
  
  FUN_0040d200(param_2,0x400,0);
  FUN_00b3f340(param_3,param_4,param_5);
  iVar1 = 0;
  do {
    FUN_0040d200(local_48,0x10,0);
    FUN_00409a70(param_1 + iVar1,local_48,0x10);
    FUN_00b3f1b0(local_48,0x10,param_4);
    FUN_00409a70(local_48,param_2 + iVar1);
    iVar1 = iVar1 + 0x10;
  } while (iVar1 < 0x3ff);
  return;
}

