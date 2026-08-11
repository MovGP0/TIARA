/* Ghidra address: 00d39530 */
/* Ghidra symbol: FUN_00d39530 */


void FUN_00d39530(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 local_48 [20];
  undefined1 local_34 [20];
  
  plVar1 = (longlong *)FUN_00781840();
  (**(code **)(*plVar1 + 0x158))(plVar1,local_34,0x13);
  uVar2 = FUN_00781840();
  uVar3 = FUN_005ffa40(param_2);
  FUN_00787be0(*(undefined8 *)(param_1 + 0x18),local_48);
  FUN_00778dc0(uVar2,uVar3,local_34,local_48,0,0);
  return;
}

