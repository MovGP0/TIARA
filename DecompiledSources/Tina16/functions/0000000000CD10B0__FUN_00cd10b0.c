/* Ghidra address: 00cd10b0 */
/* Ghidra symbol: FUN_00cd10b0 */


void FUN_00cd10b0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong *local_28;
  undefined8 local_20 [2];
  
  local_50 = 0;
  local_58 = 0;
  local_60 = 0;
  local_68 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_20[0] = 0;
  local_28 = (longlong *)0x0;
  lVar4 = (**(code **)PTR_DAT_02004da8)(*(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0x48));
  *(longlong *)(param_1 + 0x18) = lVar4;
  if (lVar4 == 0) {
    FUN_0041ddd0(&local_30,PTR_PTR_02001168);
    uVar5 = FUN_0086dfd0(&PTR_FUN_00cca788,1,local_30);
    FUN_004134c0(uVar5);
  }
  iVar2 = FUN_00ca5350(*(undefined8 *)(param_1 + 0x18),param_1);
  if (iVar2 < 1) {
    FUN_0041ddd0(&local_38,PTR_PTR_02004cf0);
    FUN_00c99460(&PTR_FUN_00ccb208,*(undefined8 *)(param_1 + 0x18),iVar2,local_38);
  }
  iVar2 = (**(code **)PTR_DAT_02001640)(*(undefined8 *)(param_1 + 0x18),param_2);
  if (iVar2 < 1) {
    FUN_0041ddd0(&local_40,PTR_PTR_02004ce8);
    FUN_00c99460(&PTR_FUN_00ccb0c8,*(undefined8 *)(param_1 + 0x18),iVar2,local_40);
  }
  iVar2 = (**(code **)PTR_DAT_02004e48)(*(undefined8 *)(param_1 + 0x18));
  if (iVar2 < 1) {
    FUN_0041ddd0(&local_48,PTR_PTR_02004da0);
    FUN_00c99460(&PTR_FUN_00ccb350,*(undefined8 *)(param_1 + 0x18),iVar2,local_48);
  }
  uVar5 = FUN_0041b800(&local_28);
  cVar1 = FUN_00452370(*(undefined8 *)(param_1 + 8),&DAT_00cd143c,uVar5);
  if (cVar1 != '\0') {
    plVar6 = (longlong *)(**(code **)(*local_28 + 0x30))(local_28);
    if (plVar6 != (longlong *)0x0) {
      uVar5 = FUN_00cd1ae0(param_1);
      FUN_00cd3790(uVar5,&local_50);
      uVar5 = FUN_00cd1ae0(param_1);
      FUN_00cd3740(uVar5,&local_58);
      uVar5 = FUN_00cd1ae0(param_1);
      uVar3 = FUN_00cd37d0(uVar5);
      FUN_0043f750(&local_60,uVar3);
      uVar5 = FUN_00cd1ae0(param_1);
      FUN_00cd3810(uVar5,&local_68);
      FUN_00416cd0(local_20,0xc,L"Cipher: name = ",local_50,&DAT_00cd1484,L"description = ",local_58
                   ,&DAT_00cd1484,L"bits = ",local_60,&DAT_00cd1484,L"version = ",local_68,
                   &DAT_00cd1484);
      (**(code **)(*plVar6 + 0x238))(plVar6,local_20[0]);
    }
    FUN_0041b800(&local_28);
  }
  FUN_00414560(&local_68,8);
  FUN_0041b800(&local_28);
  FUN_00414480(local_20);
  return;
}

