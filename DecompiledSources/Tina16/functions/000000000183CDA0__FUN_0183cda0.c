/* Ghidra address: 0183cda0 */
/* Ghidra symbol: FUN_0183cda0 */


void FUN_0183cda0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  int local_58;
  int local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40 [2];
  undefined8 local_30 [2];
  
  local_50 = 0;
  local_48 = 0;
  local_40[0] = 0;
  local_30[0] = 0;
  local_70 = param_2;
  local_68 = param_4;
  iVar2 = FUN_0181e3e0(param_2);
  iVar3 = iVar2 + -1;
  local_58 = 0;
  local_54 = iVar3;
  if (-1 < iVar2 + -2) {
    do {
      uVar4 = FUN_0181e3c0(local_70,local_58);
      local_60 = FUN_01838880(param_1,uVar4,param_3,0);
      if ((*(char *)(local_60 + 0x48) != '\x05') && (*(char *)(local_60 + 0x48) != '\a')) {
        FUN_00410f20(local_60);
        uVar4 = FUN_0044d490(&PTR_FUN_004334c0,1,*(undefined8 *)PTR_DAT_02003288);
        FUN_004134c0(uVar4);
      }
      FUN_0183cca0(auStack_a8,local_40);
      FUN_00414b50(local_30,local_40[0]);
      local_88 = *(undefined8 *)(local_60 + 0x50);
      uVar4 = FUN_01847460(&DAT_01843700,1,local_30[0],*(undefined1 *)(local_60 + 0x48));
      FUN_0184caa0(param_3,local_30[0],uVar4);
      FUN_01836fd0(param_1,&local_48,local_70);
      local_88 = local_48;
      lVar5 = FUN_0184f010(&PTR_FUN_01842ce8,1,param_3);
      *(undefined8 *)(lVar5 + 0x30) = uVar4;
      *(longlong *)(lVar5 + 0x28) = local_60;
      FUN_01847420(local_68,lVar5);
      (**(code **)(**(longlong **)(param_1 + 0x60) + 0x80))
                (*(longlong **)(param_1 + 0x60),local_30[0],lVar5);
      local_58 = local_58 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar2 = FUN_0181e3e0(local_70);
  uVar4 = FUN_0181e3c0(local_70,iVar2 + -1);
  FUN_0183d1c0(param_1,uVar4,param_3,local_68);
  iVar2 = local_54;
  if (-1 < local_54 + -1) {
    do {
      plVar1 = *(longlong **)(param_1 + 0x60);
      iVar3 = (**(code **)(*plVar1 + 0x28))(plVar1);
      (**(code **)(*plVar1 + 0x98))(plVar1,iVar3 + -1);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_01836fd0(param_1,&local_50,local_70);
  FUN_0184ee20(*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x50),local_50);
  FUN_00414560(&local_50,3);
  FUN_00414480(local_30);
  return;
}

