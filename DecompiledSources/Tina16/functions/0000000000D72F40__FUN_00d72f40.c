/* Ghidra address: 00d72f40 */
/* Ghidra symbol: FUN_00d72f40 */


longlong FUN_00d72f40(longlong param_1,char param_2,undefined8 param_3)

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
  FUN_004d22d0(local_res8,0,param_3);
  FUN_00414ad0(local_res8 + 0x78,L"Untitled");
  FUN_00414ad0(local_res8 + 0x88,&LAB_00d7312c);
  FUN_00414480(local_res8 + 0x90);
  FUN_00414480(local_res8 + 0x98);
  FUN_00414480(local_res8 + 0x80);
  *(undefined1 *)(local_res8 + 0xa8) = 0;
  *(undefined1 *)(local_res8 + 0xa9) = 0;
  FUN_00414480(local_res8 + 0xb0);
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0xb8) = uVar2;
  uVar2 = FUN_00d5a160(&PTR_FUN_00d56e28,1);
  *(undefined8 *)(local_res8 + 0xc0) = uVar2;
  uVar2 = FUN_00d7e2d0(&PTR_FUN_00d5abb8,1,0);
  *(undefined8 *)(local_res8 + 200) = uVar2;
  uVar2 = FUN_00d7e660(&PTR_FUN_00d5af60,1,0);
  *(undefined8 *)(local_res8 + 0xd0) = uVar2;
  uVar2 = FUN_00d7eb00(&PTR_FUN_00d5bbb8,1,0);
  *(undefined8 *)(local_res8 + 0xd8) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0xa0) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

