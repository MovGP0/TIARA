/* Ghidra address: 015824c0 */
/* Ghidra symbol: FUN_015824c0 */


void FUN_015824c0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  FUN_00410f20(*(undefined8 *)(param_2 + 0x138));
  FUN_00417740(*(longlong *)(param_2 + 0x170) + 0x68,&DAT_015764a8);
  puVar2 = (undefined8 *)(*(longlong *)(param_2 + 0x170) + 0x68);
  for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  return;
}

