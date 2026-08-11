/* Ghidra address: 009d9860 */
/* Ghidra symbol: FUN_009d9860 */


undefined4 FUN_009d9860(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 local_18;
  undefined4 local_10;
  
  local_18 = 0;
  *param_2 = 0;
  if (*(longlong *)(param_1 + 0x70) == 0) {
    uVar1 = FUN_008ba9b0(&PTR_FUN_008b7070,1);
    *(undefined8 *)(param_1 + 0x80) = uVar1;
    uVar1 = FUN_0094b680(&PTR_FUN_00907700,1,*(undefined8 *)(param_1 + 0x18),uVar1,0,0);
    *(undefined8 *)(param_1 + 0x88) = uVar1;
    FUN_009d3690(&local_18,uVar1,param_1);
    FUN_0041b840(param_1 + 0x70,local_18);
  }
  FUN_0041b840(param_2,*(undefined8 *)(param_1 + 0x70));
  local_10 = 0;
  FUN_0041b800(&local_18);
  return local_10;
}

