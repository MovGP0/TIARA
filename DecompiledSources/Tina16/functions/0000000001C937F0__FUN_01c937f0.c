/* Ghidra address: 01c937f0 */
/* Ghidra symbol: FUN_01c937f0 */


void FUN_01c937f0(void)

{
  undefined1 auStack_468 [40];
  undefined1 *local_440;
  longlong *local_438;
  undefined8 local_428;
  undefined8 local_420;
  undefined8 local_18 [2];
  
  local_440 = auStack_468;
  local_18[0] = 0;
  local_420 = 0;
  local_428 = 0;
  local_438 = (longlong *)FUN_007fc180(&PTR_FUN_01b8f620,1,*(undefined8 *)PTR_DAT_02004030);
  (**(code **)(*local_438 + 0x2d0))(local_438);
  FUN_00410f20(local_438);
  FUN_00414560(&local_428,2);
  FUN_00414480(local_18);
  return;
}

