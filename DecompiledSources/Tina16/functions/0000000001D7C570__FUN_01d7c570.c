/* Ghidra address: 01d7c570 */
/* Ghidra symbol: FUN_01d7c570 */


void FUN_01d7c570(longlong param_1)

{
  int iVar1;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230 [2];
  undefined8 local_220;
  undefined1 local_212 [522];
  
  local_248 = 0;
  local_240 = 0;
  local_230[0] = 0;
  local_238 = 0;
  local_220 = 0;
  FUN_00416ba0(&local_220,L"DesignSoft\\",*(undefined8 *)PTR_DAT_020018e0);
  iVar1 = thunk_FUN_041bde6d(0,5,0,0,local_212);
  if (iVar1 == 0) {
    FUN_004167d0(&local_238,local_212);
    FUN_00416cd0(local_230,3,local_238,&DAT_01d7c75c,local_220);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6b0),local_230[0]);
  }
  FUN_0064dd90(*(undefined8 *)(param_1 + 0x6b0),&local_240);
  FUN_0064de00(*(undefined8 *)(param_1 + 0x6f0),local_240);
  FUN_0040d200(local_212,0x20a,0);
  iVar1 = thunk_FUN_0418dd92(0x105,local_212);
  if (iVar1 != 0) {
    thunk_FUN_03b9e632(local_212,local_212,0x20a);
    FUN_004167d0(&local_248,local_212);
    FUN_00416ad0(&local_248,local_220);
    FUN_0064de00(*(undefined8 *)(param_1 + 0x6b8),local_248);
  }
  FUN_00414480(&local_248);
  FUN_00414480(&local_240);
  FUN_00414560(&local_238,2);
  FUN_00414480(&local_220);
  return;
}

