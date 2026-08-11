/* Ghidra address: 011d2740 */
/* Ghidra symbol: FUN_011d2740 */


void FUN_011d2740(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_28 = 0;
  local_20[0] = 0;
  local_10 = 0;
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x740) + 0x260))(*(longlong **)(param_1 + 0x740));
  DAT_01f2a8d4 = cVar1 != '\0';
  iVar2 = 0;
  if (*(longlong *)(*(longlong *)PTR_DAT_02003af0 + 0x790) != 0) {
    iVar2 = *(int *)(*(longlong *)(*(longlong *)PTR_DAT_02003af0 + 0x790) + -4);
  }
  FUN_00416dc0(local_20,*(undefined8 *)(*(longlong *)PTR_DAT_02003af0 + 0x790),1,iVar2 + -1);
  FUN_00b971a0(&local_10,local_20[0]);
  FUN_00416cd0(&local_28,3,*(undefined8 *)PTR_DAT_02002860,&LAB_011d2898,local_10);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6c8),local_28);
  FUN_011d2be0(param_1,param_2);
  *(undefined4 *)PTR_DAT_02004708 = 3000;
  FUN_00414560(&local_28,2);
  FUN_00414480(&local_10);
  return;
}

