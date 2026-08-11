/* Ghidra address: 00d4bca0 */
/* Ghidra symbol: FUN_00d4bca0 */


void FUN_00d4bca0(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_34 [20];
  
  local_34[0] = 0x1c;
  uVar2 = FUN_00781840();
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar3 = FUN_005ffa40(param_2);
  FUN_00778e90(uVar2,uVar1,uVar3,local_34,0,0);
  return;
}

