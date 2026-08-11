/* Ghidra address: 00552070 */
/* Ghidra symbol: FUN_00552070 */


undefined8
FUN_00552070(undefined8 param_1,char param_2,undefined8 param_3,undefined8 param_4,longlong *param_5
            )

{
  undefined1 *puVar1;
  char cVar2;
  longlong lVar3;
  uint uVar4;
  undefined8 local_res8;
  undefined1 auStack_68 [32];
  longlong *local_48;
  undefined1 *local_30;
  undefined4 local_1c;
  
  local_30 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  local_48 = param_5;
  FUN_00546070(local_res8,0,param_3,param_4);
  cVar2 = FUN_005521f0(local_res8);
  if (cVar2 == '\0') {
    lVar3 = FUN_00552420(local_res8);
    *param_5 = lVar3;
    *param_5 = *param_5 + 1;
  }
  else {
    lVar3 = FUN_00552420(local_res8);
    *param_5 = lVar3 + 10;
    *param_5 = *param_5 + 1;
    lVar3 = FUN_00552420(local_res8);
    local_1c = 1;
    if (*(byte *)(lVar3 + 10) != 0) {
      uVar4 = (uint)*(byte *)(lVar3 + 10);
      do {
        lVar3 = FUN_005880f0(*param_5);
        *param_5 = lVar3;
        *param_5 = *param_5 + (ulonglong)*(ushort *)*param_5;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

