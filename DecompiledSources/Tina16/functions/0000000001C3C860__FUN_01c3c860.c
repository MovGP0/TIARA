/* Ghidra address: 01c3c860 */
/* Ghidra symbol: FUN_01c3c860 */


void FUN_01c3c860(longlong param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 uVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60 [2];
  undefined8 *local_50;
  longlong local_48 [4];
  
  local_70 = 0;
  local_60[0] = 0;
  local_68 = 0;
  local_48[3] = 0;
  local_48[2] = 0;
  local_48[1] = 0;
  local_48[0] = 0;
  plVar4 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_00416ba0(local_60,*(undefined8 *)PTR_DAT_020030c8,&DAT_01c3cabc);
  FUN_00416ba0(&local_68,*(undefined8 *)PTR_DAT_02005010,L"\\openfromweb.ini");
  iVar2 = FUN_01c1de60(0,local_60[0],local_68,plVar4);
  if (iVar2 == 1) {
    local_50 = (undefined8 *)(param_1 + 0x920);
    uVar1 = *local_50;
    *local_50 = 0;
    FUN_00410f20(uVar1);
    FUN_01c38530(param_1,*(undefined8 *)(param_1 + 0x6c8));
    FUN_0064de00(*(undefined8 *)(param_1 + 0x720),0);
    (**(code **)(**(longlong **)(param_1 + 0x730) + 0x268))
              (*(longlong **)(param_1 + 0x730),0xffffffff);
    (**(code **)(**(longlong **)(param_1 + 0x890) + 0x268))(*(longlong **)(param_1 + 0x890),0);
    FUN_00414480(local_48);
    iVar2 = (**(code **)(*plVar4 + 0x28))();
    iVar5 = 0;
    if (-1 < iVar2 + -1) {
      do {
        (**(code **)(*plVar4 + 0x18))(plVar4,&local_70,iVar5);
        FUN_00414ad0(param_1 + 0x918,local_70);
        uVar3 = FUN_00440a20(*(undefined8 *)(param_1 + 0x918),1);
        FUN_0064dbe0(*(undefined8 *)(param_1 + 0x7f0),uVar3);
        iVar5 = iVar5 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (local_48[0] == 0) {
      if (*(char *)(*(longlong *)(param_1 + 0x7f0) + 0xa9) == '\0') {
        FUN_0072d730(L"Error loading library!",0xffffffff,0xffffffff);
      }
    }
    else {
      FUN_0072d730(local_48[0],0xffffffff,0xffffffff);
    }
  }
  FUN_00410f20(plVar4);
  FUN_01c38160(param_1);
  FUN_00414560(&local_70,3);
  FUN_00414560(local_48,4);
  return;
}

