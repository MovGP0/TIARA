/* Ghidra address: 00aab170 */
/* Ghidra symbol: FUN_00aab170 */


longlong FUN_00aab170(longlong param_1,char param_2,undefined8 param_3,longlong param_4)

{
  undefined1 *puVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  int iVar5;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  int local_1c;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00610ca0(local_res8,0);
  *(undefined1 *)(local_res8 + 0x58) = *(undefined1 *)(param_4 + 0x58);
  *(undefined1 *)(local_res8 + 0x59) = *(undefined1 *)(param_4 + 0x59);
  *(undefined1 *)(local_res8 + 0x5a) = *(undefined1 *)(param_4 + 0x5a);
  *(undefined1 *)(local_res8 + 0x5b) = *(undefined1 *)(param_4 + 0x5b);
  iVar5 = *(int *)(param_4 + 0x10);
  local_1c = 0;
  if (-1 < iVar5 + -1) {
    do {
      lVar2 = FUN_00aab7d0(param_4,local_1c);
      if (lVar2 == 0) {
        FUN_00aab2c0(local_res8,0);
      }
      else {
        plVar3 = (longlong *)FUN_00aab7d0(param_4,local_1c);
        uVar4 = (**(code **)(*plVar3 + 0x18))(plVar3,param_3);
        FUN_00aab2c0(local_res8,uVar4);
      }
      local_1c = local_1c + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

