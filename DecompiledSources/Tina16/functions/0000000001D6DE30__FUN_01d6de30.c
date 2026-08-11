/* Ghidra address: 01d6de30 */
/* Ghidra symbol: FUN_01d6de30 */


void FUN_01d6de30(longlong param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  uVar1 = FUN_016ebdc0(*(undefined8 *)(param_1 + 0x100));
  FUN_01b20020(&local_10,uVar1,&DAT_01d6deb4);
  FUN_01b04ef0(0x218,0,&LAB_01d6dec4,local_10);
  FUN_00414480(&local_10);
  return;
}

