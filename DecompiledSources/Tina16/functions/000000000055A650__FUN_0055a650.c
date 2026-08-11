/* Ghidra address: 0055a650 */
/* Ghidra symbol: FUN_0055a650 */


longlong * FUN_0055a650(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 local_30 [2];
  undefined8 local_20;
  
  local_30[0] = 0;
  FUN_00419260(param_2,&DAT_004210c0,1,
               (longlong)*(int *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x48) + 0x10));
  local_20 = *(undefined8 *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x48) + 0x18);
  iVar2 = *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x30) + 0x48) + 0x10);
  iVar1 = 0;
  if (-1 < iVar2 + -1) {
    do {
      FUN_0053c650(local_30,&local_20);
      FUN_00414ad0(*param_2 + (longlong)iVar1 * 8,local_30[0]);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  FUN_00414480(local_30);
  return param_2;
}

