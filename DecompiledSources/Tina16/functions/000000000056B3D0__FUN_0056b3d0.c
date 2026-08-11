/* Ghidra address: 0056b3d0 */
/* Ghidra symbol: FUN_0056b3d0 */


/* WARNING: Removing unreachable block (ram,0x0056b473) */

longlong FUN_0056b3d0(longlong param_1,char param_2,byte param_3,undefined4 param_4,
                     undefined8 param_5)

{
  undefined1 *puVar1;
  undefined8 uVar2;
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
  FUN_0055eb10(local_res8,0,param_4,param_5);
  if ((param_3 & 1) != 0) {
    uVar2 = FUN_0044d710(&PTR_FUN_00435f50,1,PTR_PTR_02005920);
    FUN_004134c0(uVar2);
  }
  *(byte *)(local_res8 + 0x58) = param_3;
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

