/* Ghidra address: 017472e0 */
/* Ghidra symbol: FUN_017472e0 */


undefined8 * FUN_017472e0(longlong param_1,undefined8 *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  
  iVar2 = *(int *)(param_1 + 0x50) + ((param_3 & 0xff) % 2) * *(int *)(param_1 + 0x40);
  iVar1 = *(int *)(param_1 + 0x54) +
          (int)(((ulonglong)param_3 & 0xffffffff000000ff) / 2) * *(int *)(param_1 + 0x44);
  FUN_00498350(&local_38,iVar2,iVar1,iVar2 + *(int *)(param_1 + 0x40),
               iVar1 + *(int *)(param_1 + 0x44));
  *param_2 = local_38;
  param_2[1] = uStack_30;
  return param_2;
}

