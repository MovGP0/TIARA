/* Ghidra address: 01496ea0 */
/* Ghidra symbol: FUN_01496ea0 */


void FUN_01496ea0(longlong param_1,int param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 local_30;
  
  local_30 = 0;
  uVar3 = FUN_019a4600();
  FUN_015fca00(&local_30,0,0);
  FUN_019af590(uVar3,local_30);
  uVar3 = FUN_004b6930(&PTR_FUN_00478280,1);
  uVar4 = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_01496c80(param_1,uVar3,uVar4);
  uVar5 = FUN_019a4600();
  FUN_01610d40(uVar5,uVar3,uVar4);
  cVar2 = FUN_01497210(param_1);
  if (cVar2 != '\0') {
    if (*(char *)(*(longlong *)(param_1 + 0xbb0) + 0x28) == '\0') {
      cVar2 = FUN_01499d20(param_1);
      if (cVar2 == '\0') goto LAB_014970af;
    }
    cVar2 = FUN_01499f60(param_1);
    if (cVar2 != '\0') {
      FUN_00742eb0(*(undefined8 *)(param_1 + 0x8f0),1);
      if (param_2 == 2) {
        FUN_01497e80(param_1);
      }
      cVar2 = FUN_01495d80(param_1,param_2,*PTR_DAT_020052b0);
      if (cVar2 == '\0') {
        FUN_00410f20(*(undefined8 *)(param_1 + 0x930));
        *(undefined8 *)(param_1 + 0x930) = 0;
        uVar5 = FUN_017e1bd0(&DAT_017df868,1,0,0,0,0,0);
        *(undefined8 *)(param_1 + 0x930) = uVar5;
        FUN_017e8080(uVar5,*(undefined8 *)(param_1 + 0x8b8),*(undefined8 *)(param_1 + 0x860));
        FUN_01694110(*(undefined8 *)(*(longlong *)(param_1 + 0x930) + 0x550),1,0,0);
        lVar1 = *(longlong *)(param_1 + 0x930);
        *(undefined8 *)(lVar1 + 0x628) = *(undefined8 *)(param_1 + 0x938);
        *(undefined8 *)(lVar1 + 0x630) = *(undefined8 *)(param_1 + 0x940);
        *(undefined8 *)(lVar1 + 0x638) = *(undefined8 *)(param_1 + 0x948);
        *(undefined8 *)(lVar1 + 0x640) = *(undefined8 *)(param_1 + 0x950);
        *(undefined8 *)(lVar1 + 0x648) = *(undefined8 *)(param_1 + 0x958);
        puVar7 = (undefined8 *)(param_1 + 0x960);
        puVar8 = (undefined8 *)(lVar1 + 0x650);
        for (lVar6 = 0x48; lVar6 != 0; lVar6 = lVar6 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      FUN_00742eb0(*(undefined8 *)(param_1 + 0x8f0),0);
      FUN_00410f20(uVar3);
      FUN_00410f20(uVar4);
    }
  }
LAB_014970af:
  FUN_00414480(&local_30);
  return;
}

