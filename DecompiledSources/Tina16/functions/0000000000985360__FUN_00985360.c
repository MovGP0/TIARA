/* Ghidra address: 00985360 */
/* Ghidra symbol: FUN_00985360 */


longlong FUN_00985360(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
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
  FUN_00982c30(local_res8,0,param_3);
  uVar2 = FUN_009806b0(&PTR_FUN_00921d88,1,local_res8);
  *(undefined8 *)(local_res8 + 0x88) = uVar2;
  plVar3 = (longlong *)FUN_00977f90(&PTR_FUN_00923760,1,local_res8);
  *(longlong **)(local_res8 + 0x98) = plVar3;
  (**(code **)(*plVar3 + 0xa0))(plVar3,1);
  lVar4 = FUN_00973570(&PTR_FUN_009224b8,1,local_res8);
  *(longlong *)(local_res8 + 0xa8) = lVar4;
  *(undefined8 *)(lVar4 + 0x80) = *(undefined8 *)(local_res8 + 0x98);
  (**(code **)(**(longlong **)(local_res8 + 0x88) + 0x98))
            (*(longlong **)(local_res8 + 0x88),*(undefined8 *)(local_res8 + 0x78));
  lVar4 = *(longlong *)(local_res8 + 0x88);
  *(undefined1 *)(lVar4 + 0x98) = 1;
  *(undefined8 *)(lVar4 + 0x80) = *(undefined8 *)(local_res8 + 0x98);
  *(undefined4 *)(local_res8 + 0x90) = 0x1000;
  *(undefined1 *)(local_res8 + 0xa0) = 0;
  *(undefined1 *)(local_res8 + 0xb0) = 2;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

