/* Ghidra address: 00974730 */
/* Ghidra symbol: FUN_00974730 */


void FUN_00974730(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 local_38 [2];
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  if ((char)param_1[0x14] == '\0') {
    uVar3 = FUN_0044d490(&PTR_FUN_00901a10,1,L"Internal Parser Exception");
    FUN_004134c0(uVar3);
  }
  cVar2 = FUN_008f72e0(L"xmlns",param_2[0x12]);
  if (cVar2 == '\0') {
    lVar1 = param_1[0xf];
    local_38[0] = (**(code **)(*param_2 + 0x88))(param_2,param_2[7]);
    FUN_00597e50(lVar1 + 8,local_38);
  }
  else {
    if ((char)param_1[0x12] != '\0') {
      lVar1 = param_1[0x13];
      uVar4 = *(uint *)(lVar1 + 0x10);
      uVar5 = uVar4 - 1;
      if (uVar4 <= uVar5) {
        FUN_00594f90();
      }
      plVar6 = *(longlong **)(*(longlong *)(lVar1 + 8) + (longlong)(int)uVar5 * 8);
      if (plVar6 == (longlong *)0x0) {
        FUN_0044d490(&PTR_FUN_00901a10,1,L"Internal Parser Exception");
        FUN_004134c0();
      }
      uVar4 = 0;
      if (param_2[0x12] != 0) {
        uVar4 = *(uint *)(param_2[0x12] + -4) >> 1;
      }
      if (uVar4 < 7) {
        (**(code **)(*plVar6 + 0x68))(plVar6,0);
        if (param_2 == (longlong *)0x0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = param_2 + 0x10;
        }
        (**(code **)(*param_1 + 0xb8))(param_1,param_2[7],plVar6,0,param_2[0x13]);
      }
      else {
        FUN_00416430(&local_20,param_2[0x12],7,uVar4);
        (**(code **)(*plVar6 + 0x68))(plVar6,local_20);
        if (param_2 == (longlong *)0x0) {
          plVar6 = (longlong *)0x0;
        }
        else {
          plVar6 = param_2 + 0x10;
        }
        (**(code **)(*param_1 + 0xb8))(param_1,param_2[7],plVar6,local_20,param_2[0x13]);
      }
    }
    if (*(char *)((longlong)param_1 + 0xa1) == '\0') {
      lVar1 = param_1[0xf];
      local_28 = (**(code **)(*param_2 + 0x88))(param_2,param_2[7]);
      FUN_00597e50(lVar1 + 8,&local_28);
    }
  }
  FUN_00414520(&local_20);
  return;
}

