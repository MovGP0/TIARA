/* Ghidra address: 01978680 */
/* Ghidra symbol: FUN_01978680 */


longlong FUN_01978680(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined1 param_5)

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
  FUN_0181a5c0(local_res8,0,param_3);
  *(undefined8 *)(local_res8 + 0x6d8) = param_4;
  *(undefined1 *)(local_res8 + 0x6e0) = param_5;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x708) = uVar2;
  uVar2 = FUN_0197c810(&PTR_FUN_0193fc10,1);
  *(undefined8 *)(local_res8 + 0x718) = uVar2;
  *(undefined1 *)(local_res8 + 0x701) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

