/* Ghidra address: 009d7260 */
/* Ghidra symbol: FUN_009d7260 */


undefined4 FUN_009d7260(longlong param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_3 = 0;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x10))
                    (*(longlong **)(param_1 + 0x18),param_2);
  FUN_009d3370(param_3,uVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x20),0);
  return 0;
}

