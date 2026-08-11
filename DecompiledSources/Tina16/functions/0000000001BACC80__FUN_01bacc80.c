/* Ghidra address: 01bacc80 */
/* Ghidra symbol: FUN_01bacc80 */


void FUN_01bacc80(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 local_38;
  undefined8 local_30 [2];
  
  local_30[0] = 0;
  local_38 = 0;
  *(undefined8 *)(param_1 + 0x708) = *(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x80);
  *(undefined8 *)(param_1 + 0x710) = *(undefined8 *)(*(longlong *)(param_1 + 0x700) + 0x88);
  lVar2 = *(longlong *)(param_1 + 0x700);
  *(longlong *)(lVar2 + 0x88) = param_1;
  *(code **)(lVar2 + 0x80) = FUN_01bad730;
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),1,*(undefined4 *)(param_1 + 0x98));
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),2,*(undefined4 *)(param_1 + 0x9c));
  FUN_0064b380(*(undefined8 *)(param_1 + 0xd0),3,*(undefined4 *)(param_1 + 0x98));
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x6d8) + 0x4f0);
  (**(code **)(*plVar1 + 0x10))(plVar1,DAT_021113c0);
  lVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(longlong *)(param_1 + 0x718) = lVar2;
  *(undefined2 *)(lVar2 + 0x30) = 0x7c;
  FUN_00688430(*(undefined8 *)(param_1 + 0x6c8),1);
  lVar2 = *(longlong *)(param_1 + 0x6f8);
  FUN_00724270(lVar2,&local_38);
  FUN_00416cd0(local_30,5,*(undefined8 *)PTR_DAT_02005010,&DAT_01bace74,local_38,&LAB_01bace84,
               *(undefined8 *)(lVar2 + 0x100));
  FUN_00724380(lVar2,local_30[0]);
  FUN_0064cf60(param_1,0x468);
  uVar3 = FUN_017105e0(0);
  *(undefined8 *)(param_1 + 0x730) = uVar3;
  FUN_00414480(&local_38);
  FUN_00414480(local_30);
  return;
}

