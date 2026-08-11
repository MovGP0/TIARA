/* Ghidra address: 00966ee0 */
/* Ghidra symbol: FUN_00966ee0 */


longlong FUN_00966ee0(longlong param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  uint local_14;
  longlong local_10;
  
  local_20 = auStack_48;
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 0x98;
  }
  local_10 = FUN_0096fb60(&PTR_FUN_0091f9d0,1,0,param_1);
  local_14 = 0;
  if (param_2 != 0) {
    local_14 = *(uint *)(param_2 + -4) >> 1;
  }
  FUN_00416430(local_10 + 0x88,param_2,2,local_14 - 2);
  return local_10;
}

