/* Ghidra address: 007dd3a0 */
/* Ghidra symbol: FUN_007dd3a0 */


longlong FUN_007dd3a0(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined2 uVar2;
  longlong lVar3;
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
  FUN_004d22d0(local_res8,0,param_3);
  *(undefined1 *)(local_res8 + 0x86) = 1;
  *(undefined1 *)(local_res8 + 0x81) = 1;
  *(undefined1 *)(local_res8 + 0x83) = 2;
  *(undefined1 *)(local_res8 + 0x84) = 2;
  uVar2 = FUN_007dcb70();
  *(undefined2 *)(local_res8 + 0xa8) = uVar2;
  *(undefined4 *)(local_res8 + 0x88) = 0xffffffff;
  FUN_00414480(local_res8 + 0xb0);
  lVar3 = FUN_007d88e0(&PTR_FUN_007d3330,1);
  *(longlong *)(local_res8 + 0xf0) = lVar3;
  *(longlong *)(lVar3 + 0x20) = local_res8;
  *(code **)(lVar3 + 0x18) = FUN_007e3df0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

