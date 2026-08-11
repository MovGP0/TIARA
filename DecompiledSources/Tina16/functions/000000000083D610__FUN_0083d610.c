/* Ghidra address: 0083d610 */
/* Ghidra symbol: FUN_0083d610 */


void FUN_0083d610(longlong param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  char cVar4;
  
  uVar1 = *(undefined4 *)param_2;
  uVar2 = *(undefined4 *)((longlong)param_2 + 4);
  cVar4 = FUN_0083d5f0(param_1,uVar1,uVar2,*(undefined8 *)(param_1 + 0xe0));
  if (cVar4 == '\0') {
    cVar4 = FUN_0083d5f0(param_1,uVar1,uVar2,*(undefined8 *)(param_1 + 0xe8));
    if (cVar4 == '\0') {
      bVar3 = false;
      goto LAB_0083d667;
    }
  }
  bVar3 = true;
LAB_0083d667:
  if (bVar3) {
    *param_3 = *param_2;
  }
  return;
}

