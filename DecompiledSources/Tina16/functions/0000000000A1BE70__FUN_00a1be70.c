/* Ghidra address: 00a1be70 */
/* Ghidra symbol: FUN_00a1be70 */


void FUN_00a1be70(longlong param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)(param_1 + 0x28);
  uVar2 = (*(code *)**(undefined8 **)(param_1 + 8))(param_1,1,0x1000);
  puVar1[6] = uVar2;
  *puVar1 = uVar2;
  puVar1[1] = 0x1000;
  return;
}

