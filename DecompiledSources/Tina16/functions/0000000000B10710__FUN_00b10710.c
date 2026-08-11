/* Ghidra address: 00b10710 */
/* Ghidra symbol: FUN_00b10710 */


longlong FUN_00b10710(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *local_20;
  
  local_20 = auStack_58;
  local_30 = 0;
  local_28 = 0;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_0083ead0(local_res8,0,param_3);
  *(uint *)(local_res8 + 0xa0) = *(uint *)(local_res8 + 0xa0) | 0x80000;
  uVar2 = FUN_00b12a60(&PTR_FUN_00b0fa30,1,local_res8);
  *(undefined8 *)(local_res8 + 0x600) = uVar2;
  plVar3 = (longlong *)FUN_00b139e0(&PTR_FUN_00b104e0,1,local_res8);
  *(longlong **)(local_res8 + 0x5f8) = plVar3;
  FUN_0041ddd0(&local_28,PTR_PTR_02004900);
  (**(code **)(*plVar3 + 0x78))(plVar3,local_28);
  FUN_0041ddd0(&local_30,PTR_PTR_020019d0);
  (**(code **)(**(longlong **)(local_res8 + 0x5f8) + 0x78))
            (*(longlong **)(local_res8 + 0x5f8),local_30);
  FUN_008483e0(local_res8,2);
  FUN_00848a70(local_res8,2);
  FUN_008486b0(local_res8,0);
  FUN_00848570(local_res8,0x96);
  FUN_008485d0(local_res8,0x12);
  FUN_0064cbf0(local_res8,0x132);
  FUN_0064cc50(local_res8,300);
  FUN_00b128a0(local_res8,0x648f);
  *(undefined1 *)(local_res8 + 0x609) = 7;
  FUN_008483b0(local_res8,1);
  *(undefined4 *)(local_res8 + 0x60c) = 8;
  FUN_00414560(&local_30,2);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

