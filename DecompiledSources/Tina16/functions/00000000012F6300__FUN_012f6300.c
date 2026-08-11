/* Ghidra address: 012f6300 */
/* Ghidra symbol: FUN_012f6300 */


void FUN_012f6300(longlong param_1,undefined8 param_2,longlong param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  if (param_3 != 0) {
    *(undefined1 *)(param_1 + 0xabb) = 1;
    *(undefined1 *)(param_1 + 0xabb) = 0;
    uVar3 = FUN_006dd6f0(param_3);
    lVar5 = FUN_006df500(*(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x550),uVar3);
    if ((*(uint *)(*(longlong *)(lVar5 + 0x18) + 4) & 0x20) == 0x20) {
      FUN_01303af0(param_1,param_3,0);
      FUN_01304bb0(param_1,param_3);
      FUN_013056e0(param_1,1,param_3);
      iVar4 = FUN_006dd6f0(param_3);
      uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar4 + -1);
      uVar3 = FUN_012e57a0(uVar6);
      (**(code **)(**(longlong **)(param_1 + 0x8a0) + 0x268))(*(longlong **)(param_1 + 0x8a0),uVar3)
      ;
      iVar4 = FUN_006dd6f0(param_3);
      uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar4 + -1);
      uVar3 = FUN_012e57c0(uVar6);
      (**(code **)(**(longlong **)(param_1 + 0xa48) + 0x268))(*(longlong **)(param_1 + 0xa48),uVar3)
      ;
      iVar4 = FUN_006dd6f0(param_3);
      uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar4 + -1);
      uVar3 = FUN_012e57e0(uVar6);
      (**(code **)(**(longlong **)(param_1 + 0xa50) + 0x268))(*(longlong **)(param_1 + 0xa50),uVar3)
      ;
      iVar4 = FUN_006dd6f0(param_3);
      uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar4 + -1);
      uVar3 = FUN_012e5800(uVar6);
      (**(code **)(**(longlong **)(param_1 + 0xa58) + 0x268))(*(longlong **)(param_1 + 0xa58),uVar3)
      ;
      iVar4 = FUN_006dd6f0(param_3);
      uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar4 + -1);
      uVar3 = FUN_012e5820(uVar6);
      (**(code **)(**(longlong **)(param_1 + 0xa60) + 0x268))(*(longlong **)(param_1 + 0xa60),uVar3)
      ;
      iVar4 = FUN_006dd6f0(param_3);
      uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar4 + -1);
      uVar3 = FUN_012e53a0(uVar6);
      (**(code **)(**(longlong **)(param_1 + 0xa88) + 0x268))(*(longlong **)(param_1 + 0xa88),uVar3)
      ;
      iVar4 = FUN_006dd6f0(param_3);
      uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar4 + -1);
      uVar6 = FUN_012e5730(uVar6);
      FUN_013065e0(param_1,local_30,uVar6);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x858),local_30[0]);
      iVar4 = FUN_006dd6f0(param_3);
      uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar4 + -1);
      uVar6 = FUN_012e5750(uVar6);
      FUN_013065e0(param_1,&local_38,uVar6);
      FUN_0064de00(*(undefined8 *)(param_1 + 0x860),local_38);
      plVar1 = *(longlong **)(param_1 + 0x830);
      iVar4 = FUN_006dd6f0(param_3);
      uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar4 + -1);
      uVar3 = FUN_012e5880(uVar6);
      FUN_0043f750(&local_40,uVar3);
      uVar3 = (**(code **)(*(longlong *)plVar1[0x9e] + 0xb0))((longlong *)plVar1[0x9e],local_40);
      (**(code **)(*plVar1 + 0x268))(plVar1,uVar3);
      plVar1 = *(longlong **)(param_1 + 0x830);
      iVar4 = FUN_006dd6f0(param_3);
      uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar4 + -1);
      uVar3 = FUN_012e5880(uVar6);
      FUN_0043f750(&local_48,uVar3);
      uVar3 = (**(code **)(*(longlong *)plVar1[0x9e] + 0xb0))((longlong *)plVar1[0x9e],local_48);
      (**(code **)(*plVar1 + 0x268))(plVar1,uVar3);
      iVar4 = FUN_006dd6f0(param_3);
      uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar4 + -1);
      cVar2 = FUN_012e5840(uVar6);
      if (cVar2 == '\0') {
        (**(code **)(**(longlong **)(param_1 + 0x900) + 0x268))(*(longlong **)(param_1 + 0x900),1);
      }
      else {
        (**(code **)(**(longlong **)(param_1 + 0x8f8) + 0x268))(*(longlong **)(param_1 + 0x8f8),1);
      }
      iVar4 = FUN_006dd6f0(param_3);
      uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar4 + -1);
      iVar4 = FUN_012e5860(uVar6);
      if (iVar4 == 0) {
        (**(code **)(**(longlong **)(param_1 + 0x800) + 0x268))(*(longlong **)(param_1 + 0x800),1);
      }
      else {
        iVar4 = FUN_006dd6f0(param_3);
        uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar4 + -1);
        iVar4 = FUN_012e5860(uVar6);
        if (iVar4 == 1) {
          (**(code **)(**(longlong **)(param_1 + 0x808) + 0x268))(*(longlong **)(param_1 + 0x808),1)
          ;
        }
        else {
          iVar4 = FUN_006dd6f0(param_3);
          uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar4 + -1);
          iVar4 = FUN_012e5860(uVar6);
          if (iVar4 == 2) {
            (**(code **)(**(longlong **)(param_1 + 0x810) + 0x268))
                      (*(longlong **)(param_1 + 0x810),1);
          }
          else {
            iVar4 = FUN_006dd6f0(param_3);
            uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar4 + -1);
            iVar4 = FUN_012e5860(uVar6);
            if (iVar4 == 3) {
              (**(code **)(**(longlong **)(param_1 + 0xa80) + 0x268))
                        (*(longlong **)(param_1 + 0xa80),1);
            }
          }
        }
      }
      iVar4 = FUN_006dd6f0(param_3);
      uVar6 = FUN_004aeac0(*(undefined8 *)(param_1 + 0xaf8),iVar4 + -1);
      iVar4 = FUN_012e6020(uVar6,0);
      if (iVar4 == 0) {
        iVar4 = FUN_006dd6f0(param_3);
        FUN_013060b0(param_1,0,iVar4 + -1,0);
      }
      FUN_01306720(param_1);
    }
  }
  FUN_00414560(&local_48,4);
  FUN_00414480(local_20);
  return;
}

