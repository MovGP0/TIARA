/* Ghidra address: 00a47d90 */
/* Ghidra symbol: FUN_00a47d90 */


longlong FUN_00a47d90(longlong param_1,char param_2,longlong param_3,undefined1 param_4,
                     undefined1 param_5)

{
  undefined1 *puVar1;
  undefined8 uVar2;
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
    uVar2 = FUN_0044d490(&PTR_FUN_00472008,1,L"ThtBitmapImage requires an image");
    FUN_004134c0(uVar2);
  }
  FUN_00a47300(local_res8,0,param_4);
  *(longlong *)(local_res8 + 0x18) = param_3;
  *(undefined1 *)(local_res8 + 0x28) = param_5;
  uVar2 = FUN_009ec7c0(param_3);
  *(undefined8 *)(local_res8 + 0x20) = uVar2;
  *(undefined1 *)(local_res8 + 0x29) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

