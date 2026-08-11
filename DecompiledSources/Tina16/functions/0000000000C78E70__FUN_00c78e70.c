/* Ghidra address: 00c78e70 */
/* Ghidra symbol: FUN_00c78e70 */


undefined4 FUN_00c78e70(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined4 local_14;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_10 = FUN_00442b60(0x80);
  thunk_FUN_03b3efbf(param_1,local_10,0x7f);
  iVar1 = FUN_004426c0(local_10,L"ToolbarWindow32");
  if (iVar1 == 0) {
    local_14 = 0;
    if (param_2 == 0) {
      thunk_FUN_03ab0e43(param_1,0);
    }
    else {
      thunk_FUN_03ab0e43(param_1,5);
    }
  }
  else {
    local_14 = 0xffffffff;
  }
  FUN_00442c30(local_10);
  return local_14;
}

