/* Ghidra address: 01352930 */
/* Ghidra symbol: FUN_01352930 */


undefined8 * FUN_01352930(longlong param_1,undefined8 *param_2,undefined8 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 local_res18 [2];
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  local_res18[0] = param_3;
  FUN_00414610(param_3);
  FUN_00414ad0(param_2,local_res18[0]);
  iVar2 = 0;
  if (-1 < param_4 + -2) {
    iVar3 = param_4 + -1;
    do {
      uVar1 = FUN_015f6440(iVar2,*(undefined1 *)(param_1 + 0x65f));
      FUN_0043f750(&local_20,uVar1);
      FUN_00416cd0(param_2,3,*param_2,local_20,&DAT_01352a8c);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  uVar1 = FUN_015f6440(param_4 + -1,*(undefined1 *)(param_1 + 0x65f));
  FUN_0043f750(&local_28,uVar1);
  FUN_00416cd0(param_2,3,*param_2,local_28,&DAT_01352a9c);
  FUN_00414560(&local_28,2);
  FUN_00414480(local_res18);
  return param_2;
}

