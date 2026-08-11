/* Ghidra address: 0045b760 */
/* Ghidra symbol: FUN_0045b760 */


undefined8 FUN_0045b760(undefined8 param_1,undefined8 param_2)

{
  undefined1 *local_10;
  
  local_10 = (undefined1 *)0x0;
  FUN_00419430(&local_10,&DAT_00406578);
  FUN_00419260(&local_10,&DAT_00406578,1,3);
  *local_10 = 0xef;
  local_10[1] = 0xbb;
  local_10[2] = 0xbf;
  FUN_004194b0(param_2,local_10,&DAT_00406578);
  FUN_00419430(&local_10,&DAT_00406578);
  return param_2;
}

