/* Ghidra address: 00603b30 */
/* Ghidra symbol: FUN_00603b30 */


void FUN_00603b30(longlong param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *local_res18 [2];
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  longlong local_20;
  
  local_30 = auStack_58;
  local_res18[0] = param_3;
  FUN_0041b910(param_3);
  local_20 = 0;
  if (param_2 != 0) {
    local_20 = (**(code **)(param_2 + 0xa0))(param_2,1);
    puVar1 = (undefined8 *)(local_20 + 0x28);
    *(longlong *)(local_20 + 0x30) = param_1;
    uVar2 = FUN_00411550(param_1,0xfffc);
    *puVar1 = uVar2;
    (**(code **)(*local_res18[0] + 0x18))(local_res18[0],local_20);
  }
  FUN_00410f20(*(undefined8 *)(param_1 + 0x18));
  *(longlong *)(param_1 + 0x18) = local_20;
  if (local_20 != 0) {
    puVar1 = (undefined8 *)(local_20 + 0x18);
    *(longlong *)(local_20 + 0x20) = param_1;
    uVar2 = FUN_00411550(param_1,0xfffd);
    *puVar1 = uVar2;
  }
  pcVar3 = (code *)FUN_00411550(param_1,0xfffd);
  (*pcVar3)(param_1,param_1);
  FUN_0041b800(local_res18);
  return;
}

