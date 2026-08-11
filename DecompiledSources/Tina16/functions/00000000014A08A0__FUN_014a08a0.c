/* Ghidra address: 014a08a0 */
/* Ghidra symbol: FUN_014a08a0 */


void FUN_014a08a0(longlong param_1,undefined8 param_2,char param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 local_30;
  undefined8 local_28 [2];
  
  local_30 = 0;
  local_28[0] = 0;
  uVar4 = FUN_006e2230(*(undefined8 *)(param_1 + 0x730),param_5,param_6);
  lVar6 = FUN_006e21e0(*(undefined8 *)(param_1 + 0x730),param_5,param_6);
  if (param_3 == '\0') {
    cVar3 = FUN_014a0880(lVar6);
    if ((cVar3 == '\0') && (((uVar4 & 8) != 0 || ((uVar4 & 0x20) != 0)))) {
      FUN_00441a10(local_28,*(undefined8 *)(lVar6 + 0x10));
      uVar7 = FUN_01099960(*(undefined8 *)(param_1 + 0x778),local_28[0]);
      FUN_00c03380(*(undefined8 *)(param_1 + 0x740),uVar7);
      cVar3 = FUN_01a90ed0();
      if (cVar3 != '\0') {
        FUN_01b25310(*(undefined8 *)(param_1 + 0x740));
      }
      lVar1 = **(longlong **)(*(longlong *)(param_1 + 0x740) + 0x538);
      (**(code **)(lVar1 + 0xf0))(lVar1,&local_30);
      iVar5 = FUN_00416db0(local_30,L"CandCPlusPlus");
      if (iVar5 == 0) {
        plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x740) + 0x538);
        (**(code **)(*plVar2 + 0x170))(plVar2,0);
      }
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x740) + 0x4e8);
      (**(code **)(*plVar2 + 0x10))(plVar2,*(undefined8 *)(lVar6 + 0x18));
      FUN_00c0dad0(*(undefined8 *)(param_1 + 0x740),0);
    }
  }
  FUN_00414560(&local_30,2);
  return;
}

