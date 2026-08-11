/* Ghidra address: 01892ed0 */
/* Ghidra symbol: FUN_01892ed0 */


longlong FUN_01892ed0(longlong param_1,char param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
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
  FUN_00660290(local_res8,0,param_3);
  *(undefined4 *)(local_res8 + 0x4ac) = 1;
  *(undefined4 *)(local_res8 + 0x4a8) = 10;
  *(undefined4 *)(local_res8 + 0x49c) = 0;
  *(undefined4 *)(local_res8 + 0x4b0) = 0;
  *(undefined1 *)(local_res8 + 0x4bc) = 0;
  *(uint *)(local_res8 + 0xa0) = *(uint *)(local_res8 + 0xa0) | 0x20000;
  uVar1 = *(undefined4 *)(*(longlong *)PTR_DAT_02005950 + 0x98);
  *(undefined4 *)(local_res8 + 0x4e0) = uVar1;
  *(undefined4 *)(local_res8 + 0x2cc) = uVar1;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

