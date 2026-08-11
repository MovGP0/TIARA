/* Ghidra address: 015de790 */
/* Ghidra symbol: FUN_015de790 */


undefined1 FUN_015de790(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  
  *(undefined1 *)(param_2 + 0x256) = 1;
  *(undefined4 *)(param_2 + 0x24a) = *(undefined4 *)(*(longlong *)(param_1 + 0xc0) + 0x10);
  *(undefined4 *)(param_2 + 0x3d) = 0;
  uVar1 = FUN_015d4110(param_1,param_2);
  return uVar1;
}

