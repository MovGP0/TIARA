/* Ghidra address: 00ddcb30 */
/* Ghidra symbol: FUN_00ddcb30 */


void FUN_00ddcb30(longlong param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 local_60 [2];
  undefined1 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  code *local_38;
  undefined8 local_30;
  
  local_40 = 0;
  local_38 = (code *)*param_2;
  local_30 = param_2[1];
  iVar3 = *(int *)(param_1 + 0xc);
  iVar2 = 0;
  if (-1 < iVar3 + -1) {
    do {
      puVar1 = (undefined4 *)(*(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 0x10);
      local_60[0] = *puVar1;
      local_58 = 0;
      local_50 = *(undefined8 *)(puVar1 + 2);
      local_48 = 0x11;
      FUN_00442f70(&local_40,L"%d - %s",local_60,1);
      (*local_38)(local_30,local_40);
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  FUN_00414480(&local_40);
  return;
}

