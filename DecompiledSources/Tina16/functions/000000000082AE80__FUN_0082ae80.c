/* Ghidra address: 0082ae80 */
/* Ghidra symbol: FUN_0082ae80 */


longlong FUN_0082ae80(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  longlong lVar2;
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
  lVar2 = FUN_008276e0(&DAT_00826f30,1);
  *(longlong *)(local_res8 + 0x520) = lVar2;
  *(longlong *)(lVar2 + 0x48) = local_res8;
  *(code **)(lVar2 + 0x40) = FUN_0082bab0;
  FUN_00687cb0(local_res8,0,param_3);
  uVar3 = FUN_005fe0d0(&PTR_FUN_005f54e0,1);
  *(undefined8 *)(local_res8 + 0x518) = uVar3;
  *(undefined1 *)(local_res8 + 0x528) = 0;
  *(undefined1 *)(local_res8 + 0x529) = 0;
  *(undefined1 *)(local_res8 + 0x52a) = 0;
  *(undefined4 *)(local_res8 + 0x52c) = 4;
  *(undefined4 *)(local_res8 + 0x530) = 0xffffffff;
  *(uint *)(local_res8 + 0xa0) = *(uint *)(local_res8 + 0xa0) | 0x404000;
  FUN_00659460(local_res8,1);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

