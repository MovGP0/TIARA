/* Ghidra address: 007fab80 */
/* Ghidra symbol: FUN_007fab80 */


longlong FUN_007fab80(longlong param_1,char param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar2 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar2 = local_20;
  }
  local_20 = puVar2;
  FUN_00652880(local_res8,0,param_3);
  *(uint *)(local_res8 + 0xa0) = *(uint *)(local_res8 + 0xa0) | 0x20000;
  uVar3 = FUN_007f9bd0(&PTR_FUN_007e9e18,1,local_res8,0);
  *(undefined8 *)(local_res8 + 0x498) = uVar3;
  uVar3 = FUN_007f9bd0(&PTR_FUN_007e9e18,1,local_res8,1);
  *(undefined8 *)(local_res8 + 0x4b0) = uVar3;
  *(undefined1 *)(local_res8 + 0x494) = 0;
  lVar1 = *(longlong *)(local_res8 + 0x130);
  *(undefined1 *)(lVar1 + 0x20) = 0x12;
  *(undefined1 *)(lVar1 + 0x21) = 0x17;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

