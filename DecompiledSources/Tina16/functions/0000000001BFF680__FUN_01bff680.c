/* Ghidra address: 01bff680 */
/* Ghidra symbol: FUN_01bff680 */


longlong * FUN_01bff680(longlong *param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong *local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar1 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar1 = local_20;
  }
  local_20 = puVar1;
  FUN_0069f9a0(local_res8,0,param_3);
  *(undefined1 *)(local_res8 + 0x98) = 1;
  uVar2 = FUN_01c03420(local_res8);
  (**(code **)(*local_res8 + 0x318))(local_res8,uVar2);
  local_res8[0x94] = 0;
  local_res8[0x93] = 0;
  lVar3 = FUN_005fe0d0(&PTR_FUN_006385a0,1);
  local_res8[0x96] = lVar3;
  FUN_0064b200(lVar3,local_res8);
  *(uint *)(local_res8 + 0x14) = *(uint *)(local_res8 + 0x14) | 0x8000e8;
  FUN_0064cc50(local_res8,0x32);
  FUN_0064cbf0(local_res8,0x96);
  FUN_00659460(local_res8,1);
  *(undefined4 *)((longlong)local_res8 + 0x504) = 1;
  *(undefined4 *)(local_res8 + 0xa1) = 0;
  *(undefined1 *)(local_res8 + 0x95) = 1;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

