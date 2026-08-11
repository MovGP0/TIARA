/* Ghidra address: 018094d0 */
/* Ghidra symbol: FUN_018094d0 */


longlong FUN_018094d0(longlong param_1,char param_2)

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
  *(undefined4 *)(local_res8 + 0x5c) = 0x60;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x48) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x18) = uVar2;
  uVar2 = FUN_018066d0(&PTR_FUN_01805e80,1);
  *(undefined8 *)(local_res8 + 0x30) = uVar2;
  FUN_004b67b0(*(undefined8 *)(local_res8 + 0x18),1);
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x40) = uVar2;
  FUN_00414ad0(local_res8 + 0x50,L"FRUser.chm");
  *(undefined4 *)(local_res8 + 0x58) = 0;
  FUN_0180bd20(local_res8);
  FUN_0180ae10(local_res8);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

