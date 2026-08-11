/* Ghidra address: 01b08b90 */
/* Ghidra symbol: FUN_01b08b90 */


void FUN_01b08b90(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 local_230;
  undefined1 local_228 [256];
  undefined1 local_128 [256];
  undefined8 local_28;
  undefined8 local_20 [2];
  undefined8 local_10;
  
  local_230 = 0;
  local_20[0] = 0;
  local_28 = 0;
  local_10 = 0;
  if (*(longlong *)(param_1 + 0x689) == 0) {
    FUN_00416cd0(param_3,3,*(undefined8 *)PTR_DAT_020030c8,&DAT_01b08e18,L"Analysis Statistics.STA")
    ;
    DAT_01fd1d90 = 1;
    FUN_00414ad0(&DAT_02110ba0,*param_3);
    FUN_0040cf10(param_2,*param_3,0);
    FUN_00409900();
    goto LAB_01b08d65;
  }
  FUN_00414ad0(param_3,*(undefined8 *)(param_1 + 0x689));
  FUN_00441920(&local_28,*(undefined8 *)(param_1 + 0x689));
  FUN_004414c0(local_20,local_28,L".STA");
  FUN_00416cd0(param_3,3,*(undefined8 *)PTR_DAT_020030c8,&DAT_01b08e18,local_20[0]);
  FUN_00416910(local_228,*(undefined8 *)(param_1 + 0x689),0xff);
  FUN_00b93b70(local_128,local_228);
  FUN_004169a0(&local_230,local_128);
  FUN_0043e130(&local_10,local_230);
  iVar2 = FUN_00416db0(local_10,L".TSC");
  if (iVar2 == 0) {
LAB_01b08ce7:
    DAT_01fd1d90 = 0;
  }
  else {
    iVar2 = FUN_00416db0(local_10,L".SCH");
    if (iVar2 == 0) goto LAB_01b08ce7;
    DAT_01fd1d90 = 1;
    FUN_00414ad0(&DAT_02110ba0,*param_3);
  }
  FUN_0040cf10(param_2,*param_3,0);
  FUN_00409900();
LAB_01b08d65:
  cVar1 = FUN_00440a20(*param_3,1);
  if (cVar1 == '\0') {
    FUN_0040ca00(param_2);
    FUN_00409900();
  }
  else {
    FUN_0040ca20(param_2);
    FUN_00409900();
  }
  FUN_00414480(&local_230);
  FUN_00414560(&local_28,2);
  FUN_00414480(&local_10);
  return;
}

