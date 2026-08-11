/* Ghidra address: 00693ef0 */
/* Ghidra symbol: FUN_00693ef0 */


longlong FUN_00693ef0(undefined8 param_1,longlong param_2)

{
  int iVar1;
  undefined1 local_38 [12];
  undefined4 local_2c;
  undefined1 local_28 [16];
  
  FUN_00693e00(param_1,param_2);
  iVar1 = FUN_004230a0(param_2);
  if (0 < iVar1) {
    FUN_00693b00(param_1,local_28);
    iVar1 = FUN_004230c0(local_28);
    if (0 < iVar1) {
      FUN_00693b00(param_1,local_38);
      *(undefined4 *)(param_2 + 4) = local_2c;
    }
  }
  return param_2;
}

