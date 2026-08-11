/* Ghidra address: 01b793b0 */
/* Ghidra symbol: FUN_01b793b0 */


void FUN_01b793b0(longlong param_1)

{
  undefined2 uVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_01b79750(param_1,*(undefined8 *)(*(longlong *)(param_1 + 0x6b0) + 0x530),L"StringGrid"
                      );
  uVar2 = FUN_01b79750(param_1,uVar2,L"Hotkey");
  uVar1 = FUN_006ecd50(uVar2);
  *(undefined2 *)(param_1 + 0x700) = uVar1;
  return;
}

