/* Ghidra address: 00be6d80 */
/* Ghidra symbol: FUN_00be6d80 */


longlong FUN_00be6d80(longlong param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_00410e60(local_res8,0);
  if (param_3 == 0) {
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Owner of TSynWordWrapPlugin must be a TCustomSynEdit"
                        );
    FUN_004134c0(uVar2);
  }
  *(longlong *)(local_res8 + 0x38) = param_3;
  FUN_00be74b0(local_res8);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

