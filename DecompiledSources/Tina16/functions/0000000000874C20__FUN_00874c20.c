/* Ghidra address: 00874c20 */
/* Ghidra symbol: FUN_00874c20 */


undefined8 FUN_00874c20(undefined8 param_1,byte param_2)

{
  undefined2 *puVar1;
  longlong lVar2;
  
  FUN_004169f0(param_1,2);
  puVar1 = (undefined2 *)FUN_00414de0(param_1);
  *puVar1 = *(undefined2 *)(&DAT_01e1df68 + (ulonglong)(param_2 >> 4) * 2);
  lVar2 = FUN_00414de0(param_1);
  *(undefined2 *)(lVar2 + 2) = *(undefined2 *)(&DAT_01e1df68 + (ulonglong)(param_2 & 0xf) * 2);
  return param_1;
}

