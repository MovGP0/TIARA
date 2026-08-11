/* Ghidra address: 01993760 */
/* Ghidra symbol: FUN_01993760 */


void FUN_01993760(longlong param_1,longlong *param_2)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_40;
  undefined4 local_3c [3];
  
  if ((param_2 != (longlong *)0x0) &&
     ((((undefined **)*param_2 != &PTR_FUN_017c0190 ||
       (cVar1 = FUN_017c25f0(param_2), cVar1 == '\0')) &&
      (cVar1 = (**(code **)(*param_2 + 0x118))(param_2), cVar1 != '\0')))) {
    uVar2 = (**(code **)(*param_2 + 0x1c8))();
    uVar4 = (uint)uVar2;
    iVar3 = 0;
    if (-1 < (int)(uVar4 - 1)) {
      do {
        cVar1 = (**(code **)(*param_2 + 0x1d8))(param_2,iVar3);
        if (cVar1 == '\0') {
          (**(code **)(*param_2 + 0x1f0))(param_2,iVar3,local_3c,&local_40);
          cVar1 = FUN_017c25c0(*(undefined8 *)(param_1 + 0x68),local_3c[0],local_40);
          if (cVar1 != '\0') {
            FUN_0198a830(param_1 + 0x70,local_3c[0],local_40);
          }
        }
        iVar3 = iVar3 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
  }
  return;
}

