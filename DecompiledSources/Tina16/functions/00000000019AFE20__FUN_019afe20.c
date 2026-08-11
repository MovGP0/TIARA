/* Ghidra address: 019afe20 */
/* Ghidra symbol: FUN_019afe20 */


undefined8 FUN_019afe20(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_40;
  int local_3c [3];
  
  cVar1 = FUN_0198a580(param_2);
  if ((cVar1 == '\x05') && (cVar1 = FUN_017c3740(param_2), cVar1 != '\0')) {
    iVar2 = (**(code **)(*param_2 + 0x1c8))();
    iVar3 = 0;
    if (-1 < iVar2 + -1) {
      do {
        (**(code **)(*param_2 + 0x1f0))(param_2,iVar3,local_3c,&local_40);
        if ((*(int *)(param_1 + 0x58) == local_3c[0]) && (*(int *)(param_1 + 0x60) == local_40)) {
          return 1;
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  return 0;
}

