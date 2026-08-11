/* Ghidra address: 01c93d20 */
/* Ghidra symbol: FUN_01c93d20 */


void FUN_01c93d20(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong *local_10;
  
  local_20 = auStack_48;
  local_10 = (longlong *)FUN_007fc180(&PTR_FUN_01982b88,1,*(undefined8 *)PTR_DAT_02004030);
  FUN_01983650(local_10,param_2);
  (**(code **)(*local_10 + 0x2d0))(local_10);
  FUN_00410f20(local_10);
  return;
}

