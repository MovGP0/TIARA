/* Ghidra address: 00786e80 */
/* Ghidra symbol: FUN_00786e80 */


void FUN_00786e80(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  FUN_0040d200(&local_30,0x18,0);
  local_30 = *(undefined8 *)(param_1 + 0x78);
  local_28 = *(undefined8 *)(param_1 + 0x70);
  local_20 = FUN_0078f6b0(DAT_02012538,*(undefined8 *)(param_1 + 0x68));
  cVar1 = FUN_00794b30(DAT_02012548,param_2);
  if (cVar1 != '\0') {
    FUN_007947a0(DAT_02012548,param_2);
  }
  FUN_00794710(DAT_02012548,param_2,&local_30);
  return;
}

