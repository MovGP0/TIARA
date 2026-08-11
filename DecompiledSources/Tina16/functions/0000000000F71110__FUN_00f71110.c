/* Ghidra address: 00f71110 */
/* Ghidra symbol: FUN_00f71110 */


longlong FUN_00f71110(longlong param_1,char param_2,undefined1 param_3)

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
  FUN_00f6e720(local_res8,0);
  *(undefined1 *)(local_res8 + 0x30) = param_3;
  *(undefined1 *)(local_res8 + 0x124) = 1;
  *(undefined1 *)(local_res8 + 0x128) = 0;
  *(undefined1 *)(local_res8 + 0x129) = 0;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(local_res8 + 0x5c0) = uVar2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

