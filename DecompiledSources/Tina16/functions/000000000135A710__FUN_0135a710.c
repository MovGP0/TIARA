/* Ghidra address: 0135a710 */
/* Ghidra symbol: FUN_0135a710 */


undefined1 FUN_0135a710(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  int iVar1;
  undefined4 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  undefined8 local_res18 [2];
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong local_90;
  undefined1 local_81;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70 [2];
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  longlong *local_50;
  
  local_80 = 0;
  local_78 = 0;
  local_70[0] = 0;
  local_res18[0] = param_3;
  local_98 = param_4;
  local_90 = param_1;
  FUN_00414610(param_3);
  local_81 = 0;
  iVar1 = (**(code **)(**(longlong **)(local_90 + 8) + 0xb0))
                    (*(longlong **)(local_90 + 8),local_res18[0]);
  if ((-1 < iVar1) &&
     (local_50 = (longlong *)
                 (**(code **)(**(longlong **)(local_90 + 8) + 0x30))
                           (*(longlong **)(local_90 + 8),iVar1), local_50 != (longlong *)0x0)) {
    iVar1 = (**(code **)(*local_50 + 0x28))(local_50);
    if (iVar1 < 2) {
      iVar1 = (**(code **)(*local_50 + 0x28))(local_50);
      if (iVar1 == 1) {
        plVar3 = (longlong *)FUN_019ac500(param_2,local_res18[0]);
        (**(code **)(*plVar3 + 0x1f0))(plVar3,0,&local_54,&local_58);
        (**(code **)(*local_50 + 0x18))(local_50,&local_80,0);
        plVar3 = (longlong *)FUN_019ac500(param_2,local_80);
        uVar2 = (**(code **)(*local_50 + 0x30))(local_50,0);
        (**(code **)(*plVar3 + 0x1f0))(plVar3,uVar2,&local_5c,&local_60);
        dVar6 = (double)FUN_0040c760((double)((local_54 - local_5c) * (local_54 - local_5c) +
                                             (local_58 - local_60) * (local_58 - local_60)));
        local_81 = dVar6 <= 8.0;
      }
      else {
        local_81 = 0;
      }
    }
    else {
      plVar3 = (longlong *)FUN_019ac500(param_2,local_res18[0]);
      (**(code **)(*plVar3 + 0x1f0))(plVar3,0,&local_54,&local_58);
      uVar2 = FUN_0135a680(auStack_b8);
      (**(code **)(*local_50 + 0x18))(local_50,local_70,uVar2);
      plVar3 = (longlong *)FUN_019ac500(param_2,local_70[0]);
      uVar2 = (**(code **)(*local_50 + 0x30))(local_50,uVar2);
      (**(code **)(*plVar3 + 0x1f0))(plVar3,uVar2,&local_5c,&local_60);
      dVar6 = (double)FUN_0040c760((double)((local_54 - local_5c) * (local_54 - local_5c) +
                                           (local_58 - local_60) * (local_58 - local_60)));
      iVar1 = (**(code **)(*local_50 + 0x28))(local_50);
      iVar1 = iVar1 + -1;
      iVar5 = 1;
      if (0 < iVar1) {
        do {
          (**(code **)(*local_50 + 0x18))(local_50,&local_78,iVar5);
          plVar4 = (longlong *)FUN_019ac500(param_2,local_78);
          if (plVar4 != (longlong *)0x0) {
            uVar2 = (**(code **)(*local_50 + 0x30))(local_50,iVar5);
            (**(code **)(*plVar4 + 0x1f0))(plVar4,uVar2,&local_5c,&local_60);
            dVar7 = (double)FUN_0040c760((double)((local_54 - local_5c) * (local_54 - local_5c) +
                                                 (local_58 - local_60) * (local_58 - local_60)));
            if (dVar7 < dVar6) {
              plVar3 = plVar4;
              dVar6 = dVar7;
            }
          }
          iVar5 = iVar5 + 1;
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      if ((local_98 != plVar3) || (8.0 < dVar6)) {
        local_81 = 0;
      }
      else {
        local_81 = 1;
      }
    }
  }
  FUN_00414560(&local_80,3);
  FUN_00414480(local_res18);
  return local_81;
}

