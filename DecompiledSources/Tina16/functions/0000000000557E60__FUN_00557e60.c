/* Ghidra address: 00557e60 */
/* Ghidra symbol: FUN_00557e60 */


undefined8 * FUN_00557e60(longlong *param_1,undefined8 *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  longlong local_30 [2];
  
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_30[0] = 0;
  FUN_00414480(param_2);
  cVar2 = (**(code **)(*param_1 + 0x40))(param_1);
  if (cVar2 == '\0') {
    (**(code **)(*param_1 + 0x10))(param_1,local_40);
    FUN_00416ba0(param_2,L"(basic) procedure ",local_40[0]);
  }
  else {
    cVar2 = (**(code **)(*param_1 + 0x58))(param_1);
    if (cVar2 != '\0') {
      FUN_00416ad0(param_2,L"class ");
    }
    cVar2 = FUN_00557bb0(param_1);
    if (cVar2 == '\0') {
      cVar2 = FUN_00557be0(param_1);
      if (cVar2 == '\0') {
        cVar2 = (**(code **)(*param_1 + 0x20))(param_1);
        if (cVar2 == '\b') {
          (**(code **)(*param_1 + 0x10))(param_1,&local_58);
          FUN_00416cd0(param_2,3,*param_2,L"operator ",local_58);
        }
        else {
          lVar3 = (**(code **)(*param_1 + 0x30))(param_1);
          (**(code **)(*param_1 + 0x10))(param_1,&local_60);
          FUN_00416cd0(param_2,3,*param_2,(&PTR_u_function_01ddafc0)[lVar3 == 0],local_60);
        }
      }
      else {
        (**(code **)(*param_1 + 0x10))(param_1,&local_50);
        FUN_00416cd0(param_2,3,*param_2,L"destructor ",local_50);
      }
    }
    else {
      (**(code **)(*param_1 + 0x10))(param_1,&local_48);
      FUN_00416cd0(param_2,3,*param_2,L"constructor ",local_48);
    }
    (**(code **)(*param_1 + 0x70))(param_1,local_30);
    lVar1 = local_30[0];
    lVar3 = 0;
    if (local_30[0] != 0) {
      lVar3 = *(longlong *)(local_30[0] + -8);
    }
    if (0 < lVar3) {
      FUN_00416ad0(param_2,&DAT_0055829c);
    }
    iVar6 = 0;
    if (lVar1 != 0) {
      iVar6 = (int)*(undefined8 *)(lVar1 + -8);
    }
    iVar5 = 0;
    if (-1 < iVar6 + -1) {
      do {
        if (0 < iVar5) {
          FUN_00416ad0(param_2,&DAT_005582ac);
        }
        plVar4 = *(longlong **)(local_30[0] + (longlong)iVar5 * 8);
        (**(code **)(*plVar4 + -0x60))(plVar4,&local_68);
        FUN_00416ad0(param_2,local_68);
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    lVar3 = 0;
    if (local_30[0] != 0) {
      lVar3 = *(longlong *)(local_30[0] + -8);
    }
    if (0 < lVar3) {
      FUN_00416ad0(param_2,&DAT_005582c0);
    }
    lVar3 = (**(code **)(*param_1 + 0x30))(param_1);
    if (lVar3 != 0) {
      plVar4 = (longlong *)(**(code **)(*param_1 + 0x30))(param_1);
      (**(code **)(*plVar4 + 0x10))(plVar4,&local_70);
      FUN_00416cd0(param_2,3,*param_2,&LAB_005582d0,local_70);
    }
  }
  FUN_00414560(&local_70,7);
  FUN_00419430(local_30,&DAT_00531510);
  return param_2;
}

