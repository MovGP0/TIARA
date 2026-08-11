/* Ghidra address: 0129da80 */
/* Ghidra symbol: FUN_0129da80 */


void FUN_0129da80(char param_1,char param_2,undefined8 *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_950 [85];
  undefined1 local_6a4;
  undefined1 local_6a3;
  undefined8 local_6a0;
  undefined8 local_698;
  undefined8 local_568;
  
  puVar2 = local_950;
  for (lVar1 = 0x127; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_3;
    param_3 = param_3 + 1;
    puVar2 = puVar2 + 1;
  }
  FUN_004179d0(local_950,&DAT_01d0d0b8);
  *param_4 = local_6a0;
  if ((param_1 == '\x01') || (param_2 != '\x02')) {
    param_4[1] = local_698;
  }
  *(undefined1 *)(param_4 + 2) = local_6a3;
  if (param_2 == '\x03') {
    *(undefined1 *)((longlong)param_4 + 0x11) = local_6a4;
    puVar2 = &local_568;
    puVar3 = (undefined8 *)((longlong)param_4 + 0x12);
    for (lVar1 = 5; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = *(undefined4 *)puVar2;
    *(undefined1 *)((longlong)puVar3 + 4) = *(undefined1 *)((longlong)puVar2 + 4);
  }
  FUN_00417740(local_950,&DAT_01d0d0b8);
  return;
}

