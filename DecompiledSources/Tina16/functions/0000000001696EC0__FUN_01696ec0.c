/* Ghidra address: 01696ec0 */
/* Ghidra symbol: FUN_01696ec0 */


void FUN_01696ec0(longlong param_1)

{
  short sVar1;
  undefined1 local_128 [256];
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  *(undefined1 *)(param_1 + 0x40) = 0;
  FUN_01696200(param_1,1);
  while( true ) {
    sVar1 = *(short *)(param_1 + 0x30);
    if ((sVar1 == 0x27) || (sVar1 == DAT_01f80be8)) break;
    FUN_004169a0(local_20,param_1 + 0x40);
    FUN_00416780(&local_28,sVar1);
    FUN_00416ad0(local_20,local_28);
    FUN_00416910(local_128,local_20[0],0xff);
    FUN_00415020(param_1 + 0x40,local_128,0x50);
    FUN_01696200(param_1,1);
  }
  FUN_00414560(&local_28,2);
  return;
}

