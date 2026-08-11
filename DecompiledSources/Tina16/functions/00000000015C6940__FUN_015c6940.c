/* Ghidra address: 015c6940 */
/* Ghidra symbol: FUN_015c6940 */


void FUN_015c6940(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  FUN_015c2360(*(undefined8 *)(*(longlong *)(param_1 + 0x213d0) + 0x28));
  if (*(char *)(*(longlong *)(*(longlong *)(param_1 + 0x213d0) + 0x18) + 0x103) == '\0') {
    FUN_015c4c30(param_1);
  }
  else {
    uVar2 = FUN_015b59b0(&PTR_FUN_015b5818,1,0x2c,0);
    FUN_004134c0(uVar2);
  }
  puVar1 = *(undefined8 **)(*(longlong *)(param_1 + 0x213d0) + 8);
  uVar2 = (**(code **)*puVar1)(puVar1);
  *(undefined8 *)(*(longlong *)(param_1 + 0x213d0) + 0xb0) = uVar2;
  return;
}

