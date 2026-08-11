/* Ghidra address: 019f11f0 */
/* Ghidra symbol: FUN_019f11f0 */


bool FUN_019f11f0(undefined8 param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong lVar4;
  int iVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  undefined8 local_res18 [2];
  bool local_2b9;
  longlong local_2b8;
  longlong local_2b0;
  undefined8 local_2a8 [2];
  undefined1 local_293 [17];
  longlong local_282;
  longlong *local_278;
  byte local_168 [21];
  byte local_153 [17];
  longlong local_142;
  char local_139;
  longlong *local_138;
  
  local_2b8 = 0;
  local_2b0 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  local_2b9 = false;
  if (param_2 != (longlong *)0x0) {
    puVar3 = param_4;
    pbVar6 = local_168;
    for (lVar4 = 0x28; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined8 *)pbVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      pbVar6 = pbVar6 + 8;
    }
    iVar5 = 0;
    while ((iVar2 = (**(code **)(*param_2 + 0x28))(param_2), iVar5 < iVar2 && (local_2b9 == false)))
    {
      puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,iVar5);
      puVar7 = local_2a8;
      for (lVar4 = 0x28; lVar4 != 0; lVar4 = lVar4 + -1) {
        *puVar7 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar7 = puVar7 + 1;
      }
      iVar2 = FUN_00414f50(local_168,local_2a8,(ulonglong)local_168[0] + 1);
      if (((iVar2 == 0) &&
          (iVar2 = FUN_00414f50(local_153,local_293,(ulonglong)local_153[0] + 1), iVar2 == 0)) &&
         (cVar1 = FUN_0043e2c0(*(undefined8 *)(local_142 + 9),*(undefined8 *)(local_282 + 9),
                               *(undefined2 *)(local_142 + 0x23)), cVar1 != '\0')) {
        local_2b9 = true;
      }
      else {
        local_2b9 = false;
      }
      if (local_139 != '\0') {
        if (local_2b9 == false) {
          local_2b9 = false;
        }
        else {
          (**(code **)(*local_138 + 0x38))(local_138,&local_2b0);
          lVar4 = local_2b0;
          (**(code **)(*local_278 + 0x38))(local_278,&local_2b8);
          if (lVar4 == local_2b8) {
            local_2b9 = true;
          }
          else if ((lVar4 == 0) || (local_2b8 == 0)) {
            local_2b9 = false;
          }
          else {
            iVar2 = FUN_0043e420(lVar4,local_2b8);
            local_2b9 = iVar2 == 0;
          }
        }
      }
      iVar5 = iVar5 + 1;
    }
    if (local_2b9 == false) {
      (**(code **)(*param_2 + 0x80))(param_2,local_res18[0],param_4);
    }
  }
  FUN_00414560(&local_2b8,2);
  FUN_00414480(local_res18);
  return local_2b9;
}

