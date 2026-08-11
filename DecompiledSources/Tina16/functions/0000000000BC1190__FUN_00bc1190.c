/* Ghidra address: 00bc1190 */
/* Ghidra symbol: FUN_00bc1190 */


undefined4 FUN_00bc1190(longlong param_1,longlong *param_2)

{
  undefined4 uVar1;
  
  (**(code **)(*param_2 + 0x28))
            (param_2,*(undefined8 *)(param_1 + 0x20),L"Background",*(undefined4 *)(param_1 + 8));
  (**(code **)(*param_2 + 0x28))
            (param_2,*(undefined8 *)(param_1 + 0x20),L"Foreground",*(undefined4 *)(param_1 + 0x10));
  uVar1 = FUN_00bc1260(param_1);
  (**(code **)(*param_2 + 0x28))(param_2,*(undefined8 *)(param_1 + 0x20),L"Style",uVar1);
  return 1;
}

