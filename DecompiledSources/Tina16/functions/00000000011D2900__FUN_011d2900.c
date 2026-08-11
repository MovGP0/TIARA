/* Ghidra address: 011d2900 */
/* Ghidra symbol: FUN_011d2900 */


void FUN_011d2900(longlong param_1)

{
  int iVar1;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  *(undefined4 *)PTR_DAT_02004708 = 0xc1c;
  DAT_01f2a8d4 = 1;
  iVar1 = 0;
  if (*(longlong *)(*(longlong *)PTR_DAT_02003af0 + 0x790) != 0) {
    iVar1 = *(int *)(*(longlong *)(*(longlong *)PTR_DAT_02003af0 + 0x790) + -4);
  }
  FUN_00416dc0(local_30,*(undefined8 *)(*(longlong *)PTR_DAT_02003af0 + 0x790),1,iVar1 + -1);
  FUN_00b971a0(local_20,local_30[0]);
  FUN_00416cd0(&local_38,3,*(undefined8 *)PTR_DAT_02002860,&LAB_011d2a68,local_20[0]);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6c8),local_38);
  FUN_011ae5b0(param_1,DAT_02107658);
  if (*(int *)(*(longlong *)PTR_DAT_02003af0 + 0x764) < 6) {
    (**(code **)(**(longlong **)(*(longlong *)PTR_DAT_02003af0 + 0x6f8) + 0x128))
              (*(longlong **)(*(longlong *)PTR_DAT_02003af0 + 0x6f8),1);
  }
  FUN_00414560(&local_38,2);
  FUN_00414480(local_20);
  return;
}

