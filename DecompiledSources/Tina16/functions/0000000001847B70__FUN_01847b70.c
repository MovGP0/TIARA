/* Ghidra address: 01847b70 */
/* Ghidra symbol: FUN_01847b70 */


longlong FUN_01847b70(longlong param_1,char param_2,undefined8 param_3,undefined1 param_4,
                     undefined8 param_5,longlong param_6,undefined1 param_7)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong local_res8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  local_38 = param_5;
  FUN_01847460(local_res8,0,param_3,param_4);
  *(undefined1 *)(local_res8 + 0x19) = 1;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x98) = uVar2;
  *(undefined1 *)(local_res8 + 0x89) = param_7;
  lVar3 = FUN_0184c830(&PTR_FUN_0183e740,1,0);
  *(longlong *)(local_res8 + 0x90) = lVar3;
  *(longlong *)(lVar3 + 0x110) = param_6;
  if (param_6 != 0) {
    *(undefined1 *)(lVar3 + 0x150) = *(undefined1 *)(param_6 + 0x150);
  }
  if (*(char *)(local_res8 + 0x89) != '\0') {
    local_38 = param_5;
    uVar2 = FUN_01847460(&DAT_01843700,1,L"Result",param_4);
    *(undefined8 *)(local_res8 + 0x30) = uVar2;
    FUN_0184caa0(*(undefined8 *)(local_res8 + 0x90),L"Result",uVar2);
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

