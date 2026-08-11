/* Ghidra address: 0094c870 */
/* Ghidra symbol: FUN_0094c870 */


void FUN_0094c870(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  bool bVar8;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined1 local_30;
  
  local_50 = 0;
  local_58 = 0;
  if (param_2 != (longlong *)0x0) {
    plVar6 = param_2;
    bVar1 = (**(code **)(*param_2 + 0x168))(param_2);
    if (bVar1 < 0x10) {
      bVar8 = ((ushort)((int)CONCAT62((int6)((ulonglong)plVar6 >> 0x10),1) << (bVar1 & 0x1f)) &
              *(ushort *)(param_1 + 0xf)) != 0;
    }
    else {
      bVar8 = false;
    }
    if (!bVar8) {
      FUN_00410ae0(*param_2,&local_50);
      local_48 = local_50;
      local_40 = 0x11;
      FUN_00410ae0(*param_1,&local_58);
      local_38 = local_58;
      local_30 = 0x11;
      uVar4 = FUN_0044d530(&PTR_FUN_00900d18,1,
                           L"Nodes of type %s are not allowed as children of nodes of type %s",
                           &local_48,1);
      FUN_004134c0(uVar4);
    }
    cVar2 = FUN_004113d0(param_2,&PTR_FUN_0090d520);
    if (cVar2 != '\0') {
      puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x110))(param_2);
      iVar3 = (**(code **)*puVar5)();
      iVar7 = 0;
      if (-1 < iVar3 + -1) {
        do {
          plVar6 = (longlong *)(**(code **)(*param_2 + 0x110))(param_2);
          uVar4 = (**(code **)(*plVar6 + 0x10))(plVar6,iVar7);
          (**(code **)(*param_1 + 0xf0))(param_1,uVar4);
          iVar7 = iVar7 + 1;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
  }
  FUN_00414560(&local_58,2);
  return;
}

