/* Ghidra address: 01a34800 */
/* Ghidra symbol: FUN_01a34800 */


void FUN_01a34800(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined2 uVar5;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_60 [6];
  ulonglong local_30 [2];
  
  local_78 = 0;
  local_60[0] = 0;
  local_30[0] = 0;
  if (param_3 != 0) {
    *(longlong *)(param_1 + 0x10) = param_3;
  }
  FUN_01995600(*(undefined8 *)(param_1 + 0x10),0,0);
  plVar3 = (longlong *)FUN_01995660(*(undefined8 *)(param_1 + 0x10),0,0);
  while (plVar3 != (longlong *)0x0) {
    uVar2 = FUN_01d03160(plVar3);
    uVar5 = (undefined2)uVar2;
    (**(code **)(*plVar3 + 0x288))(plVar3,local_30);
    cVar1 = FUN_01a344b0(uVar5);
    if (cVar1 == '\0') {
      if (local_30[0] == 0) {
        local_70 = CONCAT44(local_70._4_4_,uVar2) & 0xffffffff0000ffff;
        local_68 = 0;
        FUN_00442f70(&local_78,L"Not allowed component found (no label), component id: %d",&local_70
                     ,0);
        uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,local_78);
        FUN_004134c0(uVar4);
      }
      else {
        local_70 = local_30[0];
        local_68 = 0x11;
        FUN_00442f70(local_60,L"%s is not an allowed component",&local_70,0);
        uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,local_60[0]);
        FUN_004134c0(uVar4);
      }
    }
    uVar2 = uVar2 & 0xffff;
    if (((uVar2 == 200) || (uVar2 == 0xd2)) || (uVar2 == 0xdc)) {
      uVar5 = 9;
    }
    cVar1 = FUN_01a32a70(uVar5,1);
    if (cVar1 == '\0') {
      FUN_01a34530(param_1,plVar3,uVar5,1,0,0);
    }
    FUN_01995800(*(undefined8 *)(param_1 + 0x10),0,0);
    plVar3 = (longlong *)FUN_01995660(*(undefined8 *)(param_1 + 0x10),0);
  }
  FUN_00414480(&local_78);
  FUN_00414480(local_60);
  FUN_00414480(local_30);
  return;
}

