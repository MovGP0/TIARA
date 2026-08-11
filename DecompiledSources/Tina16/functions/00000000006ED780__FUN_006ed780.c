/* Ghidra address: 006ed780 */
/* Ghidra symbol: FUN_006ed780 */


undefined4 FUN_006ed780(longlong param_1)

{
  ushort uVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  lVar4 = FUN_006edb60(*(undefined8 *)(param_1 + 8));
  uVar1 = *(ushort *)(lVar4 + 0x34);
  if (*(int *)(param_1 + 0x38) == 0) {
    cVar2 = FUN_0065be20(lVar4);
    if ((cVar2 == '\0') && ((uVar1 & 7) != 0)) goto LAB_006ed7c4;
  }
  else {
LAB_006ed7c4:
    if (*(char *)(param_1 + 0x19) != '\0') goto LAB_006ed812;
    cVar2 = FUN_0065be20(lVar4);
    if (((cVar2 == '\0') || (*(char *)(lVar4 + 0x4a1) != '\x03')) ||
       (*(int *)(param_1 + 0x38) == -1)) goto LAB_006ed812;
    cVar2 = FUN_006f37e0(lVar4);
    if (cVar2 == '\0') goto LAB_006ed812;
  }
  uVar5 = FUN_0065b870(lVar4);
  uVar3 = thunk_FUN_041b2403(uVar5,0x101d,(longlong)*(int *)(param_1 + 0x3c),0);
  *(undefined4 *)(param_1 + 0x38) = uVar3;
LAB_006ed812:
  return *(undefined4 *)(param_1 + 0x38);
}

