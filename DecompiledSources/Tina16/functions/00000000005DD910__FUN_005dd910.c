/* Ghidra address: 005dd910 */
/* Ghidra symbol: FUN_005dd910 */


void FUN_005dd910(longlong param_1,undefined8 param_2,char param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x28) == '\0') {
    iVar2 = FUN_00416db0(*(undefined8 *)(param_1 + 8),param_2);
    if (iVar2 == 0) {
      uVar1 = 0;
      goto LAB_005dd93c;
    }
  }
  uVar1 = 1;
LAB_005dd93c:
  *(undefined1 *)(param_1 + 0x28) = uVar1;
  FUN_00414ad0(param_1 + 8,param_2);
  if (param_3 != '\0') {
    FUN_005dd220(param_1);
  }
  return;
}

