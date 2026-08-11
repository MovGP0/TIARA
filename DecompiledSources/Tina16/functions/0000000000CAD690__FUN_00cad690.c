/* Ghidra address: 00cad690 */
/* Ghidra symbol: FUN_00cad690 */


undefined1 FUN_00cad690(longlong *param_1)

{
  undefined1 uVar1;
  undefined1 *local_20 [2];
  
  local_20[0] = (undefined1 *)0x0;
  (**(code **)(*param_1 + 0x188))(param_1,local_20,1,0);
  uVar1 = *local_20[0];
  FUN_00419430(local_20,&DAT_0086e978);
  return uVar1;
}

