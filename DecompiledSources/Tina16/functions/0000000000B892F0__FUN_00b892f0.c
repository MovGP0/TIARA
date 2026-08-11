/* Ghidra address: 00b892f0 */
/* Ghidra symbol: FUN_00b892f0 */


longlong FUN_00b892f0(longlong param_1,char param_2)

{
  longlong lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  longlong local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar2 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar2 = local_20;
  }
  local_20 = puVar2;
  FUN_00410e60(local_res8,0);
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 8) = uVar3;
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x10) = uVar3;
  *(undefined1 *)(local_res8 + 0x2d) = 1;
  *(undefined1 *)(local_res8 + 0x2e) = 0;
  *(undefined1 *)(local_res8 + 0x2c) = 0;
  lVar1 = *(longlong *)PTR_DAT_02005950;
  *(longlong *)(lVar1 + 0x148) = local_res8;
  *(code **)(lVar1 + 0x140) = FUN_00b892a0;
  uVar3 = FUN_00b0cc70(&PTR_FUN_00b0c098,1);
  *(undefined8 *)(local_res8 + 0x18) = uVar3;
  uVar3 = FUN_00b0cc70(&PTR_FUN_00b0c098,1);
  *(undefined8 *)(local_res8 + 0x20) = uVar3;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

