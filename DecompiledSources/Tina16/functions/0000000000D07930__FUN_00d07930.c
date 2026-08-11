/* Ghidra address: 00d07930 */
/* Ghidra symbol: FUN_00d07930 */


undefined8 FUN_00d07930(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00cad9f0(*(undefined8 *)(param_1 + 0x100),param_2,0);
  if (*(char *)(*(longlong *)(param_1 + 0x100) + 0x12d) != '\0') {
    FUN_0041ddd0(&local_10,PTR_PTR_02001988);
    uVar1 = FUN_0086dfd0(&PTR_FUN_00ca5d38,1,local_10);
    FUN_004134c0(uVar1);
  }
  FUN_00414480(&local_10);
  return param_2;
}

