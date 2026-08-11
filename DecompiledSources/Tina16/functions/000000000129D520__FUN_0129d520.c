/* Ghidra address: 0129d520 */
/* Ghidra symbol: FUN_0129d520 */


void FUN_0129d520(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined7 local_76;
  undefined1 uStack_6f;
  undefined8 local_56;
  undefined8 local_4e;
  undefined8 local_46;
  undefined8 local_3e;
  undefined8 local_36;
  ushort local_2e;
  int local_2c;
  char local_28;
  char local_19;
  
  puVar2 = &local_56;
  for (lVar1 = 7; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_1;
    param_1 = param_1 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)puVar2 = *(undefined4 *)param_1;
  *(undefined2 *)((longlong)puVar2 + 4) = *(undefined2 *)((longlong)param_1 + 4);
  local_76 = (undefined7)((ulonglong)*param_2 >> 8);
  uStack_6f = (undefined1)param_2[1];
  FUN_004179d0(&local_56,&DAT_01d0ba10);
  puVar2 = (undefined8 *)CONCAT17(uStack_6f,local_76);
  *puVar2 = local_56;
  puVar2[1] = local_4e;
  puVar2[2] = local_3e;
  puVar2[3] = 0;
  puVar2[4] = local_46;
  puVar2[5] = local_36;
  lVar1 = CONCAT17(uStack_6f,local_76);
  *(double *)(lVar1 + 0x30) = (double)local_2e;
  *(double *)(lVar1 + 0x38) = (double)(int)local_28;
  *(double *)(lVar1 + 0x40) = (double)(int)local_19;
  *(double *)(lVar1 + 0x48) = (double)local_2c;
  FUN_00417740(&local_56,&DAT_01d0ba10);
  return;
}

