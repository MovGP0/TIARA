/* Ghidra address: 01ce8a10 */
/* Ghidra symbol: FUN_01ce8a10 */


undefined8 FUN_01ce8a10(longlong param_1,int param_2)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 unaff_RDI;
  undefined8 uVar4;
  
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x28))(*(longlong **)(param_1 + 0x80));
  if (iVar1 <= param_2) {
    return 0;
  }
  uVar2 = (ulonglong)*(byte *)(param_1 + 0x58);
  if (uVar2 < 3) {
    if (uVar2 != 0) {
      if (uVar2 == 1) {
        lVar3 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                          (*(longlong **)(param_1 + 0x80),param_2);
        return *(undefined8 *)(lVar3 + 0x80);
      }
      if (uVar2 != 2) {
        return unaff_RDI;
      }
    }
LAB_01ce8a78:
    lVar3 = (**(code **)(**(longlong **)(param_1 + 0x80) + 0x30))
                      (*(longlong **)(param_1 + 0x80),param_2);
    uVar4 = *(undefined8 *)(lVar3 + 200);
  }
  else {
    if (1 < uVar2 - 3) {
      if (uVar2 - 5 < 2) goto LAB_01ce8a78;
      if (uVar2 - 5 != 2) {
        return unaff_RDI;
      }
    }
    uVar4 = 0;
  }
  return uVar4;
}

