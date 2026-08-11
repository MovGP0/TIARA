/* Ghidra address: 0096db20 */
/* Ghidra symbol: FUN_0096db20 */


longlong * FUN_0096db20(longlong *param_1,char param_2,undefined8 param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong *plVar3;
  longlong *local_res8;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  
  local_20 = auStack_48;
  local_res8 = param_1;
  puVar2 = auStack_48;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_004119e0(param_1,param_2);
    puVar2 = local_20;
  }
  local_20 = puVar2;
  FUN_008f39b0(local_res8,0,param_3,param_4);
  FUN_00414ad0(local_res8 + 7,L"UTF-8");
  plVar3 = (longlong *)FUN_008e6740(&PTR_FUN_008d3548,1);
  local_res8[6] = (longlong)plVar3;
  plVar3[5] = (longlong)local_res8;
  lVar1 = *(longlong *)(*local_res8 + 0x20);
  plVar3[4] = lVar1;
  (**(code **)(*plVar3 + 0x10))(plVar3,CONCAT71((int7)((ulonglong)lVar1 >> 8),2));
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

