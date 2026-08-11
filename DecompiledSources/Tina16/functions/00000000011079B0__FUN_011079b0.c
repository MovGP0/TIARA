/* Ghidra address: 011079b0 */
/* Ghidra symbol: FUN_011079b0 */


longlong FUN_011079b0(longlong param_1,char param_2)

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
  FUN_01106ba0(local_res8,0);
  *(undefined1 *)(local_res8 + 0x38) = 0;
  *(undefined4 *)(local_res8 + 0x3c) = 0xffffffff;
  *(undefined4 *)(local_res8 + 0x40) = 0xffffffff;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x48) = uVar2;
  FUN_004b67b0(uVar2,0);
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x50) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

