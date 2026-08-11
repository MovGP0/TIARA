/* Ghidra address: 01806830 */
/* Ghidra symbol: FUN_01806830 */


undefined8 FUN_01806830(longlong param_1,undefined8 param_2,int param_3)

{
  undefined8 *puVar1;
  
  FUN_00414520(param_2);
  if ((-1 < param_3) && (param_3 < *(int *)(*(longlong *)(param_1 + 0x30) + 0x10))) {
    puVar1 = (undefined8 *)FUN_004aeac0(*(undefined8 *)(param_1 + 0x30),param_3);
    if (puVar1 != (undefined8 *)0x0) {
      FUN_00414b90(param_2,*puVar1);
    }
  }
  return param_2;
}

