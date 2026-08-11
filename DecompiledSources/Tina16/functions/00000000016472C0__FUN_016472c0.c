/* Ghidra address: 016472c0 */
/* Ghidra symbol: FUN_016472c0 */


longlong FUN_016472c0(longlong param_1,char param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
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
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 8) = uVar2;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x10) = uVar2;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x18) = uVar2;
  lVar3 = FUN_0162a660(&DAT_016229e8,1,0,0);
  *(longlong *)(local_res8 + 0x20) = lVar3;
  *(undefined1 *)(lVar3 + 0x130) = 1;
  *(undefined1 *)(lVar3 + 0x90) = 0xc4;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

