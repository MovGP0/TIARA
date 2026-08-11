/* Ghidra address: 00666f00 */
/* Ghidra symbol: FUN_00666f00 */


longlong FUN_00666f00(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_004d0ba0(local_res8,0,0);
  uVar2 = FUN_00618ab0(&PTR_FUN_00617700,1,0);
  *(undefined8 *)(local_res8 + 0x60) = uVar2;
  lVar3 = FUN_004afa90(&DAT_00473870,1);
  *(longlong *)(local_res8 + 0x48) = lVar3;
  *(undefined1 *)(lVar3 + 0x18) = 1;
  FUN_00667a00(local_res8,param_3);
  *(undefined1 *)(local_res8 + 0x58) = 0;
  *(undefined1 *)(local_res8 + 0x59) = 1;
  *(undefined8 *)(local_res8 + 0x50) = param_4;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

