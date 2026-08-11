/* Ghidra address: 014e5110 */
/* Ghidra symbol: FUN_014e5110 */


bool FUN_014e5110(longlong param_1,undefined8 param_2,undefined4 param_3)

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
  longlong local_48;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  FUN_019af0a0(param_1);
  FUN_017ff200(*(undefined8 *)(param_1 + 1000));
  local_50 = FUN_01530b80(*(undefined8 *)PTR_DAT_020023c0);
  local_68 = *(undefined1 *)(*(longlong *)PTR_DAT_020023c0 + 0x1c4a);
  local_60 = *(undefined8 *)(*(longlong *)PTR_DAT_020023c0 + 0x1c50);
  local_58 = *(undefined8 *)(*(longlong *)PTR_DAT_020023c0 + 0x1c58);
  local_48 = *(longlong *)PTR_DAT_020023c0 + 0x1c49;
  FUN_00ee3b90(1,*(undefined8 *)(*(longlong *)(*(longlong *)PTR_DAT_020023c0 + 0x958) + 0x4e8),
               param_1,param_3);
  iVar3 = *(int *)(param_1 + 0x10);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      uVar1 = FUN_00b94e60(param_1,iVar2);
      FUN_014e5000(auStack_88,uVar1);
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

