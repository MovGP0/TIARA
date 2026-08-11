/* Ghidra address: 00bad320 */
/* Ghidra symbol: FUN_00bad320 */


longlong FUN_00bad320(longlong param_1,char param_2,undefined8 param_3,char param_4,
                     undefined8 param_5,undefined1 param_6)

{
  undefined1 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong local_res8;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 local_30;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  *(char *)(local_res8 + 0x18) = param_4;
  if (param_4 == '\0') {
    local_38 = 0x4000;
    lVar2 = FUN_00b9b0d0(&PTR_FUN_00b99d08,1,param_3,param_5);
    *(longlong *)(local_res8 + 0x20) = lVar2;
    *(undefined1 *)(local_res8 + 0x4d) = *(undefined1 *)(lVar2 + 0x59);
  }
  else {
    local_38 = CONCAT31(local_38._1_3_,param_6);
    local_30 = 0x2000;
    uVar3 = FUN_00b9bf80(&DAT_00b9a870,1,param_3,param_5);
    *(undefined8 *)(local_res8 + 0x28) = uVar3;
  }
  *(undefined4 *)(local_res8 + 0x48) = 0xffffffff;
  *(undefined4 *)(local_res8 + 0x44) = 0x100;
  *(undefined4 *)(local_res8 + 0x40) = 0xffffffff;
  uVar3 = FUN_004095c0((longlong)(*(int *)(local_res8 + 0x44) * 2));
  *(undefined8 *)(local_res8 + 0x38) = uVar3;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

