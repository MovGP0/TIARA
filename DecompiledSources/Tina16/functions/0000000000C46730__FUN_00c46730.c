/* Ghidra address: 00c46730 */
/* Ghidra symbol: FUN_00c46730 */


longlong FUN_00c46730(longlong param_1,char param_2,undefined8 param_3,longlong param_4,
                     undefined1 param_5,char param_6)

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
  FUN_00410e60(local_res8,0);
  if ((param_6 != '\0') && (param_4 == 0)) {
    uVar2 = FUN_0044d490(&PTR_FUN_004334c0,1,L"Circular and Size=0!");
    FUN_004134c0(uVar2);
  }
  FUN_004b9c20(local_res8,param_3,param_4);
  *(longlong *)(local_res8 + 0x28) = param_4;
  *(char *)(local_res8 + 0x30) = param_6;
  *(undefined1 *)(local_res8 + 0x31) = param_5;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

