/* Ghidra address: 0161b150 */
/* Ghidra symbol: FUN_0161b150 */


void FUN_0161b150(longlong param_1,longlong param_2,char param_3,int *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  undefined8 uVar4;
  int iVar5;
  
  *param_4 = 0;
  if (param_3 == '\0') {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 8);
  }
  iVar5 = *(int *)(param_2 + 0x10);
  iVar3 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar1 = FUN_004aeac0(param_2,iVar3);
      lVar2 = FUN_0161aa90(uVar4,uVar1);
      if (lVar2 == 0) {
        uVar1 = FUN_0161adb0(uVar1);
        FUN_004ae7e0(uVar4,uVar1);
        *param_4 = *param_4 + 1;
      }
      else {
        FUN_0161af70(lVar2,uVar1);
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

