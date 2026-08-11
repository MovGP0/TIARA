/* Ghidra address: 00ad03b0 */
/* Ghidra symbol: FUN_00ad03b0 */


longlong FUN_00ad03b0(longlong param_1,char param_2,undefined8 param_3)

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
  uVar2 = FUN_00a74ba0(&DAT_00a6bb20,1);
  *(undefined8 *)(local_res8 + 0x28) = uVar2;
  uVar2 = FUN_00611660(&PTR_FUN_00610c28,1);
  *(undefined8 *)(local_res8 + 0x38) = uVar2;
  *(undefined8 *)(local_res8 + 0x30) = param_3;
  *(undefined1 *)(local_res8 + 0xf1) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

