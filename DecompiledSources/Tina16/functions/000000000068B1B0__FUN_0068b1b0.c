/* Ghidra address: 0068b1b0 */
/* Ghidra symbol: FUN_0068b1b0 */


longlong FUN_0068b1b0(longlong param_1,char param_2,undefined8 param_3)

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
  FUN_006655a0(local_res8,0,param_3);
  if (*PTR_DAT_02003210 == '\0') {
    *(undefined4 *)(local_res8 + 0xa0) = 0x2800f0;
  }
  else {
    *(undefined4 *)(local_res8 + 0xa0) = 0x2800e0;
  }
  FUN_0064cbf0(local_res8,0x79);
  FUN_0064cc50(local_res8,0x61);
  FUN_0065bce0(local_res8,1);
  FUN_0064e0c0(local_res8,0);
  *(undefined1 *)(local_res8 + 0x498) = 1;
  lVar2 = FUN_004b28b0(&PTR_FUN_0067db70,1);
  *(longlong *)(local_res8 + 0x4a0) = lVar2;
  *(longlong *)(lVar2 + 0x38) = local_res8;
  uVar3 = FUN_005fe0d0(&PTR_FUN_006385a0,1);
  *(undefined8 *)(local_res8 + 0x4b8) = uVar3;
  FUN_0064b200(uVar3,local_res8);
  *(undefined4 *)(local_res8 + 0x4c4) = 0x10;
  *(undefined1 *)(local_res8 + 0x4b4) = 1;
  *(undefined1 *)(local_res8 + 0x4cf) = 1;
  *(undefined4 *)(local_res8 + 0x4c8) = 0xffffffff;
  *(undefined4 *)(local_res8 + 0x548) = 500;
  *(undefined1 *)(local_res8 + 0x54c) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

