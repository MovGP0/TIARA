/* Ghidra address: 009d7710 */
/* Ghidra symbol: FUN_009d7710 */


undefined4 FUN_009d7710(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_3 = 0;
  FUN_009d71d0(param_1);
  uVar1 = FUN_009d3290(param_2);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x60))
                    (*(longlong **)(param_1 + 0x18),uVar1);
  FUN_009d3370(param_3,uVar1,*(undefined8 *)(*(longlong *)(param_1 + 0x20) + 0x20),0);
  return 0;
}

