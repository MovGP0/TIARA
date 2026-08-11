/* Ghidra address: 017feb70 */
/* Ghidra symbol: FUN_017feb70 */


void FUN_017feb70(longlong *param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  undefined4 local_40;
  undefined4 local_3c [3];
  
  lVar1 = param_1[1];
  if ((char)lVar1 != '\0') {
    (**(code **)(*param_1 + 0xa8))(param_1,param_2);
  }
  local_3c[0] = *(undefined4 *)((longlong)param_1 + 0xc);
  local_40 = (undefined4)param_1[2];
  FUN_01b1cd00(local_3c,&local_40);
  (**(code **)(*param_1 + 0xe8))(param_1,param_2,local_3c[0],local_40);
  *(undefined1 *)((longlong)param_1 + 0xb) = 0;
  (**(code **)(*param_1 + 0x158))(param_1,param_2);
  if ((char)lVar1 != '\0') {
    (**(code **)(*param_1 + 0xa0))(param_1,param_2);
  }
  if (param_3 == '\0') {
    plVar3 = (longlong *)FUN_004b6930(&PTR_FUN_00478280,1);
    (**(code **)(*param_1 + 0x1b8))(param_1,0,plVar3,0);
    (**(code **)(*param_1 + 0x1c0))(param_1,0,plVar3);
    iVar2 = (**(code **)(*plVar3 + 0x28))(plVar3);
    if (0 < iVar2) {
      FUN_017fe590(*(undefined8 *)PTR_DAT_02001d08,plVar3,0,1);
    }
    FUN_00410f20(plVar3);
  }
  return;
}

