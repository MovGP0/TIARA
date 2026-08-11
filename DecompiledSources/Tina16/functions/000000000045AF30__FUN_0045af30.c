/* Ghidra address: 0045af30 */
/* Ghidra symbol: FUN_0045af30 */


longlong * FUN_0045af30(longlong *param_1,char param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  longlong *local_res8;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  uVar2 = thunk_FUN_041a78f9();
  local_38 = 0;
  (**(code **)(*local_res8 + 0x68))(local_res8,0,uVar2,0);
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

