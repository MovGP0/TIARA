/* Ghidra address: 0081d700 */
/* Ghidra symbol: FUN_0081d700 */


void FUN_0081d700(longlong param_1,int *param_2)

{
  uint uVar1;
  char cVar2;
  
  FUN_00786c80(param_1,param_2);
  if (*param_2 == 0x47) {
    cVar2 = FUN_00818440(param_1);
    if ((cVar2 != '\0') && (*(char *)(*(longlong *)(param_1 + 0x10) + 0x4d2) == '\x02')) {
      uVar1 = *(uint *)(*(longlong *)(param_2 + 4) + 0x20);
      if (((uVar1 & 1) == 0) || ((uVar1 & 2) == 0)) {
        if ((uVar1 & 2) == 0) {
          *(undefined4 *)(param_1 + 0xf8) = *(undefined4 *)(*(longlong *)(param_2 + 4) + 0x10);
          *(undefined4 *)(param_1 + 300) = *(undefined4 *)(*(longlong *)(param_2 + 4) + 0x14);
        }
        if ((*(uint *)(*(longlong *)(param_2 + 4) + 0x20) & 1) == 0) {
          *(undefined4 *)(param_1 + 0x130) = *(undefined4 *)(*(longlong *)(param_2 + 4) + 0x18);
          *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(*(longlong *)(param_2 + 4) + 0x1c);
        }
      }
    }
  }
  return;
}

