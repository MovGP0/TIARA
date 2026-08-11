/* Ghidra address: 015c0100 */
/* Ghidra symbol: FUN_015c0100 */


undefined4 FUN_015c0100(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 local_20 [2];
  undefined4 local_10;
  undefined4 local_c;
  
  local_20[0] = 0;
  local_10 = FUN_004b5830(param_1,param_2);
  if ((param_1[0xf] != 0) && ((char)param_1[0x11] != '\0')) {
    if (*(char *)((longlong)param_1 + 0x4a) == '\0') {
      FUN_015bf270(local_20,param_2);
      FUN_015bfad0(param_1[0xf],local_20[0],local_10);
    }
    else {
      FUN_015bfad0(param_1[0xf],param_2,local_10);
    }
    uVar1 = (**(code **)(*param_1 + 0x28))(param_1);
    if ((uint)(*(int *)(param_1[0xf] + 0x10) * 5) < uVar1) {
      FUN_00410f20(param_1[0xf]);
      param_1[0xf] = 0;
      *(undefined1 *)(param_1 + 0x11) = 0;
    }
  }
  local_c = local_10;
  FUN_00414480(local_20);
  return local_c;
}

