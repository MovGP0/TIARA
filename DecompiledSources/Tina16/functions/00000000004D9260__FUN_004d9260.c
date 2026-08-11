/* Ghidra address: 004d9260 */
/* Ghidra symbol: FUN_004d9260 */


void FUN_004d9260(longlong param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_20[0] = 0;
  local_10 = 0;
  FUN_00419260(&local_10,&DAT_00406578,1,(longlong)(param_4 * 4));
  iVar1 = FUN_00459ab0(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4,local_10,0);
  FUN_00419260(&local_10,&DAT_00406578,1,(longlong)iVar1);
  FUN_004d8330(param_1,local_10);
  FUN_00459ca0(*(undefined8 *)(param_1 + 0x10),local_20,*(undefined8 *)(param_1 + 0x18));
  FUN_004d8330(param_1,local_20[0]);
  FUN_00419430(local_20,&DAT_00406578);
  FUN_00419430(&local_10,&DAT_00406578);
  return;
}

