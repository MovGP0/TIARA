/* Ghidra address: 01253190 */
/* Ghidra symbol: FUN_01253190 */


undefined8 FUN_01253190(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  int local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  int *local_30;
  
  local_40[0] = 0;
  local_48 = 0;
  local_50 = 0;
  FUN_00414480(param_1);
  (**(code **)(*param_2 + 0x2d0))(param_2,0,&local_30);
  local_54 = *local_30;
  iVar4 = local_30[1];
  iVar5 = local_30[2];
  if (*(longlong *)PTR_DAT_02001470 != 0) {
    if (local_54 < *(int *)(*(longlong *)PTR_DAT_02001470 + 0x10)) {
      lVar1 = FUN_004aeac0(*(undefined8 *)PTR_DAT_02001470,local_54);
    }
    else {
      lVar1 = 0;
    }
    if ((lVar1 == 0) || (*(int *)(*(longlong *)(lVar1 + 0x10) + 0x10) <= iVar4)) {
      lVar2 = 0;
    }
    else {
      lVar2 = FUN_004aeac0(*(undefined8 *)(lVar1 + 0x10),iVar4);
    }
    if ((lVar2 == 0) || (*(int *)(*(longlong *)(lVar2 + 0x18) + 0x10) <= iVar5)) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_004aeac0(*(undefined8 *)(lVar2 + 0x18),iVar5);
    }
    if (((lVar1 == 0) || (lVar2 == 0)) || (lVar3 == 0)) {
      local_54 = 0;
      iVar4 = 0;
      iVar5 = 0;
    }
    FUN_0043f750(local_40,local_54);
    FUN_0043f750(&local_48,iVar4);
    FUN_0043f750(&local_50,iVar5);
    FUN_00416cd0(param_1,7,&DAT_01253348,local_40[0],&DAT_0125335c,L"group",local_48,&DAT_0125335c,
                 local_50);
  }
  FUN_00414560(&local_50,3);
  return param_1;
}

