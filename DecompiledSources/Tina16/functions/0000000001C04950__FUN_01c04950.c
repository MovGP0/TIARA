/* Ghidra address: 01c04950 */
/* Ghidra symbol: FUN_01c04950 */


void FUN_01c04950(longlong *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined1 uVar2;
  longlong lVar3;
  char local_29 [9];
  
  cVar1 = FUN_01c06f30(param_1);
  if (cVar1 == '\0') {
    return;
  }
  lVar3 = (**(code **)(*param_1 + 0x220))(param_1,0,local_29,*(undefined4 *)(param_1[100] + 0xa0));
  if (lVar3 != 0) {
    if ((local_29[0] == '\0') &&
       (((cVar1 = (**(code **)(*param_1 + 0xf0))(param_1), cVar1 == '\0' ||
         (*(int *)(param_1[100] + 0xa0) == -1)) &&
        ((*(ushort *)((longlong)param_1 + 0x34) & 0x10) == 0)))) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
    FUN_007d6cc0(lVar3,param_1[0x62],*param_2,param_2[1],*(undefined4 *)(param_1[100] + 0xa0),3,0,
                 uVar2);
    return;
  }
  return;
}

