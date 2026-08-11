/* Ghidra address: 012b0640 */
/* Ghidra symbol: FUN_012b0640 */


void FUN_012b0640(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0xb80) + 0x260))(*(longlong **)(param_1 + 0xb80));
  if (iVar1 != -1) {
    uVar2 = (**(code **)(**(longlong **)(param_1 + 0xb80) + 0x260))(*(longlong **)(param_1 + 0xb80))
    ;
    (**(code **)(**(longlong **)(param_1 + 0xdb8) + 200))(*(longlong **)(param_1 + 0xdb8),uVar2);
    FUN_012ae910(param_1,6,1,0);
    FUN_010e8e30(*(undefined8 *)(param_1 + 0x9b0),1);
  }
  return;
}

