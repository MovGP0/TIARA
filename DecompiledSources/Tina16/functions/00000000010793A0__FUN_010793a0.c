/* Ghidra address: 010793a0 */
/* Ghidra symbol: FUN_010793a0 */


undefined1 FUN_010793a0(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_29;
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  local_28 = 0;
  local_29 = 0;
  if (*(char *)(param_1 + 0xb51) == '\0') {
    FUN_0107a320(param_1);
    cVar1 = FUN_010b3a20(*(undefined8 *)(param_1 + 0xac8),*(undefined4 *)(param_1 + 0xad8));
    if (cVar1 != '\0') {
      FUN_010b3cb0(*(undefined8 *)(param_1 + 0xac8),*(undefined4 *)(param_1 + 0xaa0));
    }
    FUN_010b0ed0(*(undefined8 *)(*(longlong *)(param_1 + 0xad0) + 0x110),
                 *(undefined8 *)(param_1 + 0xac8));
    FUN_010b2840(*(undefined8 *)(param_1 + 0xac8),1);
    local_29 = 1;
  }
  else {
    uVar2 = FUN_00b89270();
    FUN_0041ddd0(&local_28,PTR_PTR_02002558);
    FUN_00b8e650(uVar2,local_20,L"HDLStrings.Msg_CIDECannotSave",local_28);
    FUN_0072d730(local_20[0],0xffffffff,0xffffffff);
  }
  FUN_00414560(&local_28,2);
  return local_29;
}

