/* Ghidra address: 014e53e0 */
/* Ghidra symbol: FUN_014e53e0 */


bool FUN_014e53e0(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined1 *local_48;
  undefined1 local_35;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  FUN_019af0a0(param_1);
  local_68 = *(undefined1 *)(param_1 + 0xe90);
  local_60 = *(undefined8 *)(param_1 + 0xe88);
  local_58 = 0;
  local_50 = *(undefined8 *)(param_1 + 0xe80);
  local_48 = &local_35;
  FUN_00ee3b90(0,*(undefined8 *)(param_1 + 0xe78),param_1,param_3);
  iVar3 = *(int *)(param_1 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_00b94e60(param_1,iVar2);
      FUN_014e52d0(auStack_88,uVar1);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_01995490(param_1,local_2c);
  FUN_019954b0(param_1,local_30);
  FUN_019954c0(param_1,local_34);
  bVar4 = local_2c == 0;
  if (bVar4) {
    FUN_019953b0(param_1);
  }
  iVar3 = FUN_019954d0(param_1);
  FUN_019aed30(param_1,iVar3 + 1);
  FUN_019aede0(param_1,0,param_1,1);
  return bVar4;
}

