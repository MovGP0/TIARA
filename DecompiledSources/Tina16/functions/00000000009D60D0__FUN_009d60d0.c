/* Ghidra address: 009d60d0 */
/* Ghidra symbol: FUN_009d60d0 */


undefined4 FUN_009d60d0(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_3 = 0;
  uVar1 = FUN_009d3290(param_2);
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x2a0))
                    (*(longlong **)(param_1 + 0x18),uVar1);
  FUN_009d3370(param_3,uVar1,*(undefined8 *)(param_1 + 0x20),0);
  return 0;
}

