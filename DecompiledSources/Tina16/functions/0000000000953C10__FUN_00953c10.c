/* Ghidra address: 00953c10 */
/* Ghidra symbol: FUN_00953c10 */


longlong * FUN_00953c10(longlong *param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  char cVar2;
  undefined8 uVar3;
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
  cVar2 = FUN_008ff6c0(param_4);
  if (cVar2 == '\0') {
    uVar3 = FUN_0044d490(&PTR_FUN_00900fb8,1,L"Invalid character error.");
    FUN_004134c0(uVar3);
  }
  FUN_0094c4e0(local_res8,0,param_3);
  (**(code **)(*local_res8 + 0xe0))(local_res8,1);
  FUN_00414b90(local_res8 + 0x10,param_4);
  FUN_00414520(local_res8 + 0xb);
  *(undefined2 *)(local_res8 + 0xf) = 0x2fa;
  if (param_2 != '\0') {
    local_res8 = (longlong *)FUN_00411a20(local_res8);
  }
  return local_res8;
}

