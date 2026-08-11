/* Ghidra address: 0113f6d0 */
/* Ghidra symbol: FUN_0113f6d0 */


undefined8 FUN_0113f6d0(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 local_45 [4];
  undefined1 auStack_41 [5];
  double local_3c;
  double local_34;
  double local_2c;
  
  puVar3 = (undefined8 *)local_45;
  for (lVar2 = 5; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_1;
    param_1 = param_1 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)puVar3 = *(undefined4 *)param_1;
  *(undefined1 *)((longlong)puVar3 + 4) = *(undefined1 *)((longlong)param_1 + 4);
  if ((((stack0xffffffffffffffbc == *(double *)(PTR_DAT_02001120 + 0x3e9)) &&
       (local_3c == *(double *)(PTR_DAT_02001120 + 0x3f1))) &&
      (local_34 == *(double *)(PTR_DAT_02001120 + 0x3f9))) &&
     (local_2c == *(double *)(PTR_DAT_02001120 + 0x401))) {
    uVar1 = CONCAT71((int7)((ulonglong)PTR_DAT_02001120 >> 8),1);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

