/* Ghidra address: 0096ea60 */
/* Ghidra symbol: FUN_0096ea60 */


longlong FUN_0096ea60(longlong param_1,char param_2,longlong param_3)

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
  if (param_3 == 0) {
    uVar2 = FUN_0044d490(&PTR_FUN_004361b8,1,L"AOwner not specified.");
    FUN_004134c0(uVar2);
  }
  FUN_00410e60(local_res8,0);
  *(longlong *)(local_res8 + 8) = param_3;
  lVar3 = FUN_00410e60(&PTR_FUN_008f5158,1);
  *(longlong *)(local_res8 + 0x10) = lVar3;
  *(undefined1 *)(lVar3 + 0x10) = 2;
  FUN_008f9470(lVar3,1);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

