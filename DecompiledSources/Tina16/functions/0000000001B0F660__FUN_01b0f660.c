/* Ghidra address: 01b0f660 */
/* Ghidra symbol: FUN_01b0f660 */


longlong FUN_01b0f660(longlong param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
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
  *(undefined8 *)(local_res8 + 0xa8) = 0x4072c26666666666;
  *(double *)(local_res8 + 0xa0) = *(double *)(param_3 + 0x6a0) + 273.15;
  *(undefined8 *)(local_res8 + 0x270) = *(undefined8 *)(param_3 + 0x430);
  *(uint *)(local_res8 + 0x130) = (uint)*(byte *)(param_3 + 0x886);
  *(undefined8 *)(local_res8 + 0x260) = *(undefined8 *)(param_3 + 1000);
  *(undefined8 *)(local_res8 + 600) = *(undefined8 *)(param_3 + 0x3c8);
  *(undefined8 *)(local_res8 + 0x240) = *(undefined8 *)(param_3 + 0x3e0);
  *(undefined8 *)(local_res8 + 0x268) = *(undefined8 *)(param_3 + 0x3d0);
  *(undefined8 *)(local_res8 + 0x288) = *(undefined8 *)(param_3 + 0x3f8);
  *(uint *)(local_res8 + 0x210) = (uint)(*(double *)(param_3 + 0x6e0) != 0.0);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

