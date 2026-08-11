/* Ghidra address: 00965a20 */
/* Ghidra symbol: FUN_00965a20 */


longlong FUN_00965a20(longlong param_1,char param_2,longlong param_3,undefined1 param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong local_res8;
  undefined1 auStack_78 [40];
  undefined1 *local_50;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_28;
  longlong local_20;
  
  local_50 = auStack_78;
  local_res8 = param_1;
  puVar1 = auStack_78;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_50;
  }
  local_50 = puVar1;
  if (param_3 == 0) {
    uVar3 = FUN_0044d490(&PTR_FUN_009013a8,1,L"Not supported error.");
    FUN_004134c0(uVar3);
  }
  FUN_00410e60(local_res8,0);
  *(undefined1 *)(local_res8 + 0x28) = 0;
  *(undefined1 *)(local_res8 + 0x50) = 0;
  uVar2 = FUN_008f4b10(param_3);
  *(undefined4 *)(local_res8 + 0x10) = uVar2;
  uVar3 = FUN_009a52e0(&PTR_FUN_0093e9a8,1);
  *(undefined8 *)(local_res8 + 0x38) = uVar3;
  uVar3 = FUN_009a42e0(&PTR_FUN_0093cb88,1);
  *(undefined8 *)(local_res8 + 0x18) = uVar3;
  uVar3 = FUN_009a4ae0(&PTR_FUN_0093da98,1);
  *(undefined8 *)(local_res8 + 0x30) = uVar3;
  lVar4 = FUN_00410e60(&PTR_FUN_008f5158,1);
  *(longlong *)(local_res8 + 0x20) = lVar4;
  *(undefined1 *)(lVar4 + 0x10) = 1;
  FUN_008f9470(lVar4,0);
  *(undefined1 *)(local_res8 + 0x14) = 0;
  local_20 = *(longlong *)(local_res8 + 0x30);
  local_28 = 0;
  FUN_0059ba60(local_20 + 8,&local_28);
  local_38 = *(longlong *)(local_res8 + 0x18);
  local_40 = 0;
  FUN_0059ba60(local_38 + 8,&local_40);
  FUN_00965ed0(local_res8,param_3,0,param_4);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

