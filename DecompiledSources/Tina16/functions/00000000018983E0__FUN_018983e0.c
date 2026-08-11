/* Ghidra address: 018983e0 */
/* Ghidra symbol: FUN_018983e0 */


longlong FUN_018983e0(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
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
  FUN_006e0ec0(local_res8,0,param_3);
  uVar3 = FUN_00410e60(&DAT_01894cd8,1);
  *(undefined8 *)(local_res8 + 0x6f8) = uVar3;
  *(undefined4 *)(local_res8 + 0x728) = 0xffffffff;
  uVar2 = *(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98);
  *(undefined4 *)(local_res8 + 0x748) = uVar2;
  uVar2 = thunk_FUN_03f3ed25(0x10,uVar2,0x60);
  *(undefined4 *)(local_res8 + 0x730) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

