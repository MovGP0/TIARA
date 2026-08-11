/* Ghidra address: 018d6c60 */
/* Ghidra symbol: FUN_018d6c60 */


longlong FUN_018d6c60(longlong param_1,char param_2)

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
  uVar2 = FUN_00608c80(&PTR_FUN_005f92e8,1);
  *(undefined8 *)(local_res8 + 8) = uVar2;
  uVar2 = FUN_00609e10(uVar2);
  *(undefined8 *)(local_res8 + 0x10) = uVar2;
  *(undefined4 *)(local_res8 + 0x18) = 600;
  *(undefined4 *)(local_res8 + 0x1c) = 0x60;
  uVar2 = FUN_018d3eb0(&DAT_018d1f80,1);
  *(undefined8 *)(local_res8 + 0x30) = uVar2;
  uVar2 = FUN_018066d0(&PTR_FUN_01805e80,1);
  *(undefined8 *)(local_res8 + 0xa0) = uVar2;
  *(undefined1 *)(local_res8 + 0xaa) = 1;
  *(undefined1 *)(local_res8 + 0xab) = 0;
  *(undefined4 *)(local_res8 + 0x28) = 0;
  *(undefined8 *)(local_res8 + 0x20) = 0;
  FUN_018dc3f0(local_res8,0x8000);
  *(undefined8 *)(local_res8 + 0xb0) = 0;
  *(undefined1 *)(local_res8 + 0xb8) = 1;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

