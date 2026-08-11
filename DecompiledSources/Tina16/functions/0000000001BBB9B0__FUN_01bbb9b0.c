/* Ghidra address: 01bbb9b0 */
/* Ghidra symbol: FUN_01bbb9b0 */


void FUN_01bbb9b0(longlong param_1,int param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 local_b8 [19];
  
  puVar4 = local_b8;
  for (lVar3 = 0x12; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar4 = *param_4;
    param_4 = param_4 + 1;
    puVar4 = puVar4 + 1;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x48 + (longlong)param_2 * 8);
  *(undefined1 *)(param_1 + 0x68 + (longlong)param_2) = 1;
  uVar2 = FUN_01bbb0c0(&DAT_01bb7eb0,CONCAT71((int7)(int3)((uint)param_2 >> 8),1),param_3,3,local_b8
                      );
  FUN_01bbb400(uVar1,uVar2);
  return;
}

