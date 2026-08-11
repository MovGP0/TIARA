/* Ghidra address: 01c93b70 */
/* Ghidra symbol: FUN_01c93b70 */


void FUN_01c93b70(void)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  longlong *local_10;
  
  local_20 = auStack_48;
  local_10 = (longlong *)FUN_007fc180(&PTR_FUN_01b9e928,1,*(undefined8 *)PTR_DAT_02004030);
  (**(code **)(*local_10 + 0x2d0))(local_10);
  FUN_00410f20(local_10);
  return;
}

