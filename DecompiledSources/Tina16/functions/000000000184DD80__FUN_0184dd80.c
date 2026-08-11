/* Ghidra address: 0184dd80 */
/* Ghidra symbol: FUN_0184dd80 */


void FUN_0184dd80(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x120) == '\0') {
    *(undefined8 *)(param_1 + 0x78) = 1;
    iVar4 = *(int *)(DAT_01fac458 + 0x10);
    iVar3 = 0;
    if (-1 < iVar4 + -1) {
      do {
        lVar1 = FUN_004aeac0(DAT_01fac458,iVar3);
        puVar2 = (undefined8 *)(**(code **)(lVar1 + -0x30))(lVar1);
        (**(code **)*puVar2)(puVar2,0xff,param_1);
        FUN_0184caa0(param_1,0,puVar2);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    *(undefined8 *)(param_1 + 0x78) = 0;
    *(undefined1 *)(param_1 + 0x120) = 1;
  }
  return;
}

