/* Ghidra address: 0068d2a0 */
/* Ghidra symbol: FUN_0068d2a0 */


void FUN_0068d2a0(longlong *param_1,int param_2,undefined8 *param_3,undefined2 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  bool bVar8;
  longlong local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_40 = 0;
  local_38 = *param_3;
  local_30 = param_3[1];
  if (param_1[0x9f] == 0) {
    (**(code **)(*(longlong *)param_1[0x97] + 0xa8))((longlong *)param_1[0x97],&local_38);
    iVar2 = (**(code **)(*param_1 + 0x298))(param_1);
    if (param_2 < iVar2) {
      uVar3 = FUN_006520b0(param_1,0x824);
      pcVar4 = (code *)FUN_00411550(param_1,0xffc5);
      cVar1 = (*pcVar4)(param_1);
      if (cVar1 == '\0') {
        local_38 = CONCAT44(local_38._4_4_,(int)local_38 + 2);
      }
      else {
        local_30 = CONCAT44(local_30._4_4_,(int)local_30 + -2);
      }
      FUN_00414480(&local_40);
      if (*(byte *)((longlong)param_1 + 0x4cc) < 8) {
        bVar8 = ((int)CONCAT71((int7)((ulonglong)param_1 >> 8),1) <<
                 (*(byte *)((longlong)param_1 + 0x4cc) & 0x1f) & 0x18U) != 0;
      }
      else {
        bVar8 = false;
      }
      if (bVar8) {
        FUN_0068e190(param_1,&local_40,param_2);
      }
      else {
        (**(code **)(*(longlong *)param_1[0x94] + 0x18))
                  ((longlong *)param_1[0x94],&local_40,param_2);
      }
      uVar5 = FUN_005ffa40(param_1[0x97]);
      uVar7 = 0;
      if (local_40 != 0) {
        uVar7 = *(undefined4 *)(local_40 + -4);
      }
      uVar6 = FUN_00416740(local_40);
      thunk_FUN_041a24be(uVar5,uVar6,uVar7,&local_38,uVar3);
    }
  }
  else {
    (*(code *)param_1[0x9f])(param_1[0xa0],param_1,param_2,&local_38,param_4);
  }
  FUN_00414480(&local_40);
  return;
}

