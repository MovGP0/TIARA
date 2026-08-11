/* Ghidra address: 0041ddd0 */
/* Ghidra symbol: FUN_0041ddd0 */


undefined8 FUN_0041ddd0(undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 local_2018 [4064];
  undefined1 local_1038;
  undefined1 local_38;
  
  local_38 = 0;
  local_1038 = 0;
  if (param_2 != (undefined8 *)0x0) {
    if ((ulonglong)param_2[1] < 0x10000) {
      uVar2 = FUN_00419c40(*(undefined8 *)*param_2);
      uVar1 = thunk_FUN_039b3fd2(uVar2,*(undefined4 *)(param_2 + 1),local_2018,0x1000);
      FUN_00414740(param_1,local_2018,uVar1);
    }
    else {
      FUN_004167d0(param_1,param_2[1]);
    }
  }
  return param_1;
}

