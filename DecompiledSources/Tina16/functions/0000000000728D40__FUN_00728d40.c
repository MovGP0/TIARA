/* Ghidra address: 00728d40 */
/* Ghidra symbol: FUN_00728d40 */


uint FUN_00728d40(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  longlong *local_res10;
  undefined8 local_res18;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  uint local_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  local_30 = auStack_58;
  local_10 = 0;
  local_res10 = param_2;
  local_res18 = param_3;
  FUN_0041b910(param_2);
  local_1c = (**(code **)(*local_res10 + 0x28))(local_res10,0x80058000,&local_18);
  if ((local_1c & 0x80000000) != 0) {
    local_1c = (**(code **)(*local_res10 + 0x28))(local_res10,0,&local_18);
  }
  if ((local_1c & 0x80000000) == 0) {
    FUN_00414480(&local_10);
    FUN_004167d0(&local_10,local_18);
    FUN_00414ad0(local_res18,local_10);
    FUN_00414480(&local_10);
    thunk_FUN_0398fb79(local_18);
  }
  FUN_00414480(&local_10);
  FUN_0041b800(&local_res10);
  return local_1c;
}

