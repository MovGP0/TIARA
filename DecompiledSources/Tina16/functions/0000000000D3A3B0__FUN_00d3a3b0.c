/* Ghidra address: 00d3a3b0 */
/* Ghidra symbol: FUN_00d3a3b0 */


longlong FUN_00d3a3b0(longlong param_1,char param_2,longlong param_3,undefined4 param_4,
                     undefined8 param_5)

{
  undefined1 *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong local_res8;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  longlong local_28;
  int local_20;
  int local_1c;
  
  local_40 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_40;
  }
  local_40 = puVar1;
  *(undefined8 *)(local_res8 + 0x18) = param_5;
  *(undefined8 *)(local_res8 + 0x20) = *(undefined8 *)(param_3 + 0x18);
  *(longlong *)(local_res8 + 0x28) = param_3;
  *(undefined4 *)(local_res8 + 8) = param_4;
  *(undefined8 *)(local_res8 + 0x10) = 0;
  local_28 = FUN_00d3a9f0(local_res8);
  if (local_28 != 0) {
    local_20 = -1;
    iVar2 = FUN_007e2ef0();
    local_1c = 0;
    if (-1 < iVar2 + -1) {
      do {
        lVar3 = FUN_007e2f10(local_28,local_1c);
        if (*(char *)(lVar3 + 0x86) != '\0') {
          local_20 = local_20 + 1;
        }
        if (*(int *)(local_res8 + 8) == local_20) {
          uVar4 = FUN_007e2f10(local_28,local_1c);
          *(undefined8 *)(local_res8 + 0x10) = uVar4;
          break;
        }
        local_1c = local_1c + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

