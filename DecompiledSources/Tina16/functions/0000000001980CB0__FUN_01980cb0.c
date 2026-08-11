/* Ghidra address: 01980cb0 */
/* Ghidra symbol: FUN_01980cb0 */


longlong FUN_01980cb0(longlong param_1,char param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
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
  uVar2 = FUN_00410e60(&PTR_FUN_0047cbc0,1);
  *(undefined8 *)(local_res8 + 0x20) = uVar2;
  lVar3 = (**(code **)*param_4)(param_4);
  lVar4 = FUN_004b6da0(param_4);
  FUN_004b8ba0(uVar2,param_4,lVar3 - lVar4);
  *(undefined8 *)(local_res8 + 0x18) = param_3;
  FUN_004b6dc0(*(undefined8 *)(local_res8 + 0x20),0);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

