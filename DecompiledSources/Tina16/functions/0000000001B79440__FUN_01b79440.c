/* Ghidra address: 01b79440 */
/* Ghidra symbol: FUN_01b79440 */


void FUN_01b79440(longlong param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = 0;
  local_28 = 0;
  uVar5 = FUN_01b79750(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x6b0) + 0x530),L"StringGrid"
                      );
  lVar6 = FUN_01b79750(param_1,uVar5,L"Hotkey");
  if (*(char *)(lVar6 + 0xa9) != '\0') {
    sVar2 = FUN_006ecd50(lVar6);
    if ((*(short *)(param_1 + 0x700) != sVar2) && (0 < *(int *)(param_1 + 0x6f0))) {
      uVar3 = FUN_006ecd50(lVar6);
      FUN_007dc700(&local_20,uVar3);
      cVar1 = FUN_01b795f0(param_1,local_20);
      if (cVar1 != '\0') {
        FUN_0084e3e0(uVar5,1,*(undefined4 *)(param_1 + 0x6f0),local_20);
        puVar7 = (undefined8 *)FUN_0084e390(uVar5,1,*(undefined4 *)(param_1 + 0x6f0));
        FUN_00414b50(&local_28,*puVar7);
        iVar4 = (**(code **)(**(longlong **)(param_1 + 0x6e8) + 0xb8))
                          (*(longlong **)(param_1 + 0x6e8),local_28);
        if (-1 < iVar4) {
          FUN_004b5450(*(undefined8 *)(param_1 + 0x6e8),iVar4,local_20);
        }
      }
    }
  }
  FUN_00414560(&local_28,2);
  return;
}

