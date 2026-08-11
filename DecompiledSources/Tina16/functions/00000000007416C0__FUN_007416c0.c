/* Ghidra address: 007416c0 */
/* Ghidra symbol: FUN_007416c0 */


longlong FUN_007416c0(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
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
  FUN_0065f0e0(local_res8,0,param_3);
  *(uint *)(local_res8 + 0xa0) = *(uint *)(local_res8 + 0xa0) | 0x80800;
  lVar2 = FUN_00603960(&DAT_005f7500,1);
  *(longlong *)(local_res8 + 0x318) = lVar2;
  *(longlong *)(lVar2 + 0x28) = local_res8;
  *(code **)(lVar2 + 0x20) = FUN_007420c0;
  *(longlong *)(lVar2 + 0x40) = local_res8;
  uVar3 = FUN_00411550(local_res8,0xffc4);
  *(undefined8 *)(lVar2 + 0x38) = uVar3;
  *(longlong *)(lVar2 + 0x50) = local_res8;
  uVar3 = FUN_00411550(local_res8,0xffc3);
  *(undefined8 *)(lVar2 + 0x48) = uVar3;
  FUN_0064cc50(local_res8,0x69);
  FUN_0064cbf0(local_res8,0x69);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

