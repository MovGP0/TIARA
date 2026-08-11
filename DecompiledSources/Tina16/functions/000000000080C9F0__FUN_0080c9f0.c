/* Ghidra address: 0080c9f0 */
/* Ghidra symbol: FUN_0080c9f0 */


void FUN_0080c9f0(longlong param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  if (*param_2 == 0xb049) {
    iVar3 = 0;
    if (*(longlong *)(param_1 + 0x188) != 0) {
      iVar3 = (int)*(undefined8 *)(*(longlong *)(param_1 + 0x188) + -8);
    }
    iVar2 = 0;
    if (-1 < iVar3 + -1) {
      do {
        lVar4 = (longlong)iVar2;
        if ((*(int *)(*(longlong *)(param_1 + 0x188) + lVar4 * 0x18) ==
             (int)*(undefined8 *)(param_2 + 2)) &&
           (*(longlong *)(*(longlong *)(param_1 + 0x188) + 8 + lVar4 * 0x18) != 0)) {
          if (*(char *)(*(longlong *)(param_1 + 0x188) + 0x10 + lVar4 * 0x18) != '\0') {
            FUN_00805a90(*(undefined8 *)(*(longlong *)(param_1 + 0x188) + 8 + lVar4 * 0x18),
                         *(undefined8 *)(param_2 + 4),lVar4 * 3,param_4,*(undefined8 *)param_2,
                         *(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4),
                         *(undefined8 *)(param_2 + 6));
            return;
          }
          FUN_0065b830(*(undefined8 *)(*(longlong *)(param_1 + 0x188) + 8 + lVar4 * 0x18));
          FUN_00655e40(*(undefined8 *)(*(longlong *)(param_1 + 0x188) + 8 + lVar4 * 0x18));
          return;
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  else {
    uVar1 = thunk_FUN_03e425c0(*(undefined8 *)(param_1 + 0x2e0),*param_2,
                               *(undefined8 *)(param_2 + 2),*(undefined8 *)(param_2 + 4));
    *(undefined8 *)(param_2 + 6) = uVar1;
  }
  return;
}

