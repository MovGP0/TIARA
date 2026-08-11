/* Ghidra address: 009d4d30 */
/* Ghidra symbol: FUN_009d4d30 */


undefined4 FUN_009d4d30(longlong param_1,short param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *param_3 = 0;
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x1b8))
                    (*(longlong **)(param_1 + 0x18),param_2 != 0);
  FUN_009d3370(param_3,uVar1,*(undefined8 *)(param_1 + 0x20),0);
  return 0;
}

