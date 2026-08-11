/* Ghidra address: 017bbb90 */
/* Ghidra symbol: FUN_017bbb90 */


longlong FUN_017bbb90(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4,
                     undefined8 param_5)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  longlong *plVar3;
  int iVar4;
  longlong local_res8;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_68;
  local_res8 = param_1;
  puVar1 = auStack_68;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  local_48 = param_5;
  FUN_017bb430(local_res8,0,param_3,param_4);
  if (*(longlong *)(local_res8 + 0x18) != 0) {
    uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    *(undefined8 *)(local_res8 + 0x40) = uVar2;
    FUN_004aef40(uVar2,*(undefined4 *)(*(longlong *)(local_res8 + 0x18) + 0x10));
    iVar4 = *(int *)(*(longlong *)(local_res8 + 0x18) + 0x10);
    local_1c = 0;
    if (-1 < iVar4 + -1) {
      do {
        plVar3 = (longlong *)FUN_004aeac0(*(undefined8 *)(local_res8 + 0x18),local_1c);
        uVar2 = (**(code **)(*plVar3 + 0x170))(plVar3,4);
        FUN_004ae7e0(*(undefined8 *)(local_res8 + 0x40),uVar2);
        local_1c = local_1c + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
    *(undefined8 *)(local_res8 + 0x48) = uVar2;
    FUN_004aef40(uVar2,*(undefined4 *)(*(longlong *)(local_res8 + 0x18) + 0x10));
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

