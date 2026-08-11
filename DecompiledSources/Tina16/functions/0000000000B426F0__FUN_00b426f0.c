/* Ghidra address: 00b426f0 */
/* Ghidra symbol: FUN_00b426f0 */


void FUN_00b426f0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  short local_14;
  short local_12;
  undefined8 local_10;
  
  local_10 = 0;
  local_20 = param_2;
  while( true ) {
    iVar1 = FUN_00b258c0(local_20);
    if (iVar1 < 4) break;
    FUN_00b256e0(local_20,&local_12);
    FUN_00b256e0(local_20,&local_14);
    if (local_14 == 0) {
      FUN_004144d0(&local_10);
    }
    else {
      FUN_00b257a0(local_20,&local_10,local_14);
    }
    if (local_12 == 0x15) {
      FUN_00b42630(auStack_48);
    }
  }
  FUN_004144d0(&local_10);
  return;
}

