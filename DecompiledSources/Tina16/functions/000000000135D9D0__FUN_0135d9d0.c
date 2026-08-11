/* Ghidra address: 0135d9d0 */
/* Ghidra symbol: FUN_0135d9d0 */


void FUN_0135d9d0(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *(undefined1 *)(param_1 + 0x748) = 1;
  lVar1 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(longlong *)(param_1 + 0x728) = lVar1;
  *(undefined1 *)(lVar1 + 0x49) = 0;
  *(undefined2 *)(lVar1 + 0x2c) = 0x3b;
  *(undefined1 *)(param_1 + 0x758) = 1;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x730) = uVar2;
  uVar2 = FUN_00410e60(&PTR_FUN_00472dd0,1);
  *(undefined8 *)(param_1 + 0x740) = uVar2;
  uVar2 = FUN_004b6930(&PTR_FUN_00478280,1);
  *(undefined8 *)(param_1 + 0x738) = uVar2;
  FUN_0064cf60(param_1,0x21e);
  uVar2 = FUN_019a4630();
  FUN_017ccae0(uVar2,*(undefined8 *)(param_1 + 0x730));
  uVar2 = FUN_019a4630();
  FUN_017cd0b0(uVar2,*(undefined8 *)(param_1 + 0x730),0,0);
  uVar2 = FUN_019a4630();
  FUN_017cd2d0(uVar2,*(undefined8 *)(param_1 + 0x740),*(undefined8 *)(param_1 + 0x738));
  return;
}

