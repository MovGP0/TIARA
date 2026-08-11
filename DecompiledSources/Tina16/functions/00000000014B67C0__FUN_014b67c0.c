/* Ghidra address: 014b67c0 */
/* Ghidra symbol: FUN_014b67c0 */


void FUN_014b67c0(longlong param_1,longlong param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 local_30;
  undefined8 local_28;
  longlong local_20;
  
  local_30 = 0;
  local_20 = 0;
  local_28 = 0;
  lVar3 = FUN_017ff620(param_2);
  if (lVar3 != 0) {
    FUN_01b20020(&local_30,lVar3,&LAB_014b6938);
    FUN_00416ba0(&local_20,local_30,&LAB_014b6938);
    FUN_004169a0(&local_28,param_2 + 0x2b0);
    cVar1 = FUN_005b8460(local_20,local_28);
    if (cVar1 != '\0') {
      FUN_014b48f0(param_1);
      uVar2 = 0;
      if (local_20 != 0) {
        uVar2 = *(undefined4 *)(local_20 + -4);
      }
      FUN_00416e20(&local_28,1,uVar2);
      uVar2 = FUN_016cef60(*(undefined8 *)(*(longlong *)(param_1 + 0x860) + 0x4e8),local_28,
                           *(undefined8 *)(*(longlong *)(lVar3 + 0x1a8) + 0xe8));
      *(undefined4 *)(param_1 + 0x8a0) = uVar2;
      FUN_00bfa980(*(undefined8 *)(param_1 + 0x860),uVar2);
      FUN_00bfa950(*(undefined8 *)(param_1 + 0x860),1);
      (**(code **)(**(longlong **)(param_1 + 0x860) + 600))(*(longlong **)(param_1 + 0x860));
      FUN_014b4650(param_1);
      FUN_014b48c0(param_1);
    }
  }
  FUN_00414560(&local_30,3);
  return;
}

