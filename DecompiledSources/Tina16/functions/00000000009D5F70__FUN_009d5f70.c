/* Ghidra address: 009d5f70 */
/* Ghidra symbol: FUN_009d5f70 */


undefined4 FUN_009d5f70(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_4 = 0;
  uVar1 = FUN_009d3290(param_2);
  uVar2 = FUN_009d3290(param_3);
  uVar2 = (**(code **)(**(longlong **)(param_1 + 0x18) + 0x280))
                    (*(longlong **)(param_1 + 0x18),uVar1,uVar2);
  FUN_009d3370(param_4,uVar2,*(undefined8 *)(param_1 + 0x20),0);
  FUN_009d4ed0(param_1,uVar1);
  return 0;
}

