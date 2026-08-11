/* Ghidra address: 011ae3f0 */
/* Ghidra symbol: FUN_011ae3f0 */


void FUN_011ae3f0(longlong *param_1)

{
  int iVar1;
  undefined8 local_38;
  undefined8 local_30 [2];
  undefined8 local_20 [2];
  
  local_38 = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  DAT_01f2a8d4 = 1;
  DAT_02107650 = *(undefined4 *)(*(longlong *)PTR_DAT_02001d60 + 0x71c);
  DAT_02107654 = *(undefined4 *)(*(longlong *)PTR_DAT_02001d60 + 0x718);
  (**(code **)(*param_1 + 0x118))(param_1,0);
  iVar1 = 0;
  if (*(longlong *)(*(longlong *)PTR_DAT_02003af0 + 0x790) != 0) {
    iVar1 = *(int *)(*(longlong *)(*(longlong *)PTR_DAT_02003af0 + 0x790) + -4);
  }
  FUN_00416dc0(local_30,*(undefined8 *)(*(longlong *)PTR_DAT_02003af0 + 0x790),1,iVar1 + -1);
  FUN_00b971a0(local_20,local_30[0]);
  FUN_00416cd0(&local_38,3,*(undefined8 *)PTR_DAT_02002860,&LAB_011ae558,local_20[0]);
  FUN_0064de00(param_1[0xd9],local_38);
  *(undefined4 *)PTR_DAT_02004708 = 3000;
  FUN_00414560(&local_38,2);
  FUN_00414480(local_20);
  return;
}

