/* Ghidra address: 01837350 */
/* Ghidra symbol: FUN_01837350 */


longlong FUN_01837350(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  longlong local_18;
  undefined8 local_10;
  
  local_10 = 0;
  local_18 = FUN_0184cde0(param_2,param_3);
  if (local_18 == 0) {
    if (*(char *)(param_1 + 0x28) == '\0') {
      local_18 = FUN_01847460(&DAT_01843700,1,param_3,7,0);
      FUN_0184caa0(*(undefined8 *)(param_1 + 0x38),param_3,local_18);
    }
    else {
      FUN_00416cd0(&local_10,4,*(undefined8 *)PTR_DAT_02002878,&DAT_01837454,param_3,&DAT_01837454);
      uVar1 = FUN_0044d490(&PTR_FUN_004334c0,1,local_10);
      FUN_004134c0(uVar1);
    }
  }
  FUN_00414480(&local_10);
  return local_18;
}

