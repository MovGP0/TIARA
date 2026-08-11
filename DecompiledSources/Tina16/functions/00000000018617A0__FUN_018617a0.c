/* Ghidra address: 018617a0 */
/* Ghidra symbol: FUN_018617a0 */


longlong FUN_018617a0(longlong param_1,char param_2)

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
  FUN_01860570(local_res8,0,0);
  *(undefined1 *)(local_res8 + 0x95) = 1;
  uVar2 = FUN_0185c970(&DAT_0185b848,1);
  *(undefined8 *)(local_res8 + 0x80) = uVar2;
  uVar2 = FUN_00410e60(&PTR_FUN_01861010,1);
  *(undefined8 *)(local_res8 + 0xa0) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

