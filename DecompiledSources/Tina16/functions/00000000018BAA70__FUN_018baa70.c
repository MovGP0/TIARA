/* Ghidra address: 018baa70 */
/* Ghidra symbol: FUN_018baa70 */


void FUN_018baa70(longlong param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)
           FUN_01803bf0(*(undefined8 *)(*(longlong *)(param_1 + 0x98) + 0x28),L"cutted");
  while( true ) {
    uVar3 = FUN_018b8410(param_1);
    iVar1 = FUN_01803a10(uVar3);
    if (iVar1 <= param_2) break;
    uVar3 = FUN_018b8410(param_1);
    uVar3 = FUN_018039f0(uVar3,param_2);
    (**(code **)*puVar2)(puVar2,uVar3);
  }
  return;
}

