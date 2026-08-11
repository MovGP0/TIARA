/* Ghidra address: 01a91c30 */
/* Ghidra symbol: FUN_01a91c30 */


undefined8 FUN_01a91c30(undefined8 param_1,char param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  char cVar3;
  ulonglong uVar4;
  undefined8 local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  undefined8 local_28;
  longlong *local_20;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar2 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar2 = local_30;
  }
  local_30 = puVar2;
  FUN_01a91b10(local_res8,0,0,0);
  local_20 = (longlong *)(**(code **)*param_3)(param_3);
  while( true ) {
    cVar3 = (**(code **)(*local_20 + 8))(local_20);
    if (cVar3 == '\0') break;
    uVar4 = (**(code **)*local_20)(local_20);
    local_28._4_4_ = (undefined4)(uVar4 >> 0x20);
    uVar1 = local_28._4_4_;
    local_28 = uVar4;
    FUN_01a921c0(local_res8,uVar4 & 0xffffffff,uVar1);
  }
  if (local_20 != (longlong *)0x0) {
    (**(code **)(*local_20 + -0x20))(local_20,1);
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

