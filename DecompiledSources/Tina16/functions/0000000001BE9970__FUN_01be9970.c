/* Ghidra address: 01be9970 */
/* Ghidra symbol: FUN_01be9970 */


longlong * FUN_01be9970(longlong *param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *local_res8;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined1 local_30 [16];
  undefined1 *local_20;
  
  local_20 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_01c03f70(local_res8,0,param_3);
  *(uint *)(local_res8 + 0x14) = *(uint *)(local_res8 + 0x14) & 0xfffffffd;
  local_48 = 0;
  FUN_004238d0(local_30,2,0,10);
  FUN_01c067b0(local_res8,local_30);
  FUN_01c06820(local_res8,10);
  cVar2 = FUN_004113d0(param_3,&PTR_FUN_01bdc350);
  if (cVar2 != '\0') {
    local_res8[0x6d] = param_3;
  }
  uVar3 = (**(code **)(*local_res8 + 0x1a0))(local_res8,0xf);
  *(undefined4 *)((longlong)local_res8 + 900) = uVar3;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

