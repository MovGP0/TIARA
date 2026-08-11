/* Ghidra address: 019a0f30 */
/* Ghidra symbol: FUN_019a0f30 */


longlong FUN_019a0f30(longlong param_1,undefined8 param_2,char *param_3)

{
  longlong lVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  undefined8 local_res10 [3];
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0;
  local_38 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  local_40 = 0;
  iVar7 = *(int *)(param_1 + 0x10);
  iVar6 = 0;
  if (-1 < iVar7 + -1) {
    do {
      plVar5 = (longlong *)FUN_00b94e60(param_1,iVar6);
      if ((*param_3 == '\0') && (cVar2 = FUN_0198a580(plVar5), cVar2 == '\x04')) {
        sVar3 = (**(code **)(*plVar5 + 0xf8))(plVar5);
        if ((sVar3 == 0x39) &&
           (((char)plVar5[0x34] == '\x01' && (*(longlong *)(plVar5[0x35] + 8) != 0)))) {
          local_40 = FUN_019a0f30(*(undefined8 *)(plVar5[0x35] + 8),local_res10[0],param_3);
        }
        if (((sVar3 == 0x39) && ((char)plVar5[0x34] != '\x01')) &&
           (lVar1 = plVar5[0x35], *(char *)(lVar1 + 0x70) == '\x03')) {
          FUN_0043e130(&local_30,*(undefined8 *)(lVar1 + 0x38));
          FUN_0043e130(&local_38,local_res10[0]);
          iVar4 = FUN_00416db0(local_30,local_38);
          if (iVar4 == 0) {
            *param_3 = '\x01';
            local_40 = lVar1;
          }
        }
      }
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  FUN_00414560(&local_38,2);
  FUN_00414480(local_res10);
  return local_40;
}

