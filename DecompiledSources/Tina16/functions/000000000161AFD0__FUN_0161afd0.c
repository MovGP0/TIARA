/* Ghidra address: 0161afd0 */
/* Ghidra symbol: FUN_0161afd0 */


longlong FUN_0161afd0(longlong param_1,char param_2,longlong param_3)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  int iVar3;
  longlong local_res8;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_28;
  int local_1c;
  
  local_40 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 8) = uVar2;
  *(int *)(local_res8 + 0x18) = DAT_0210f818;
  DAT_0210f818 = DAT_0210f818 + 1;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(local_res8 + 0x10) = uVar2;
  if (param_3 != 0) {
    iVar3 = *(int *)(param_3 + 0x10);
    local_1c = 0;
    if (-1 < iVar3 + -1) {
      do {
        local_28 = FUN_004aeac0(param_3,local_1c);
        uVar2 = FUN_0161adb0(local_28);
        FUN_004ae7e0(*(undefined8 *)(local_res8 + 8),uVar2);
        local_1c = local_1c + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

