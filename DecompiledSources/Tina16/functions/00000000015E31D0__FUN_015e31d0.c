/* Ghidra address: 015e31d0 */
/* Ghidra symbol: FUN_015e31d0 */


longlong FUN_015e31d0(longlong param_1,char param_2,int param_3,undefined2 param_4,
                     undefined2 param_5)

{
  undefined1 *puVar1;
  undefined2 uVar2;
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
  FUN_015e3110(local_res8,0);
  uVar2 = FUN_0040c840((double)param_3 / 8.0);
  *(undefined2 *)(local_res8 + 0x188) = uVar2;
  *(undefined2 *)(local_res8 + 0x1c0) = param_4;
  *(undefined2 *)(local_res8 + 0x1c2) = param_5;
  *(undefined4 *)(local_res8 + 0x1c4) = 10;
  uVar3 = FUN_01594510(&DAT_015e3350);
  *(undefined8 *)(local_res8 + 0x178) = uVar3;
  *(undefined8 *)(local_res8 + 0x10) = 0;
  *(undefined8 *)(local_res8 + 0x180) = 0;
  *(undefined8 *)(local_res8 + 400) = 0;
  *(undefined8 *)(local_res8 + 0x198) = 0;
  *(undefined8 *)(local_res8 + 0x1a0) = 0;
  *(undefined8 *)(local_res8 + 0x1a8) = 0;
  *(undefined8 *)(local_res8 + 0x1b0) = 0;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

