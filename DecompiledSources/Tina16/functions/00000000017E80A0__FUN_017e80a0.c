/* Ghidra address: 017e80a0 */
/* Ghidra symbol: FUN_017e80a0 */


void FUN_017e80a0(longlong param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 0x350) != '\0') {
    uVar3 = FUN_0065b870(*(undefined8 *)(param_1 + 0x340));
    iVar1 = FUN_00c08890(*(undefined8 *)(param_1 + 0x340));
    iVar1 = thunk_FUN_041b2403(uVar3,0xc9,(longlong)iVar1,0);
    uVar3 = FUN_0065b870(*(undefined8 *)(param_1 + 0x340));
    iVar2 = thunk_FUN_041b2403(uVar3,0xbb,(longlong)iVar1,0);
    *param_2 = iVar1 + 1;
    iVar1 = FUN_00c08890(*(undefined8 *)(param_1 + 0x340));
    *param_3 = (iVar1 - iVar2) + 1;
  }
  return;
}

