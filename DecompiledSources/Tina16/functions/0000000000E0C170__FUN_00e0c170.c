/* Ghidra address: 00e0c170 */
/* Ghidra symbol: FUN_00e0c170 */


undefined8 FUN_00e0c170(undefined8 param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int *local_30 [2];
  
  FUN_00414480(param_1);
  (**(code **)(*param_2 + 0x2d0))(param_2,0,local_30);
  iVar1 = local_30[0][1];
  iVar2 = local_30[0][2];
  if (*(longlong *)PTR_DAT_02001470 != 0) {
    if (*local_30[0] < *(int *)(*(longlong *)PTR_DAT_02001470 + 0x10)) {
      lVar3 = FUN_004aeac0(*(undefined8 *)PTR_DAT_02001470,*local_30[0]);
    }
    else {
      lVar3 = 0;
    }
    if ((lVar3 == 0) || (*(int *)(*(longlong *)(lVar3 + 0x10) + 0x10) <= iVar1)) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_004aeac0(*(undefined8 *)(lVar3 + 0x10),iVar1);
    }
    if ((lVar3 == 0) || (*(int *)(*(longlong *)(lVar3 + 0x18) + 0x10) <= iVar2)) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_004aeac0(*(undefined8 *)(lVar3 + 0x18),iVar2);
    }
    if (lVar3 == 0) {
      FUN_00414480(param_1);
    }
    else {
      FUN_00414ad0(param_1,*(undefined8 *)(lVar3 + 8));
    }
  }
  return param_1;
}

