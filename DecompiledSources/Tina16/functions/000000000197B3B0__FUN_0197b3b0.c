/* Ghidra address: 0197b3b0 */
/* Ghidra symbol: FUN_0197b3b0 */


longlong FUN_0197b3b0(longlong param_1,char param_2,undefined8 param_3)

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
  if (*(char *)(local_res8 + 0x88) == '\0') {
    uVar2 = FUN_01881a60();
    FUN_01881940(uVar2,local_res8);
  }
  FUN_0197b8d0(local_res8,1);
  *(undefined1 *)(local_res8 + 0xb0) = 1;
  FUN_00414480(local_res8 + 0xb8);
  *(undefined1 *)(local_res8 + 0xc1) = 1;
  *(undefined1 *)(local_res8 + 0xc0) = 0;
  *(undefined1 *)(local_res8 + 0xe8) = 0;
  *(undefined8 *)(local_res8 + 0xf0) = 0;
  *(undefined8 *)(local_res8 + 0x138) = 0;
  *(undefined1 *)(local_res8 + 0x140) = 0;
  *(undefined1 *)(local_res8 + 0x131) = 1;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

