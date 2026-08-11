/* Ghidra address: 00949940 */
/* Ghidra symbol: FUN_00949940 */


longlong FUN_00949940(longlong param_1,char param_2,longlong param_3,undefined2 param_4,
                     undefined8 param_5,undefined1 param_6)

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
    uVar2 = FUN_0044d490(&PTR_FUN_009013a8,1,L"Not supported error.");
    FUN_004134c0(uVar2);
  }
  FUN_00410e60(local_res8,0);
  *(undefined2 *)(local_res8 + 0x28) = param_4;
  *(undefined8 *)(local_res8 + 0x18) = param_5;
  *(undefined1 *)(local_res8 + 0x10) = param_6;
  *(longlong *)(local_res8 + 0x20) = param_3;
  *(longlong *)(local_res8 + 8) = param_3;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

