/* Ghidra address: 01d84b90 */
/* Ghidra symbol: FUN_01d84b90 */


void FUN_01d84b90(undefined8 param_1,undefined8 param_2,char param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = 0;
  local_20 = 0;
  local_28 = 0;
  FUN_004168e0(&local_20,param_2);
  FUN_00441640(&local_30,param_2);
  FUN_004168e0(&local_28,local_30);
  if (param_3 != '\0') {
    lVar2 = FUN_00427be0(L"OLEAUT32.DLL");
    if (lVar2 != 0) {
      pcVar3 = (code *)FUN_00427c10(lVar2,L"RegisterTypeLibForUser");
      if (pcVar3 != (code *)0x0) {
        uVar4 = FUN_00415f70(local_20);
        uVar5 = FUN_00415f70(local_28);
        uVar1 = (*pcVar3)(param_1,uVar4,uVar5);
        FUN_006245b0(uVar1);
        goto LAB_01d84c6d;
      }
    }
  }
  uVar4 = FUN_00415f70(local_20);
  uVar5 = FUN_00415f70(local_28);
  uVar1 = thunk_FUN_03be3d68(param_1,uVar4,uVar5);
  FUN_006245b0(uVar1);
LAB_01d84c6d:
  FUN_00414480(&local_30);
  FUN_004145c0(&local_28,2);
  return;
}

