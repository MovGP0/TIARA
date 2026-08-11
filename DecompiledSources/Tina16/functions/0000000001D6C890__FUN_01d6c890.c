/* Ghidra address: 01d6c890 */
/* Ghidra symbol: FUN_01d6c890 */


longlong FUN_01d6c890(longlong param_1,undefined8 param_2,byte param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  lVar1 = FUN_00410920(param_1,local_res10);
  if (lVar1 != -1) {
    *(byte *)(lVar1 + 0x30) = param_3;
    uVar2 = FUN_00409570((uint)param_3 * 0x228);
    *(undefined8 *)(lVar1 + 0x28) = uVar2;
    uVar2 = FUN_00409570((ulonglong)*(byte *)(lVar1 + 0x30) << 3);
    *(undefined8 *)(lVar1 + 0x9fc0) = uVar2;
    uVar2 = FUN_00409570((ulonglong)*(byte *)(lVar1 + 0x30) << 3);
    *(undefined8 *)(lVar1 + 0x9fc8) = uVar2;
    param_1 = lVar1;
  }
  return param_1;
}

