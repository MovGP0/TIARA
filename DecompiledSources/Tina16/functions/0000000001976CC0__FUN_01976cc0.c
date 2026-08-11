/* Ghidra address: 01976cc0 */
/* Ghidra symbol: FUN_01976cc0 */


void FUN_01976cc0(longlong param_1,longlong param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  int iVar7;
  longlong local_res10 [3];
  undefined8 local_30;
  
  local_30 = 0;
  local_res10[0] = param_2;
  FUN_0041b910(param_2);
  lVar4 = *(longlong *)(param_1 + 0x178);
  if (lVar4 == 0) {
    if (local_res10[0] != 0) {
      FUN_00410ae0(*param_3,&local_30);
      iVar2 = FUN_00416db0(local_30,L"TfrxReportEditor");
      if (iVar2 == 0) {
        lVar4 = FUN_01951400(param_1);
        iVar2 = *(int *)(lVar4 + 0x10);
        iVar7 = 0;
        if (-1 < iVar2 + -1) {
          do {
            plVar5 = (longlong *)FUN_004aeac0(lVar4,iVar7);
            cVar1 = FUN_004113d0(plVar5,&PTR_FUN_0191eb48);
            if (cVar1 != '\0') {
              (**(code **)(*plVar5 + 0x1b0))(plVar5);
            }
            iVar7 = iVar7 + 1;
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
        }
        uVar6 = (**(code **)(DAT_02110700 + -0x30))(DAT_02110700);
        *(undefined8 *)(param_1 + 0x178) = uVar6;
        FUN_01978680(uVar6,0xff,0,param_1,0);
        (**(code **)(**(longlong **)(param_1 + 0x178) + 0x2d0))(*(longlong **)(param_1 + 0x178));
      }
    }
  }
  else {
    pcVar3 = (code *)FUN_00411550(lVar4,0xffac);
    (*pcVar3)(lVar4);
  }
  FUN_00414480(&local_30);
  FUN_0041b800(local_res10);
  return;
}

