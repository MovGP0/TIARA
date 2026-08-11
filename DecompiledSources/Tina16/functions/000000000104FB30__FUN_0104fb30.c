/* Ghidra address: 0104fb30 */
/* Ghidra symbol: FUN_0104fb30 */


ulonglong FUN_0104fb30(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  if (*(int *)(param_1 + 0x918) == 1) {
    iVar3 = FUN_00f8e670(*(undefined8 *)(param_1 + 0x9d8));
    if (iVar3 != 2) goto LAB_0104fb56;
  }
  else {
LAB_0104fb56:
    if (*(int *)(param_1 + 0x918) != 0) {
      (**(code **)(**(longlong **)(param_1 + 0x9c8) + 0x90))(*(longlong **)(param_1 + 0x9c8));
      lVar1 = **(longlong **)(param_1 + 0x9c8);
      (**(code **)(lVar1 + 0x10))
                (*(longlong **)(param_1 + 0x9c8),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x958) + 0x510));
      *(undefined1 *)(param_1 + 0x9d0) = 1;
      uVar4 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
      goto LAB_0104fc1e;
    }
  }
  cVar2 = FUN_01050af0(param_1,0);
  if (cVar2 != '\0') {
    cVar2 = FUN_01050900(param_1);
    if (cVar2 != '\0') {
      (**(code **)(**(longlong **)(param_1 + 0x9c0) + 8))(*(longlong **)(param_1 + 0x9c0),0);
      FUN_01050620(param_1,*(undefined8 *)(param_1 + 0x9c0));
      (**(code **)(**(longlong **)(param_1 + 0x9c8) + 0x90))(*(longlong **)(param_1 + 0x9c8));
      lVar1 = **(longlong **)(param_1 + 0x9c8);
      (**(code **)(lVar1 + 0x10))
                (*(longlong **)(param_1 + 0x9c8),
                 *(undefined8 *)(*(longlong *)(param_1 + 0x958) + 0x510));
      *(undefined1 *)(param_1 + 0x9d0) = 1;
      uVar4 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
    }
  }
LAB_0104fc1e:
  return uVar4 & 0xffffffff;
}

