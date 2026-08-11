/* Ghidra address: 0041b420 */
/* Ghidra symbol: FUN_0041b420 */


undefined8 FUN_0041b420(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230 [2];
  longlong local_220;
  undefined1 local_212 [522];
  
  local_230[0] = 0;
  local_238 = 0;
  local_220 = 0;
  local_240 = 0;
  thunk_FUN_041b94f3(0,local_212,0x105);
  FUN_00416830(local_230,local_212,0x105);
  FUN_004167d0(&local_238,param_1);
  FUN_0041b1f0(&local_220,local_230[0],local_238);
  if (local_220 != 0) {
    uVar1 = FUN_00416740(local_220);
    local_240 = thunk_FUN_04146d7a(uVar1,0,2);
  }
  FUN_00414560(&local_238,2);
  FUN_00414480(&local_220);
  return local_240;
}

