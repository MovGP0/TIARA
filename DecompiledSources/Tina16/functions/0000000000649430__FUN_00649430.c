/* Ghidra address: 00649430 */
/* Ghidra symbol: FUN_00649430 */


longlong FUN_00649430(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
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
  FUN_006491c0(local_res8,0,param_3);
  *(undefined1 *)(local_res8 + 0x48) = 1;
  uVar2 = FUN_005fd7d0(&PTR_FUN_005f35d8,1);
  *(undefined8 *)(local_res8 + 0x58) = uVar2;
  uVar3 = FUN_0060f4c0(0,0xffffff);
  FUN_005fda60(uVar2,uVar3);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

