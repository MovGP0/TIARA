/* Ghidra address: 006f9140 */
/* Ghidra symbol: FUN_006f9140 */


void FUN_006f9140(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = FUN_006efc30();
  iVar6 = 0;
  if (-1 < iVar5 + -1) {
    do {
      uVar1 = FUN_006efcb0(*(undefined8 *)(param_1 + 0x4e0),iVar6);
      cVar4 = FUN_006ef240(uVar1,3);
      if (cVar4 != '\0') {
        lVar2 = FUN_006efcb0(*(undefined8 *)(param_1 + 0x4e0),iVar6);
        lVar3 = FUN_006efcb0(*(undefined8 *)(param_1 + 0x4e0),iVar6);
        (**(code **)(*param_2 + 0x270))
                  (param_2,*(undefined8 *)(lVar2 + 0x30),*(undefined8 *)(lVar3 + 0x40));
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}

