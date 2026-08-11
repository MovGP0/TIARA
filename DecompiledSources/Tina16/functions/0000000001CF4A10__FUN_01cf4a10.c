/* Ghidra address: 01cf4a10 */
/* Ghidra symbol: FUN_01cf4a10 */


undefined8 FUN_01cf4a10(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_10;
  
  local_20 = auStack_48;
  FUN_00414480(param_2);
  local_10 = FUN_00f309b0(&LAB_00f23b78,1);
  uVar1 = FUN_00f2f8e0(&LAB_00f22f08,1,*(undefined1 *)(param_1 + 0x560));
  FUN_00f30e70(local_10,L"deactivated",uVar1);
  FUN_00410f20(local_10);
  return param_2;
}

