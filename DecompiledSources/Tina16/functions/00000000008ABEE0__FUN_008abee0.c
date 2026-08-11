/* Ghidra address: 008abee0 */
/* Ghidra symbol: FUN_008abee0 */


void FUN_008abee0(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_48 [40];
  undefined1 *local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = auStack_48;
  local_18 = FUN_004b6930(&PTR_FUN_00478280,1);
  FUN_008a2b70(local_18,*(undefined1 *)(param_1 + 8));
  FUN_008ac320(param_1,local_18,0x3d);
  uVar1 = local_18;
  local_10 = local_18;
  local_18 = 0;
  FUN_00410f20(uVar1);
  return;
}

